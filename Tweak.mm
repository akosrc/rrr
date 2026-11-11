#import <JRMemory/JRMemory.h>
#import <UIKit/UIKit.h>

// --- KEY SİSTEMİ ENTEGRASYONU BAŞLANGIÇ ---
extern void showKeyMenu(void);
extern NSString* globalActiveKey;

static BOOL isKeyAuthenticated = NO;

// KeySystem.mm'den başarılı giriş yapıldığında gönderilen "StartHack" bildirimini dinliyoruz
__attribute__((constructor))
static void initKeyObserver() {
    [[NSNotificationCenter defaultCenter] addObserverForName:@"StartHack" object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
        isKeyAuthenticated = YES;
        NSLog(@"[DARK IOS] Basarili giris! Hack sistemi aktif edildi.");
    }];
}
// --- KEY SİSTEMİ ENTEGRASYONU BİTİŞ ---


// --- MENÜ VE HAFIZA FONKSİYONLARI ---
bool LockStatus = false;
bool SpeedPlayer = false;

bool hasASLR() {
    const struct mach_header *mach;
    mach = _dyld_get_image_header(0);
    if (mach->flags & MH_PIE) { return TRUE; } else { return FALSE; }
}

long long get_slide() {
    return _dyld_get_image_vmaddr_slide(0);
}

long long calculateAddress(long long offset) {
    if (hasASLR()) { long long slide = get_slide(); return (slide + offset); } 
    else { return offset; }
}

bool getType(unsigned int data) {
    int a = data & 0xffff8000;
    int b = a + 0x00008000;
    int c = b & 0xffff7fff;
    return c;
}

bool vm_writeData(long long offset, unsigned int data) {
    kern_return_t err;
    mach_port_t port = mach_task_self();
    long long address = calculateAddress(offset);

    err = vm_protect(port, (vm_address_t)address, sizeof(data), NO, VM_PROT_READ | VM_PROT_WRITE | VM_PROT_COPY);
    if (err != KERN_SUCCESS) { return FALSE; }

    if(getType(data)) {
        data = CFSwapInt32(data);
        err = vm_write(port, (vm_address_t)address, (vm_offset_t)&data, sizeof(data));
    } else {
        data = (unsigned short)data;
        data = CFSwapInt16(data);
        err = vm_write(port, (vm_address_t)address, (vm_offset_t)&data, sizeof(data));
    }
    
    if (err != KERN_SUCCESS) { return FALSE; }
    
    err = vm_protect(port, (vm_address_t)address, sizeof(data), NO, VM_PROT_READ | VM_PROT_EXECUTE);
    return TRUE;
}

void setLockStatus(bool state) {
    LockStatus = state;
    if (LockStatus) {
        vm_writeData(0x102CA170C, 0x1F2003D5);
    }
}

void setSpeedPlayer(bool state) {
    SpeedPlayer = state;
    if (SpeedPlayer) {
        vm_writeData(0x102C10D84, 0x0810281E);
    }
}


// --- HOOK KISMI (KEY KONTROLÜ BURADA YAPILIYOR) ---
%hook UIViewController

- (void)viewDidLoad {
    %orig; // Orijinal kodu çalıştır
    
    // Eğer key henüz doğrulanmadıysa ve bu ekran ana ekransa (veya oyunun ilk ekranıysa)
    if (!isKeyAuthenticated && globalActiveKey == nil) {
        // Uygulama açıldığında Key menüsünü tetikle
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!isKeyAuthenticated && globalActiveKey == nil) {
                showKeyMenu();
            }
        });
    }
}

%end

%hook TweakViewController

- (void)lockStatusChanged:(UISwitch *)sender {
    setLockStatus(sender.isOn);
}

- (void)speedPlayerChanged:(UISwitch *)sender {
    setSpeedPlayer(sender.isOn);
}

%end
