       // ==========agha77mm ========= //
       // ==========agha77mm ========= //
       // ==========agha77mm ========= //
	   
#include "Includes.h"
#include "obfuscate.h"
#include "Tools.h"
#include "Rect.h"
#include "fake_dlfcn.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "Spoof.h"
#include "plthook.h"
#include "Items.h"
#include "LogoMenu.h"
#include "iconAGHA.h"
#include "json.hpp"
#include "Iconcpp.h"
#include "font/Roboto_Black.h"
#include "foxcheats/include/ScanEngine.hpp"
#include "Icon.h"
#include "Font.h"
#include "Arabic.h"
using json = nlohmann::json;
#include "Color.h"
#include "CN.h"
#include "SDK.hpp"
#include "Vector2.hpp" 
#include "Vector3.hpp" 
#include "XorStr.h"
using namespace SDK;
#define STB_IMAGE_IMPLEMENTATION
#include <imgui/stb_image.h>
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"

#include "KittyMemory/MemoryPatch.h"

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
uint32_t Colorss[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

static float isRed = 0.0f, isGreen = 0.01f, isBlue = 0.0f;

//image include 

#define HOOK_LIB_NO_ORIG
#define HOOK_LIB
#define PLTHOOK_FUNCTION_NOT_FOUND

ImFont* Roboto_Black;
uintptr_t UE4;

float TEXT1Y, TEXT1X, TEXT2X, TEXT2Y; 
       // ==========agha77mm ========= //
       // ==========agha77mm ========= //

       // ==========agha77mm ========= //

#define IM_PI                   3.14159265358979323846f
#define RAD2DEG( x )  ( (float)(x) * (float)(180.f / IM_PI) )
#define DEG2RAD( x ) ( (float)(x) * (float)(IM_PI / 180.f) )
 
 #define kadmmod OBFUSCATE("libanogs.so")
#define kadmmod OBFUSCATE("libUE4.so")
#define PATCH_LIB

ImVec4 accentcolor = ImColor(255,0,0);
ImColor frame = (accentcolor);
ImVec4 color(1.0f, 0.0f, 0.0f, 1.0f);

ImFont* Pra;

static int helmett3 = 0;
static int bag3 = 0;
int modM4 = 101004;
int modAKM = 101001;
bool autoM = false;
float autoMY = 115.0f;
static int Hair = 2;
static int modXsuit = 1400129;
bool ModSkinn = false;
bool KillMessage = false;
bool LobbySkin = false;
#include "jsonPreferences.h"
int sEmote1 = 2200101;
int sEmote2 = 2200201;
int sEmote3 = 2200301;
bool ModSkinnn = false;
int ModEmote1 = 0;
namespace Active {
  inline int SkinCarDefault = 0;
  inline int SkinCarMod = 0;
  inline int SkinCarNew = 0;
}

#include "Menu.h"

#define GNames_Offset 0x4f6c570
#define GEngine_Offset 0xa7db1c0 //UEngine
#define GUObject_Offset 0xa5c9878
#define GetActorArray_Offset 0x6dd7428
#define Canvas_Map_Offset 0xa3e2058
#define ProcessEvent_Offset 0x69289f0 //Child
#define ProcessEvent_Offset 0x51d5584 //Main
#define GNativeAndroidApp_Offset 0xa3e1994
#define Actors_Offset 0x70

json items_data;
std::string g_Token, g_Auth;
bool bValid = false;
bool ItemsEsp = false;
bool Btenable;
bool AGHAXX;
bool skinkill;
bool skinD;
bool sitscope;
bool Scope;
bool Switch;
bool instanthitv2f;
bool testForH;
bool textborder;
int Test55;
bool fake;
bool testForH2;
bool VisCheck;
bool OneShotKill;
bool AghaX;
float BulletNumSingleShot;
bool AutoAGHA;
bool FovAGHA;
bool FastShot;
bool head69;
bool Expiry = true;
bool Magic;
bool Autofire;
bool fastomar;
bool ZoomUp;
bool AGHANew;
float SetZoomUp = 20.0f;
bool shott69;
bool shott99;
float fastomar1;
bool FastScope;
bool CrossColor;
bool AutoFireOff;
bool SitSix;
bool AutoJump;
bool agha3;
bool agha99;
float speedknock12;
bool nofog;
bool fastLX;
bool FLY;
bool magiccc;
bool ChangeWeapon;
float fastLXzis;
bool GameInfo;
bool shott1;
bool qwcifqvs86y8fify;
bool HeadCpp;
bool agha8;
bool HeadReme;
bool headv69;
bool HeadEZ;
bool HeadSexy;
bool jumpv1;
bool MagicAGHA;
bool jumpv2;
bool Magicbu;
bool rec0;
bool IgnoreKnock;
int expiry;
bool FLASSHHHHHHH;
bool FlyNew;
uintptr_t g_UE4;
uintptr_t g_Anogs;
uintptr_t CrashSight;
uintptr_t g_cloud;
uintptr_t TDataMaster;
uintptr_t Anogs;
uintptr_t igshare;
uintptr_t INTLFoundation;
float SkeletonSize = 2.4f;
float menu[4] = {255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f};
int FOV = 100;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
bool showBone = false, showBox = false, showRay = false, showInfo = false, showRadar = false;
bool showItem = true, show556 = true, show762 = true, showRifle = true, showMirror = true, showExpansion = true, showDrug = true, showArmor = true, showSubmachine = false, showSniper = false, showOtherParts = false;
bool showVehicle = false, showGrenade = false;
bool aimbot = false, dieNoAim = false, showtouch = false;
bool showChest = false, showDrop = false;
bool aimShortDis = false;
bool showRange = false;
bool showImg = false, showText = false, stroke = false;
bool showWarning = false, showTarget = false;
float aimRange = 400.f, radarLocation = 800.f, radarLocation2 = 1650.f;
int espWidth = 1, boneWidth = 3;
int boxType = 1, aimType = 0, aimLocation = 0;
bool aimFire = false, aimOpen = false;

ImVec4 esp_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 bot_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 ray_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 bone_color = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 vehicle_color = ImVec4(0 / 255.f, 255 / 255.f, 255 / 255.f, 255 / 255.f);
ImVec4 rifle_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 submachine_color = ImVec4(255 / 255.f, 110 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 snipe_color = ImVec4(144 / 255.f, 238 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 box_color = ImVec4(255 / 255.f, 192 / 255.f, 203 / 255.f, 255.f / 255.f);
ImVec4 drop_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 drug_color = ImVec4(255 / 255.f, 105 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 armor_color = ImVec4(255 / 255.f, 215 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_556 = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_762 = ImVec4(255 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 mirror_color = ImVec4{255.f / 255.f, 144.f / 255.f, 0.f / 255.f, 255.f / 255.f};
ImVec4 otherparts_color = ImVec4{245.f / 255.f, 245.f / 255.f, 245.f / 255.f, 255.f / 255.f};
ImVec4 expansion_color = ImVec4{208.f / 255.f, 128.f / 255.f, 114.f / 255.f, 255.f / 255.f};
ImVec4 aim_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);
bool HIDEESP = true;
bool initImGui = false;
static std::string EXP = " ";
static std::string SLOT = " ";
static std::string modname = " ";
static std::string mod_status = " ";
static std::string credit = " ";
static std::string key = " ";
static bool ZOPRY = false;
static bool MenuEn = true;
bool Bypass = true;
static float rainbowTimePIRO = 0.0f;

int OpenURL(const char* url)
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    if (method_id == NULL)
        return -4;
    jstring retStr = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}

        void DrawFilledRectangle(float X, float Y, float Width, float Height, ImColor Color)
{
    ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(X, Y), ImVec2(X + Width, Y + Height), Color);
}

std::string formatExpiryTime(int expiryInSeconds) {
    int hours = expiryInSeconds / 3600;
    int minutes = (expiryInSeconds % 3600) / 60;
    int seconds = expiryInSeconds % 60;

    std::string formattedTime;
    if (hours > 0)
        formattedTime += std::to_string(hours) + " hours";
    if (minutes > 0)
        formattedTime += " and " + std::to_string(minutes) + " minutes";

    return formattedTime;
}

float animationTime = 0.0f;

inline ImU32 ImVec4ToImU32(const ImVec4& color) {
    return IM_COL32(
        static_cast<ImU8>(color.x * 255.0f),
        static_cast<ImU8>(color.y * 255.0f),
        static_cast<ImU8>(color.z * 255.0f),
        static_cast<ImU8>(color.w * 255.0f)
    );
}

inline ImVec4 CalculateRainbowColor(float timeOffset) {
    float frequency = 3.0f; // Adjust speed here
    float red   = std::sin(frequency * timeOffset + 0) * 0.5f + 0.5f;
    float green = std::sin(frequency * timeOffset + 2) * 0.5f + 0.5f;
    float blue  = std::sin(frequency * timeOffset + 4) * 0.5f + 0.5f;
    return ImVec4(red, green, blue, 1.0f); // Fully opaque
}

time_t rng = 0;
//std::string EXP = "";
std::string name ="";
std::string device = "";
std::string status = "";
std::string floating ="";
bool MOHAMED; 
bool AIMMM; 
static int tab;
static int tab2;

static int agha;
static int agha2;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, int color) {
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}
static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); // Auto 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
   //return {};
            return ViewPort->World;
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> GetActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);
     int totalEnemies = 0, totalBots = 0;

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}

enum EAimTarget {
    Head = 0,
    Chest = 1,
};

enum EAimTrigger {
    Shooting = 0,
    None = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};
enum EAimMode {
    AimBullet = 0,
    Pbullet = 1,
    AimBot = 2
};

std::map<int, bool> Items;
namespace godview
{
  float godY;
  float godX;
  float godZ;
}
struct sConfig {
	bool shake;
	bool Bypass;
	bool CrossTest;
	bool FLASH;
	bool FastRunNeww;
	bool AimPosNew;
	bool agha69;
	bool AimPosBody;
	bool AimPosClassic;
    int materAGHA;
    bool fuckoff;
    bool fuck;
	bool Magic;
	bool speedknock;
	bool HitEffectBig;
	bool agha2;
	bool AGHA;
	bool FrontGodview;
	bool godview;
	bool ShowDamaze;
	bool HitEffectRinbow1;
	bool ShowDamage;
	bool Hit;
	bool OneShotKill;
	bool GodviewWeapon;
	bool XEFFECT;
	float XEFFECTsize;
	bool SilentGodview;
	bool AutoParachute;
	bool HitEffect;
	bool HitEffectv3;
	bool HighJumpv1;
    bool speedshoot;
	bool XhitCostumColorRoyal;
    float aghashot;
    bool CorssHairColor;
    float Royal_color[4] = { 1.0f, 0.0f, 0.0f, 1.0f };
    bool XhitRainBowRoyal;
    float PIROrainbowSpeedPIRO;
    float xHitEffect;
	bool Skeleton;
	bool AutoFire;
	bool VisCheck;
	bool VisAGHA;
	bool Cross;
	bool VisCheckBt;	
	bool Line;
	int Meter;
	bool 调节;
	bool Small;
	bool Fps;
	bool Ipad;
	int IpadS;
	float ControlSpeed;
    float ControlSpeedf;
	int FLASH1;
	bool Zoom; 
	float SetZoom; 
    struct sPlayerESP {
        bool Line;
        bool enemycount;
        bool SafeZone;
        bool Alert69;
        bool Alert3;
        bool Box;
        bool Health;
        bool HitEffectBig;
        bool GameInfo1;
        bool GameInfo;
        bool WARNING;
        bool HealthPC;
        bool LineCenter;
        bool LineDown;
        bool Alert1;
        bool Skeleton;
        bool Name;
        bool Alert; 
        bool Statue;
        bool Distance;
        bool TeamID;
        bool Weapon; 
        bool Weapon1;
        bool Vehicle;
		bool Box3D;
        bool NoBot;
        bool Grenade;
        bool LootBox;
        bool LootBoxitems;
        bool Nation; 
        bool VehicleBox;
        bool VehicleImage;
        bool VehicleName;
        bool ScreenAlert;
    };

    sPlayerESP PlayerESP{0};
    sPlayerESP ESPMenu{0};

    struct sAimMenu {
        bool Enable;
        bool Enable2;
        bool AimBot;
        bool AimAuto;
        bool AimBody;
        float AimSet;
        bool Predicted;
        bool AimHead;
        bool AutoFireAuto;
        bool AutoFireSingle;
        bool AimNeck;
        bool AimCustom;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool IgnoreKnocked;
        bool IgnoreBot;
        bool VisCheck;
		bool Pred;
		bool Prediction;
		bool Pos;
	    int Cross = 100;
		bool RecoilComparison;
		int Meter;
		float Recc;
		float Position;
    };
    sAimMenu SilentAim{0};
    sAimMenu AimBot{0};

    struct sHighRisk {
        bool Shake;
        bool Recoil;
        bool Instant;
        bool Ipad;
        bool NoFog;
        bool Switch;
        bool Reload;
        bool Scope;
        bool FastMove;
        bool FlashV1;
        bool HS;
        bool HitEffectV2;
        bool HitEffect;
        bool instanthit;
        bool xhitv3;
        bool Jump;
        bool Flash;
        bool Parachute;
    };
    sHighRisk HighRisk{0};

    struct sOTHER {
        bool EXP;
        bool BLOCK_SPECTATE;
        bool FPS;
        bool HIDEESP;
    };
    sOTHER OTHER{0};
	
	struct sColorsESP {
        float *Line;
        float *Box;
        float *Name;
        float *Distance;
        float *Skeleton;
        float *SkeletonVisible;
		float *Fov;
	

        float *Vehicle;
    };
    sColorsESP ColorsESP{0};
};
sConfig Config{0};



struct TextureInfo{
    ImTextureID textureID;
    int w; 
    int h;
};


TextureInfo CreateTexture(const unsigned char* buf, int len)
{
    TextureInfo image;
    //从文件加载
    unsigned char* image_data = stbi_load_from_memory(buf, len, &image.w, &image.h, NULL, 0);
    if (image_data == NULL)
        perror("文件不存在");
    //创建 OpenGL 纹理标识符
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    //设置显示过滤参数
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); //对于非二次方纹理，这在 WebGL 上是必需的
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); //相同的

    //将像素上传到纹理
    #if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    #endif    
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image.w, image.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);
    image.textureID = image_texture;

    return image;
}




TextureInfo LogoMenu;


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\

struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;


bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}

void* (*kill1)(UObject* pObj, UFunction* pFunc, void* pArgs);
void* kill2(UObject* pObj, UFunction* pFunc, void* pArgs){
auto MEROX = g_LocalPlayer;
if( std::string(pObj->GetName().c_str()).find("DeadBoxAvatarComponent") != std::string::npos ) {
UDeadBoxAvatarComponent *DeadBoxPointer = ( UDeadBoxAvatarComponent *) pObj; 
if( std::string(pFunc->GetFullName().c_str()).find("GetLuaFilePath") != std::string::npos ) {
uint32_t Key = DeadBoxPointer->IsSelf();
if(MEROX->WeaponManagerComponent->CurrentWeaponReplicated){
if (skinD){
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){
if (preferences.Config.Skin.M416 == 1) 
DeadBoxPointer->ChangeItemAvatar(1101004046, true); //Glacier - M416 
if (preferences.Config.Skin.M416 == 2) 
DeadBoxPointer->ChangeItemAvatar(1101004062, true); //The Fool - M416
if (preferences.Config.Skin.M416 == 3) 
DeadBoxPointer->ChangeItemAvatar(1101004078, true); //Lizard Roar - M416
if (preferences.Config.Skin.M416 == 4) 
DeadBoxPointer->ChangeItemAvatar(1101004086, true); // - M416
if (preferences.Config.Skin.M416 == 5) 
DeadBoxPointer->ChangeItemAvatar(1101004098, true); //Call of the Wild - M416
if (preferences.Config.Skin.M416 == 6) 
DeadBoxPointer->ChangeItemAvatar(1101004138, true); //Imperial Splendor - M416
if (preferences.Config.Skin.M416 == 7) 
DeadBoxPointer->ChangeItemAvatar(1101004163, true); //Silver Guru - M416
if (preferences.Config.Skin.M416 == 8) 
DeadBoxPointer->ChangeItemAvatar(1101004201, true); //TechnoCore - M416
if (preferences.Config.Skin.M416 == 9) 
DeadBoxPointer->ChangeItemAvatar(1101004209, true); //TechnoCore - M416
if (preferences.Config.Skin.M416 == 10) 
DeadBoxPointer->ChangeItemAvatar(1101004218, true); //TechnoCore - M416
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
if (preferences.Config.Skin.AKM == 1)
DeadBoxPointer->ChangeItemAvatar( 1101001089, true); //
if (preferences.Config.Skin.AKM == 2)
DeadBoxPointer->ChangeItemAvatar( 1101001103, true); //The Seven Seas - AKM
if (preferences.Config.Skin.AKM == 3)
DeadBoxPointer->ChangeItemAvatar( 1101001116, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.AKM == 4)
DeadBoxPointer->ChangeItemAvatar( 1101001128, true); //Glacier - AKM
if (preferences.Config.Skin.AKM == 5)
DeadBoxPointer->ChangeItemAvatar( 1101001143, true); //Desert Fossil - AKM
if (preferences.Config.Skin.AKM == 6)
DeadBoxPointer->ChangeItemAvatar( 1101001154, true); //Jack-o -lantern - AKM
if (preferences.Config.Skin.AKM == 7)
DeadBoxPointer->ChangeItemAvatar( 1101001174, true); //Ghillie Dragon - AKM  
if (preferences.Config.Skin.AKM == 8)
DeadBoxPointer->ChangeItemAvatar( 1101001213, true); //Gold Pirate - AKM
if (preferences.Config.Skin.AKM == 9)
DeadBoxPointer->ChangeItemAvatar( 1101001231, true);
if (preferences.Config.Skin.AKM == 10)
DeadBoxPointer->ChangeItemAvatar( 1101001242, true);
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR")){
if (preferences.Config.Skin.Scar == 1)
DeadBoxPointer->ChangeItemAvatar( 1101003057, true); //Sculpture - AKM
if (preferences.Config.Skin.Scar == 2)
DeadBoxPointer->ChangeItemAvatar( 1101003070, true); //The Seven Seas - AKM
if (preferences.Config.Skin.Scar == 3)
DeadBoxPointer->ChangeItemAvatar( 1101003080, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.Scar == 4)
DeadBoxPointer->ChangeItemAvatar( 1101003119, true); //Glacier - AKM
if (preferences.Config.Skin.Scar == 5)
DeadBoxPointer->ChangeItemAvatar( 1101003146, true); //Desert Fossil - AKM
if (preferences.Config.Skin.Scar == 6)
DeadBoxPointer->ChangeItemAvatar( 1101003167, true); //Jack-o -lantern - AKM
if (preferences.Config.Skin.Scar == 7)
DeadBoxPointer->ChangeItemAvatar( 1101003181, true); //Jack-o -lantern - AKM
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){
if (preferences.Config.Skin.M762 == 1)
DeadBoxPointer->ChangeItemAvatar( 1101008026, true); //Sculpture - AKM
if (preferences.Config.Skin.M762 == 2)
DeadBoxPointer->ChangeItemAvatar( 1101008051, true); //The Seven Seas - AKM
if (preferences.Config.Skin.M762 == 3)
DeadBoxPointer->ChangeItemAvatar( 1101008061, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.M762 == 4)
DeadBoxPointer->ChangeItemAvatar( 1101008081, true); //Glacier - AKM
if (preferences.Config.Skin.M762 == 5)
DeadBoxPointer->ChangeItemAvatar( 1101008104, true); //Desert Fossil - AKM
if (preferences.Config.Skin.M762 == 6)
DeadBoxPointer->ChangeItemAvatar( 1101008116, true); //Jack-o -lantern - AKM
if (preferences.Config.Skin.M762 == 7)
DeadBoxPointer->ChangeItemAvatar( 1101008126, true); //Jack-o -lantern - AKM
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
if (preferences.Config.Skin.Groza == 1)
DeadBoxPointer->ChangeItemAvatar( 1101005019, true); //Sculpture - AKM
if (preferences.Config.Skin.Groza == 2)
DeadBoxPointer->ChangeItemAvatar( 1101005025, true); //The Seven Seas - AKM
if (preferences.Config.Skin.Groza == 3)
DeadBoxPointer->ChangeItemAvatar( 1101005038, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.Groza == 4)
DeadBoxPointer->ChangeItemAvatar( 1101005043, true); //Glacier - AKM
if (preferences.Config.Skin.Groza == 5)
DeadBoxPointer->ChangeItemAvatar( 1101005052, true); //Glacier - AKM
if (preferences.Config.Skin.Groza == 6)
DeadBoxPointer->ChangeItemAvatar( 1101005082, true); //Glacier - AKM
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){
if (preferences.Config.Skin.UZI == 1)
DeadBoxPointer->ChangeItemAvatar( 1102001024, true); //Sculpture - AKM
if (preferences.Config.Skin.UZI == 2)
DeadBoxPointer->ChangeItemAvatar( 1102001036, true); //The Seven Seas - AKM
if (preferences.Config.Skin.UZI == 3)
DeadBoxPointer->ChangeItemAvatar( 1102001058, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.UZI == 4)
DeadBoxPointer->ChangeItemAvatar( 1102001069, true); //Glacier - AKM
if (preferences.Config.Skin.UZI == 5)
DeadBoxPointer->ChangeItemAvatar( 1102001089, true); //Glacier - AKM
if (preferences.Config.Skin.UZI == 6)
DeadBoxPointer->ChangeItemAvatar( 1102001102, true); //Glacier - AKM
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
if (preferences.Config.Skin.M16A4 == 1)
DeadBoxPointer->ChangeItemAvatar( 1101002029, true); //Sculpture - AKM
if (preferences.Config.Skin.M16A4 == 2)
DeadBoxPointer->ChangeItemAvatar( 1101002056, true); //The Seven Seas - AKM
if (preferences.Config.Skin.M16A4 == 3)
DeadBoxPointer->ChangeItemAvatar( 1101002068, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.M16A4 == 4)
DeadBoxPointer->ChangeItemAvatar( 1101002081, true); //Glacier - AKM
if (preferences.Config.Skin.M16A4 == 5)
DeadBoxPointer->ChangeItemAvatar( 1101002103, true); //Glacier - AKM
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){
if (preferences.Config.Skin.UMP == 1)
DeadBoxPointer->ChangeItemAvatar( 1102002043, true); //Sculpture - AKM
if (preferences.Config.Skin.UMP == 2)
DeadBoxPointer->ChangeItemAvatar( 1102002061, true); //The Seven Seas - AKM
if (preferences.Config.Skin.UMP == 3)
DeadBoxPointer->ChangeItemAvatar( 1102002090, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.UMP == 4)
DeadBoxPointer->ChangeItemAvatar( 1102002117, true); //Glacier - AKM
if (preferences.Config.Skin.UMP == 5)
DeadBoxPointer->ChangeItemAvatar( 1102002124, true); //The Seven Seas - AKM
if (preferences.Config.Skin.UMP == 6)
DeadBoxPointer->ChangeItemAvatar( 1102002129, true); //Roaring Tiger - AKM
if (preferences.Config.Skin.UMP == 7)
DeadBoxPointer->ChangeItemAvatar( 1102002136, true); //Glacier - AKM
}

if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
if (preferences.Config.Skin.AWM == 1)
DeadBoxPointer->ChangeItemAvatar( 1103003022, true); //Sculpture - AKM
if (preferences.Config.Skin.AWM == 2)
DeadBoxPointer->ChangeItemAvatar( 1103003030, true); //Sculpture - AKM
if (preferences.Config.Skin.AWM == 3)
DeadBoxPointer->ChangeItemAvatar( 1103003042, true); //Sculpture - AKM
if (preferences.Config.Skin.AWM == 4)
DeadBoxPointer->ChangeItemAvatar( 1103003062, true); //Sculpture - AKM
}
if(strstr(MEROX->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){
if (preferences.Config.Skin.M24 == 1)
DeadBoxPointer->ChangeItemAvatar( 1103002030, true); //Sculpture - AKM
}
}}}}

const char *pBroadCast = ("Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClientWithStruct");//by  
 if (pFunc) {
 if (pFunc->GetFullName() == pBroadCast) {
 ASTExtraPlayerController *pController = (ASTExtraPlayerController *) pObj;//by  
 if (pController) {
 auto Params = (ASTExtraPlayerController_BroadcastFatalDamageToClientWithStruct_Params *) pArgs;//by  
 if (Params) {
 auto GWorld = GetWorld();//by  
 if (GWorld){
 if (GWorld->NetDriver->ServerConnection)
 if(GWorld->NetDriver->ServerConnection->PlayerController){
 ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;//by  
 ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;//by  
 if(localController->PlayerKey == Params->FatalDamageParameter.CauserKey && !localController->STExtraBaseCharacter->CurrentVehicle && localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
 if (skinkill){
 if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "X-suit")){
 if (preferences.Config.Skin.XSuits == 1) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1405628;
  
  if (preferences.Config.Skin.XSuits == 2) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1405870;
  
  if (preferences.Config.Skin.XSuits == 3) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1405983;
  
    if (preferences.Config.Skin.XSuits == 4) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1406152;
  
    if (preferences.Config.Skin.XSuits == 5)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1406311;
 
    if (preferences.Config.Skin.XSuits == 6) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1406475;
  
  if (preferences.Config.Skin.XSuits == 7)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1406638;
  
  if (preferences.Config.Skin.XSuits == 8) 
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1406872;
    
    if (preferences.Config.Skin.XSuits == 9)
    Params->FatalDamageParameter.CauserWeaponAvatarID = 1406971;
 }
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
if (preferences.Config.Skin.AKM == 1)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001089;//by//Sculpture - AKM
if (preferences.Config.Skin.AKM == 2)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001103;//by//The Seven Seas - AKM
if (preferences.Config.Skin.AKM == 3)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001116;//by//Roaring Tiger - AKM
if (preferences.Config.Skin.AKM == 4)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001128;//by//Glacier - AKM
if (preferences.Config.Skin.AKM == 5)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001143;//by//Desert Fossil - AKM
if (preferences.Config.Skin.AKM == 6)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001154;//by//Jack-o'-lantern - AKM
if (preferences.Config.Skin.AKM == 7)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001174;//by//Ghillie Dragon - AKM  
if (preferences.Config.Skin.AKM == 8)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001213;//by//Gold Pirate - AKM
if (preferences.Config.Skin.AKM == 9)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001231;//by  
if (preferences.Config.Skin.AKM == 10)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001242;//by  
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){  
if (preferences.Config.Skin.M416 == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004046;//by//Glacier - M416 
if (preferences.Config.Skin.M416 == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004062;//by//The Fool - M416
if (preferences.Config.Skin.M416 == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004078;//by//Lizard Roar - M416
  if (preferences.Config.Skin.M416 == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004086;//by// - M416
if (preferences.Config.Skin.M416 == 5) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004098;//by//Call of the Wild - M416
if (preferences.Config.Skin.M416 == 6) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004138;//by//Imperial Splendor - M416
if (preferences.Config.Skin.M416 == 7) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004163;//by//Silver Guru - M416
if (preferences.Config.Skin.M416 == 8) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004201;//by//TechnoCore - M416
if (preferences.Config.Skin.M416 == 9) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004209;//by//TechnoCore - M416
if (preferences.Config.Skin.M416 == 10) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004218;//by//TechnoCore - M416
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){  
if (preferences.Config.Skin.M24 == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002030;//by//Glacier - M416 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
if (preferences.Config.Skin.Scar == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003057;//by//Water Blaster - SCAR-L
if (preferences.Config.Skin.Scar == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003070;//by//Enchanted Pumpkin - SCAR-L
 if (preferences.Config.Skin.Scar == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003080;//by//Operation Tomorrow - SCAR-L
 if (preferences.Config.Skin.Scar == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003119;//by//Drop the Bass - SCAR-L 
if (preferences.Config.Skin.Scar == 5) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003146;//by  
if (preferences.Config.Skin.Scar == 6) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003167;//by  
if (preferences.Config.Skin.Scar == 7) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003181;//by  
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){  
  if (preferences.Config.Skin.M762 == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008026;//by//8-bit Unicorn - M762
if (preferences.Config.Skin.M762 == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008051;//by//Messi Football Icon M762
 if (preferences.Config.Skin.M762 == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008061;//by//GACKT MOONSAGA-M762
 if (preferences.Config.Skin.M762 == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008081;//by//Lotus Fury - M762
if (preferences.Config.Skin.M762 == 5)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008104;//by//Concerto of Love - M762
if (preferences.Config.Skin.M762 == 6)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008116;//by//StarCore-M762
if (preferences.Config.Skin.M762 == 7)
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008126;//by//Stray Rebellion - M762
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
if (preferences.Config.Skin.Groza == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005019;//by  
if (preferences.Config.Skin.Groza == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005025;//by  
if (preferences.Config.Skin.Groza == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005038;//by
if (preferences.Config.Skin.Groza == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005043;//by
if (preferences.Config.Skin.Groza == 5) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005052;//by
if (preferences.Config.Skin.Groza == 6) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005082;//by
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){
if (preferences.Config.Skin.UZI == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001024;//by//Savagery - UZI
if (preferences.Config.Skin.UZI == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001036;//by//Ethereal Emblem - UZI
if (preferences.Config.Skin.UZI == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001058;//by//Romantic Moments - UZI
if (preferences.Config.Skin.UZI == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001069;//by//Shimmer Power - UZI
if (preferences.Config.Skin.UZI == 5) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001089;//by//Shimmer Power - UZI
if (preferences.Config.Skin.UZI == 6) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001102;//by//Shimmer Power - UZI
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

  if (preferences.Config.Skin.UMP == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002043;//by  
if (preferences.Config.Skin.UMP == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002061;//by  
if (preferences.Config.Skin.UMP == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002090;//by
if (preferences.Config.Skin.UMP == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002117;//by
if (preferences.Config.Skin.UMP == 5) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002124;//by
if (preferences.Config.Skin.UMP == 6) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002129;//by
if (preferences.Config.Skin.UMP == 7) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002136;//by
}

if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
if (preferences.Config.Skin.AWM == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003022;//by  
if (preferences.Config.Skin.AWM == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003030;//by  
if (preferences.Config.Skin.AWM == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003042;//by
if (preferences.Config.Skin.AWM == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003062;//by
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
if (preferences.Config.Skin.M16A4 == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002029;//by  
if (preferences.Config.Skin.M16A4 == 2) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002056;//by  
if (preferences.Config.Skin.M16A4 == 3) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002068;//by
if (preferences.Config.Skin.M16A4 == 4) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002081;//by
if (preferences.Config.Skin.M16A4 == 5) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002103;//by
}}}}}}}}
return kill1(pObj, pFunc, pArgs);
}}

static int prevXSuits = preferences.Config.Skin.XSuits;
static auto start = std::chrono::high_resolution_clock::now();
static bool callFunction = false;
static bool callNotify = false;
static bool callModSkin = false;


template<class T>
void GetAllActors(std::vector<T *> &Actors) {
UGameplayStatics *gGameplayStatics = (UGameplayStatics *) gGameplayStatics->StaticClass();
auto GWorld = GetWorld();
if (GWorld) {
TArray<AActor *> Actors2;
gGameplayStatics->GetAllActorsOfClass((UObject *) GWorld, T::StaticClass(), &Actors2);
for (int i = 0; i < Actors2.Num(); i++) {
Actors.push_back((T *) Actors2[i]);
}
}
}
void RenderESPPRIVATE(AHUD *HUD, int ScreenWidth, int ScreenHeight) {
  updateSkin();
        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localPlayerController = 0;

        
        UCanvas *Canvas = HUD->Canvas;
        if (Canvas) {

            
            UGameplayStatics *gGameplayStatics = (UGameplayStatics *) UGameplayStatics::StaticClass();
            auto GWorld = GetWorld();
            if (GWorld) {
                UNetDriver *NetDriver = GWorld->NetDriver;
                if (NetDriver) {
                    UNetConnection *ServerConnection = NetDriver->ServerConnection;
                    if (ServerConnection) {
                        localPlayerController = (ASTExtraPlayerController *) ServerConnection->PlayerController;
                    }
                }

                if (localPlayerController) {
                     
                    std::vector<ASTExtraPlayerCharacter *> PlayerCharacter;
                    GetAllActors(PlayerCharacter);
                    for (auto actor = PlayerCharacter.begin();
                         actor != PlayerCharacter.end(); actor++) {
                        auto Actor = *actor;

                        if (Actor->PlayerKey ==
                            ((ASTExtraPlayerController *) localPlayerController)->PlayerKey) {
                            localPlayer = Actor;
                            break;
                        }
                    }

                    {
                        if (localPlayer) {
							
							if (ModSkinn){
								
							
		
	 if (localPlayer->WeaponManagerComponent != 0) {
     if (localPlayer->WeaponManagerComponent->CurrentWeaponReplicated != 0 ) {
         int weapowep = localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponID();
		auto currentTime = std::chrono::steady_clock::now();
         auto landchud = localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->synData;
         auto timeDiff = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastWeaponChangeTime).count();
         if (timeDiff > 1000) {
         for (int j = 0; j < landchud.Num(); j++) {
             auto& weaponInfo = landchud[j];
             auto weaponid = weaponInfo.DefineID.TypeSpecificID;
             if (weaponid != 0)
             {
				 if (preferences.AKM && weapowep == 101001){
				 for (int i = 0; i < sizeof(akmv) / sizeof(akmv[0]); i++) {
                 if (weaponid == akmv[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(akmmag) / sizeof(akmmag[0]); i++) {
                 if (weaponid == akmmag[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.AKM_Mag;
                     break;
                  }
				 }
				}
				if (preferences.KAR98 && weapowep == 103001){
				 for (int i = 0; i < sizeof(kar) / sizeof(kar[0]); i++) {
                 if (weaponid == kar[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.K98;
                     break;
                  }
				 }
				}
				if (preferences.M24 && weapowep == 103002){
				 for (int i = 0; i < sizeof(m24) / sizeof(m24[0]); i++) {
                 if (weaponid == m24[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M24;
                     break;
                  }
				 }
				}
				if (preferences.AWM && weapowep == 103003){
				 for (int i = 0; i < sizeof(awm) / sizeof(awm[0]); i++) {
                 if (weaponid == awm[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.AWM;
                     break;
                  }
				 }
				}
				
				
				if (preferences.TOMMY && weapowep == 102004){
				 for (int i = 0; i < sizeof(tommy) / sizeof(tommy[0]); i++) {
                 if (weaponid == tommy[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Thompson;
                     break;
                  }
				 }
				}
				if (preferences.ACE32 && weapowep == 101102){
				 for (int i = 0; i < sizeof(ace32) / sizeof(ace32[0]); i++) {
                 if (weaponid == ace32[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.ACE32;
                     break;
                  }
				 }
				}
				
				if (preferences.BIZON && weapowep == 102005){
				 for (int i = 0; i < sizeof(bizon) / sizeof(bizon[0]); i++) {
                 if (weaponid == bizon[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Bizon;
                     break;
                  }
				 }
				}
				
				if (preferences.VECTOR && weapowep == 102003){
				 for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
                 if (weaponid == vector[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Vector;
                     break;
                  }
				 }
				}
				if (preferences.UMP && weapowep == 102002){
				 for (int i = 0; i < sizeof(ump) / sizeof(ump[0]); i++) {
                 if (weaponid == ump[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.UMP;
                     break;
                  }
				 }
				}
				if (preferences.UZI && weapowep == 102001){
				 for (int i = 0; i < sizeof(uzi) / sizeof(uzi[0]); i++) {
                 if (weaponid == uzi[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.UZI;
                     break;
                  }
				 }
				}
				if (preferences.M16 && weapowep == 101002){
				 for (int i = 0; i < sizeof(m16) / sizeof(m16[0]); i++) {
                 if (weaponid == m16[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M16A4;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m16s) / sizeof(m16s[0]); i++) {
                 if (weaponid == m16s[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M16A4_Stock;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m16mag) / sizeof(m16mag[0]); i++) {
                 if (weaponid == m16mag[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M16A4_Mag;
                     break;
                  }
				 }
				}
				if (preferences.PAN && weapowep == 108004){
				 for (int i = 0; i < sizeof(pan) / sizeof(pan[0]); i++) {
                 if (weaponid == pan[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Pan;
                     break;
                  }
				 }
				}
				if (preferences.AUG && weapowep == 101006){
				 for (int i = 0; i < sizeof(aug) / sizeof(aug[0]); i++) {
                 if (weaponid == aug[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.AUG;
                     break;
                  }
				 }
				}
				if (preferences.GROZA && weapowep == 101005){
				 for (int i = 0; i < sizeof(groza) / sizeof(groza[0]); i++) {
                 if (weaponid == groza[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Groza;
                     break;
                  }
				 }
				}
				if (preferences.DP28 && weapowep == 105002){
				 for (int i = 0; i < sizeof(dp) / sizeof(dp[0]); i++) {
                 if (weaponid == dp[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.DP28;
                     break;
                  }
				 }
				}
				if (preferences.M249 && weapowep == 105001){
				 for (int i = 0; i < sizeof(m249) / sizeof(m249[0]); i++) {
                 if (weaponid == m249[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M249;
                     break;
                  }
				 }
				}
				
				if (preferences.SCARL && weapowep == 101003){
				 for (int i = 0; i < sizeof(scar) / sizeof(scar[0]); i++) {
                 if (weaponid == scar[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(scarmag) / sizeof(scarmag[0]); i++) {
                 if (weaponid == scarmag[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.Scar_Mag;
                     break;
                  }
				 }
				}
				
				if (preferences.M762 && weapowep == 101008){
				 for (int i = 0; i < sizeof(m7) / sizeof(m7[0]); i++) {
                 if (weaponid == m7[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M762;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m7mag) / sizeof(m7mag[0]); i++) {
                 if (weaponid == m7mag[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M762_Mag;
                     break;
                  }
				 }
				}
				
				if (preferences.M416 && weapowep == 101004){
				 for (int i = 0; i < sizeof(m4v) / sizeof(m4v[0]); i++) {
                 if (weaponid == m4v[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_1;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m4mag) / sizeof(m4mag[0]); i++) {
                 if (weaponid == m4mag[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_2;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m4sight) / sizeof(m4sight[0]); i++) {
                 if (weaponid == m4sight[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_3;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m4stock) / sizeof(m4stock[0]); i++) {
                 if (weaponid == m4stock[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_4;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m4stock1) / sizeof(m4stock1[0]); i++) {
                 if (weaponid == m4stock1[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_stock;
                     break;
                  }
				 }
				 for (int i = 0; i < sizeof(m4reddot) / sizeof(m4reddot[0]); i++) {
                 if (weaponid == m4reddot[i]) {
                     weaponInfo.DefineID.TypeSpecificID = new_Skin.M416_reddot;
                     break;
                  }
				 }
				}
                 localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->DelayHandleAvatarMeshChanged();
                 lastWeaponChangeTime = currentTime;
             }
         }
     }
 }
}
//

if (localPlayer -> CurrentVehicle) {
        if (localPlayer -> CurrentVehicle -> VehicleAvatar) {
          std::string SkinIDStr = std::to_string((int) localPlayer -> CurrentVehicle -> VehicleAvatar -> GetDefaultAvatarID());
          Active::SkinCarDefault = localPlayer -> CurrentVehicle -> GetAvatarID();

		  
          if (preferences.Moto && strstr(SkinIDStr.c_str(), "1901")) {
            Active::SkinCarMod = new_Skin.Moto;
            Active::SkinCarNew = true;
          } else if (preferences.Dacia && strstr(SkinIDStr.c_str(), "1903")) {
            Active::SkinCarMod = new_Skin.Dacia;
            Active::SkinCarNew = true;
          } else if (preferences.Boat && strstr(SkinIDStr.c_str(), "1911")) {
            Active::SkinCarMod = new_Skin.Boat;
            Active::SkinCarNew = true;
          } else if (preferences.MiniBus && strstr(SkinIDStr.c_str(), "1904")) {
            Active::SkinCarMod = new_Skin.MiniBus;
            Active::SkinCarNew = true;
          } else if (preferences.Mirado && strstr(SkinIDStr.c_str(), "1914")) {
            Active::SkinCarMod = new_Skin.Mirado;
            Active::SkinCarNew = true;
          } else if (preferences.Mirado && strstr(SkinIDStr.c_str(), "1915")) {
            Active::SkinCarMod = new_Skin.Mirado;
            Active::SkinCarNew = true;
          } else if (preferences.Buggy && strstr(SkinIDStr.c_str(), "1907")) {
            Active::SkinCarMod = new_Skin.Buggy;
            Active::SkinCarNew = true;
          }else if (preferences.CoupeRB && strstr(SkinIDStr.c_str(), "1961")) {
            Active::SkinCarMod = new_Skin.CoupeRP;
            Active::SkinCarNew = true;
          } else if (preferences.BigFoot && strstr(SkinIDStr.c_str(), "1953")) {
            Active::SkinCarMod = new_Skin.Bigfoot;
            Active::SkinCarNew = true;
          } else if (preferences.UAZ && strstr(SkinIDStr.c_str(), "1908")) {
            Active::SkinCarMod = new_Skin.UAZ;
            Active::SkinCarNew = true;
          } else Active::SkinCarNew = false;

          if (Active::SkinCarDefault != Active::SkinCarMod && Active::SkinCarNew) {
            
            localPlayer -> CurrentVehicle -> VehicleAvatar -> ChangeItemAvatar(Active::SkinCarMod, true);
          }
        }
      }

 if (localPlayerController->BackpackComponent){
	 auto data = localPlayerController->BackpackComponent->ItemListNet;
	 auto bag = data.IncArray;
	 for (int j = 0; j < bag.Num(); j++) {
	 int ID = bag[j].Unit.DefineID.TypeSpecificID;
	 if (preferences.Outfit){
 for (int i = 0; i < sizeof(SuitX) / sizeof(SuitX[0]); i++) {
                 if (ID == SuitX[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = new_Skin.XSuits;
                     break;
                  }
				 }
				}
				if (preferences.Bagg){
for (int i = 0; i < sizeof(Bag) / sizeof(Bag[0]); i++) {
                 if (ID == Bag[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = bag3;
                     break;
                  }
				 }
				}
				if (preferences.Helmett){
for (int i = 0; i < sizeof(Helmet) / sizeof(Helmet[0]); i++) {
                 if (ID == Helmet[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = helmett3;
                     break;
                  }
				 }
				}
				if (preferences.Emote){
for (int i = 0; i < sizeof(emote1) / sizeof(emote1[0]); i++) {
                 if (ID == emote1[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = sEmote1;
                     break;
                  }
				 }
for (int i = 0; i < sizeof(emote2) / sizeof(emote2[0]); i++) {
                 if (ID == emote2[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = sEmote2;
                     break;
                  }
				 }
for (int i = 0; i < sizeof(emote3) / sizeof(emote3[0]); i++) {
                 if (ID == emote3[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = sEmote3;
                     break;
                  }
				 }
				}
				if (preferences.PAN){
				 for (int i = 0; i < sizeof(pan) / sizeof(pan[0]); i++) {
                 if (ID == pan[i]) {
                     bag[j].Unit.DefineID.TypeSpecificID = new_Skin.Pan;
                     break;
                    }
				  }
				}
            }
        }

 
 if (localPlayer -> AvatarComponent2) {

        auto AvatarComp = localPlayer -> AvatarComponent2;
		
        FNetAvatarSyncData NetAvatarComp = * (FNetAvatarSyncData * )((uintptr_t) AvatarComp + 0x2A0);
        auto Slotsybc = NetAvatarComp.SlotSyncData;
		if (preferences.Parachute){
        Slotsybc[11].ItemId = new_Skin.Parachute;
		}
		if (preferences.Outfit){
		Slotsybc[5].ItemId = new_Skin.XSuits;
		}
		if (preferences.Bagg){
		Slotsybc[8].ItemId = bag3;
		}
		if (preferences.Helmett){
		Slotsybc[9].ItemId = helmett3;
		}
  auto now = std::chrono::high_resolution_clock::now();
auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count();

if (elapsed < 100 && callFunction) {
    localPlayer->AvatarComponent2->OnRep_BodySlotStateChanged();
    localPlayerController->BackpackComponent->OnRep_ItemListNet();
} else {
    callFunction = false;
}

    }
 }
                           
                        }
                    }
                }
                g_LocalPlayer = localPlayer;
                g_LocalController = localPlayerController;
            }
        }
    }
    
    
    
namespace Settings
{
    static int Tabb = 0;
	static int SkinTabb = 0;
}    
// ======================================================================== //
const char *getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s.c_str();
}


typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section, void* user_data);
extern ImGuiDemoMarkerCallback  GImGuiDemoMarkerCallback;
extern void* GImGuiDemoMarkerCallbackUserData;
ImGuiDemoMarkerCallback         GImGuiDemoMarkerCallback = NULL;
void* GImGuiDemoMarkerCallbackUserData = NULL;
#define IMGUI_DEMO_MARKER(section)  do { if (GImGuiDemoMarkerCallback != NULL) GImGuiDemoMarkerCallback(__FILE__, __LINE__, section, GImGuiDemoMarkerCallbackUserData); } while (0)
//vishesh
/////////////////////////////////////////////////////////////////////////////////
//vishesh
ImGuiStyle& style = ImGui::GetStyle();
static ImGuiStyle ref_saved_style;




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\

int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}

FVector CalculateWeaponMuzzlePosition(const FVector& weaponLocation, const FRotator& weaponRotation, float weaponBodyLength) {

    float radPitch = weaponRotation.Pitch * (3.14159265358979323846 / 180.0f);
    float radYaw = weaponRotation.Yaw * (3.14159265358979323846 / 180.0f);


    float forwardX = std::cos(radPitch) * std::cos(radYaw);
    float forwardY = std::cos(radPitch) * std::sin(radYaw);
    float forwardZ = std::sin(radPitch);


    FVector muzzlePosition = {
        weaponLocation.X + forwardX * weaponBodyLength,
        weaponLocation.Y + forwardY * weaponBodyLength,
        weaponLocation.Z + forwardZ * weaponBodyLength
    };

    return muzzlePosition;
}

FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
 if (forward.X == 0.f && forward.Y == 0.f) {
  angles.X = forward.Z > 0.f ? -90.f : 90.f;
  angles.Y = 0.f;
 } else {
  angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
  angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
 }
 angles.Z = 0.f;
}

void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
 const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
 for (auto & point : points) {
  point = point - points_center;
  const auto temp_x = point.X;
  const auto temp_y = point.Y;
  const auto theta = DEG2RAD(rotation);
  const auto c = cosf(theta);
  const auto s = sinf(theta);
  point.X = temp_x * c - temp_y * s;
  point.Y = temp_x * s + temp_y * c;
  point = point + points_center;
 }
 }
bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)


bool isInsideFOVs(int x, int y) {
    if (!Config.AimBot.Cross)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int red = Config.AimBot.Cross;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= red * red;
}

bool isInsideFOVs2(int x, int y) {
    if (!FOV)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = FOV;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
auto GetTargetForAimBot()
{
	ASTExtraPlayerCharacter *result = 0;
	float max = std::numeric_limits<float>::infinity();
	auto Actors = GetActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer)
	{
		for (auto Actor : Actors)
		{
			if (isObjectInvalid(Actor))
				continue;
			if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
			{
			auto Target = (ASTExtraPlayerCharacter *) Actor;

                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
                if (dist > 500.0f)
                    continue;
			
				auto Player = (ASTExtraPlayerCharacter *)Actor;
				if (Player->PlayerKey == localPlayer->PlayerKey)
					continue;
				if (Player->TeamID == localPlayer->TeamID)
					continue;
				if (Player->bDead)
					continue;
				if (Config.AimBot.IgnoreKnocked)
				{
					if (Player->Health == 0.0f)
						continue;
				}
				if (Config.AimBot.VisCheck)
				{
					if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
						continue;
				}
				if (Config.AimBot.IgnoreBot)
				{
					if (Player->bEnsure)
						continue;
				}
				auto Root = Player->GetBonePos("Root", {});
				auto Head = Player->GetBonePos("Head", {});
				FVector2D RootSc, HeadSc;
				if (W2S(Root, &RootSc) && W2S(Head, &HeadSc))
				{
					float height = abs(HeadSc.Y - RootSc.Y);
					float width = height * 0.65f;

					FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
					if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
					{
						FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
						FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
						
                        if (isInsideFOVs((int) middlePoint.X, (int) middlePoint.Y)) {
                        
						float dist = FVector2D::Distance(v2Middle, v2Loc);

						if (dist < max)
						{
							max = dist;
							result = Player;
						}
					}
				}
			}
		}
	}
}
	return result;
}

auto GetTargetForBT() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);


            auto localPlayer = g_LocalPlayer;
            auto localController = g_LocalController;

            if (localPlayer) {
                for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Player = (ASTExtraPlayerCharacter *) Actor;

                        if (Player->PlayerKey == localPlayer->PlayerKey)
                            continue;

                        if (Player->TeamID == localPlayer->TeamID)
                            continue;

                        if (Player->bDead)
                            continue;

                        if (Config.AimBot.IgnoreKnocked) {
                            if (Player->Health == 0.0f)
                                continue;
                        }

                        if (Config.AimBot.VisCheck) {
                            if (!localController->LineOfSightTo(Player, {32, 3, 252}, true))
                                continue;
                        }

                        if (Config.AimBot.IgnoreBot) {
                            if (Player->bEnsure)
                                continue;
                        }

                        auto Root = Player->GetBonePos("Root", {});
                        auto Head = Player->GetBonePos("Head", {});

                        FVector2D RootSc, HeadSc;
                        if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                            float height = abs(HeadSc.Y - RootSc.Y);
                            float width = height * 0.65f;

                            FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2),
                                                   0};
                            if ((middlePoint.X >= 0 && middlePoint.X <= screenWidth) &&
                                (middlePoint.Y >= 0 && middlePoint.Y <= screenHeight)) {
                                FVector2D v2Middle = FVector2D((float) (screenWidth / 2),
                                                               (float) (screenHeight / 2));
                                FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                                
                                if (isInsideFOVs((int) middlePoint.X, (int) middlePoint.Y)) {
                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                              }
                            }
                        }
                    }
                }
            }

            return result;
        }
    }
}

bool isInsideFOVss(int x, int y) {
    if (!FovAGHA)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int red = FovAGHA;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= red * red;
}

bool isInsideFOVss2(int x, int y) {
    if (!FOV)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = FOV;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
auto GetTargetByPussy() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
    auto Actors = GetActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
    FVector ViewPosY{0, 0, 0};
    if (localPlayer) {
        ViewPosY = localPlayer->GetBonePos("Head", {});
        ViewPosY.Z += -15.0f;
    }


    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {

                auto Player = (ASTExtraPlayerCharacter *) Actor;
                float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                if (Distance > 500.0f)
                    continue;
                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                    
        auto player = (ASTExtraPlayerCharacter *)Actor;
        auto Target = (ASTExtraPlayerCharacter *) Actor;
        float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
        if (dist > Config.materAGHA)
        continue;   

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (IgnoreKnock) {
                    if (Player->Health == 0.0f)
                        continue;
                }                
                                
				if (Config.SilentAim.IgnoreKnocked)
				{
					if (Player->Health == 0.0f)
						continue;
				}
				
				
                if (Config.SilentAim.IgnoreBot)
				{
					if (Player->bEnsure)
						continue;
				}

                if (VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                
            
                
              

                                  if (Config.VisAGHA)	{
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                
                                if (Config.VisCheck) {

    auto CurrentWeaponReplicated = (ASTExtraShootWeapon*)g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated;

    if (CurrentWeaponReplicated) {

        FVector weaponlocation = CurrentWeaponReplicated->K2_GetActorLocation();

        FRotator weaponRotation = CurrentWeaponReplicated->K2_GetActorRotation();

        float weaponBodyLength = CurrentWeaponReplicated->GetWeaponBodyLength();

        FVector muzzlePosition = CalculateWeaponMuzzlePosition(weaponlocation, weaponRotation, weaponBodyLength / 1.5);

        if (!localController->LineOfSightTo(Player, muzzlePosition, true))
            continue;

    }
}


                float Dist = localPlayer->GetDistanceTo(Player);
                if (dist < max) {
                    max = dist;
                    result = Player;
                }
            }
        }
    }

    return result;
}
//=======//

		//===============||𝗦𝗜𝗟𝗘𝗡𝗧 𝗔𝗜𝗠
        auto GetTargetByCrossDist() {
        ASTExtraPlayerCharacter *result = 0;
        float max = std::numeric_limits<float>::infinity();
        auto Actors = GetActors();
        auto localPlayer = g_LocalPlayer;
        auto localController = g_LocalController;
        if (localPlayer) {
for (int i = 0;i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
        continue;
        if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
        auto Player = (ASTExtraPlayerCharacter *)Actor;
        auto Target = (ASTExtraPlayerCharacter *) Actor;
        float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
        if (dist > Config.SilentAim.Meter)
        continue;   
        if (Player->PlayerKey == localPlayer->PlayerKey)
        continue;
        if (Player->TeamID == localPlayer->TeamID)
        continue;
        if (Player->bDead)
        continue;
        if (Config.SilentAim.IgnoreKnocked) {
        if (Player->Health == 0.0f)
        continue;}
        


        if (Config.SilentAim.IgnoreBot) {
        if (Player->bEnsure)
        continue;}
        auto Root = Player->GetBonePos("Root", {});
        auto Head = Player->GetBonePos("Head", {});
        FVector2D RootSc, HeadSc;
        if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
        float height = abs(HeadSc.Y - RootSc.Y);
        float width = height * 0.65f;
        FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
        if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
        if (isInsideFOVs((int) middlePoint.X, (int) middlePoint.Y)) {
        float dist = FVector2D::Distance(v2Middle, v2Loc);
        if (dist < max) {
        max = dist;
        result = Player;
        }}}}}}}return result;}
        
void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size);
void DrawRect(int x, int y, int w, int h, ImVec4 color, int size);
void DrawRectFilled(int x, int y, int w, int h, ImVec4 color);
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T);
void DrawCircle(int x, int y, float radius, ImVec4 color, int segments, int thickness);
void DrawStrokeText(int x, int y, ImVec4 color, const char* str);
void DrawCircleFilled(int x, int y, int radius, ImVec4 color, int segments);
float MouseToObjectDistance(float ObjectSrceenX,float ObjectSrceenY);
float GetD2DPosDistance(float ObjectX,float ObjectY);



FRotator ClampAngles(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;

    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;

    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}


void InitTexture() {

    
LogoMenu = CreateTexture(LogoMenu_data, sizeof(LogoMenu_data));

}



const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}

void (*orig_shoot_event)(USTExtraShootWeaponComponent* thiz, FVector start, FRotator rot, void* unk1, int unk2) = 0;
void shoot_event(USTExtraShootWeaponComponent* thiz, FVector start, FRotator rot, ASTExtraShootWeapon* weapon, int unk1) {

    if (Config.SilentAim.Enable) {
        ASTExtraPlayerCharacter* Target = GetTargetByPussy();
        if (Target) {
            FVector targetAimPos = Target->GetBonePos("Head", {});
            
            if (Config.AimPosNew) {
            
            targetAimPos.Z -= -15.0f;
            
            }
            
            if (Config.AimPosClassic) {
            
            targetAimPos.Z -= 25.0f;
            
            }
            
            if (Config.AimPosBody) {
            
            targetAimPos.Z -= 15.0f;
            
            }
            
           if (Config.SilentAim.AimCustom)
            {
              targetAimPos.Z += Config.SilentAim.AimSet;
            }
           
               if (Config.SilentAim.Position == 0) {
                if (Config.SilentAim.Target == 0) {
                    targetAimPos.Z -= 0;
                }
                else if (Config.SilentAim.Target == 1)
                {
                    targetAimPos.Z -= 5.0f;
                }
                else if (Config.SilentAim.Target == 2)
                {
                    targetAimPos.Z -= 25.0f;
                }
            }
            else if (Config.SilentAim.Position == 1) {
                targetAimPos.Z -= -Config.SilentAim.Position;
            }
                       
            FRotator sex = ToRotator(start, targetAimPos);
            if (Config.SilentAim.Prediction) {
                return orig_shoot_event(thiz, targetAimPos, sex, weapon, unk1);
            }
            else {
                return orig_shoot_event(thiz, start, sex, weapon, unk1);
            }
        }
    }

    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

template<class T>
void GetAlllActors(std::vector<T *> &Actors) {
UGameplayStatics *gGameplayStatics = (UGameplayStatics *) gGameplayStatics->StaticClass();
auto GWorld = GetWorld();
if (GWorld) {
TArray<AActor *> Actors2;
gGameplayStatics->GetAllActorsOfClass((UObject *) GWorld, T::StaticClass(), &Actors2);
for (int i = 0; i < Actors2.Num(); i++) {
Actors.push_back((T *) Actors2[i]);
}
}
}

void RenderESPAutoAGHA(AHUD *HUD, int ScreenWidth, int ScreenHeight)
{
    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localPlayerController = 0;

    UCanvas *Canvas = HUD->Canvas;
    if (Canvas)
    {



        UGameplayStatics *gGameplayStatics = (UGameplayStatics *)UGameplayStatics::StaticClass();
        auto GWorld = GetWorld();
        if (GWorld)
        {
            UNetDriver *NetDriver = GWorld->NetDriver;
            if (NetDriver)
            {
                UNetConnection *ServerConnection = NetDriver->ServerConnection;
                if (ServerConnection)
                {
                    localPlayerController = (ASTExtraPlayerController *)ServerConnection->PlayerController;
                }
            }

            if (localPlayerController)
            {
                // localPlayerController->AntiCheatManagerComp = 0;
                // localPlayerController->bShouldReportAntiCheat = false;
                // localPlayerController->CheatClass =0;
                // localPlayerController->CheatManager =0;
                // if (!g_Token.empty() && !g_Auth.empty() && g_Token == g_Auth) {

                // }

                std::vector<ASTExtraPlayerCharacter *> PlayerCharacter;
                GetAllActors(PlayerCharacter);
                for (auto actor = PlayerCharacter.begin();
                     actor != PlayerCharacter.end(); actor++)
                {
                    auto Actor = *actor;

                    if (Actor->PlayerKey ==
                        ((ASTExtraPlayerController *)localPlayerController)->PlayerKey)
                    {
                        localPlayer = Actor;
                        break;
                    }
                }

                {
                    if (localPlayer)
                    {
                  

                        // localPlayer->MoveAntiCheatComponent = 0;
                        // localPlayer->LagCompensationComponent = 0;
                        // localPlayer->SecuryComponent = 0;
                        // localPlayer->bEnableSecurity = false;

                        auto infinity = std::numeric_limits<float>::infinity();
                        auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                        // auto Player = (ASTExtraPlayerCharacter *)Actor;           
                        // bool IsVisible = localPlayerController->LineOfSightTo(localPlayer, {0, 0, 0}, true);                   
                         
                   
                        if (Autofire)
                        {
                            if ((g_LocalPlayer && g_LocalPlayer->RootComponent) && localPlayerController)
                            {
                                ASTExtraPlayerCharacter *Target;
                                Target = GetTargetByPussy();
                                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                                if (WeaponManagerComponent)
                                {
                                    auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                    if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3)
                                    {
                                                if (Config.fuckoff)
                                                {
                                                   g_LocalController->OnReleaseFire();
                                                }
                                                if (Target && Target->RootComponent)
                                                {
                                                    localPlayerController->OnPressFire();
                                                }
                                                else
                                                {
                                                    Config.fuckoff = true;
                                                }                                            
                                    }
                                }
                            }
                        }
                        else
                        {
                          Config.fuck = true;
                        }


                        if (localPlayer->PartHitComponent)
                        {
                            auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                            for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++)
                            {
                                ConfigCollisionDistSqAngles[j].Angle = 180.0f;
                            }
                            localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
                        }
                    }
                }
            }
            g_LocalPlayer = localPlayer;
            g_LocalController = localPlayerController;
        }
    }
}

        


    
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\

class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;
std::string playerstatus(int GetEnemyState) {
    switch (GetEnemyState) {
		case 0:
			return "AFK";
			break;
		case 1032:
			return "TILT HEAD";
			break;
		case 268435464:
			return "PLAY EMOTION";
			break;
		case 1552:
			return "AIMING";
			break;
		case 8388616:
			return "PARACHUTE";
			break;
		case 131072:
			return "KNOCKED";
			break;
		case 33554440:
			return "PLANE";
			break;
		case 8205:
			return "SHOT";
			break;
		case 32:
			return "SIT";
			break;
		case 4194303:
			return "SWIMMING";
			break;
		case 72:
			return "JUMPING";
			break;
		case 8388608:
			return "PARACHUTE";
			break;
		case 16392:
			return "THROW SOMETHING";
			break;
		case 262:
			return "RELOADING";
			break;
		case 1048584:
			return "RIDE";
			break;
		case 8200:
			return "FIST";
			break;
		case 2056:
			return "CUT GUN";
			break;
		case 4194302:
			return "SWIMMING";
			break;
		case 269:
			return "RELOADING";
			break;
		case 16777224:
			return "CLIMBING";
			break;
		case 10:
			return "RUN";
			break;
		case 263:
			return "RELOADING";
			break;
		case 65568 || 65544:
			return "FIGHT MEDICINE";
			break;
		case 4194308:
			return "SWIMMING";
			break;
		case 268:
			return "RELOADING";
			break;
		case 35:
			return "GET SIT";
			break;
		case 8388617:
			return "PARACHUTE";
			break;
		case 33:
			return "AIMING";
			break;
		case 75:
			return "JUMPING";
			break;
		case 8201:
			return "FIST";
			break;
		case 266:
			return "RELOADING";
			break;
		case 32776:
			return "KNOCKED";
			break;
		case 270:
			return "RELOADING";
			break;
		case 4194301:
			return "SWIMMING";
			break;
		case 1033:
			return "RUN";
			break;
		case 131073:
			return "KNOCKED";
			break;
		case 524296:
			return "DRIVING";
			break;
		case 1114120:
			return "FIGHT MEDICINE";
			break;
		case 265:
			return "RELOADING";
			break;
		case 9:
			return "RUN";
			break;
		case 262144:
			return "SMOKE";
			break;
		case 8203:
			return "FIST";
			break;
		case 8202:
			return "SHOT";
			break;
		case 262152:
			return "DEATH";
			break;
		case 17416:
			return "THROW SOMETHING";
			break;
		case 17:
			return "SIT";
			break;
		case 11:
			return "RUN";
			break;
		case 65545:
			return "FIGHT MEDICINE";
			break;
		case 33554432:
			return "PLANE";
			break;
		case 19:
			return "SQUAT";
			break;
		case 8208:
			return "SHOT";
			break;
		case 520:
			return "AIMING";
			break;
		case 8206:
			return "SHOT";
			break;
		case 8:
			return "STAND";
			break;
		case 16:
			return "SIT)";
			break;
		case 13180:
			return "KNOCKED";
			break;
		case 4194310:
			return "SWIMMING";
			break;
		case 16393:
			return "THROW SOMETHING";
			break;
		case 4194309:
			return "SWIMMING";
			break;
		case 264:
			return "RELOADING";
			break;
		case 4194305:
			return "SWIMMING";
			break;
		case 8207:
			return "SHOT";
			break;
		case 4194307:
			return "SWIMMING";
			break;
		return "";
	}
}

// ======================================================================== //
void DrawFilledRectangle(int x, int y, int w, int h, ImU32 col, float rounding) {
    ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), col, rounding);
}

void DrawRectangle(int x, int y, int w, int h, ImU32 col, float rounding) {
    ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), col, rounding);
}

void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 2.0f);
}

FVector2D pushToScreenBorder(FVector2D Pos, FVector2D screen, int borders, int offset) {
    int x = (int)Pos.X;
    int y = (int)Pos.Y;
    if ((borders & 1) == 1) {
        y = 0 - offset;
    }
    if ((borders & 2) == 2) {
        x = (int)screen.X + offset;
    }
    if ((borders & 4) == 4) {
        y = (int)screen.Y + offset;
    }
    if ((borders & 8) == 8) {
        x = 0 - offset;
    }
    return FVector2D(x, y);
}

int isOutsideSafezone(FVector2D pos, FVector2D screen) {
    FVector2D mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
    FVector2D mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);
    int result = 0;
    if (pos.Y < mSafezoneTopLeft.Y) {
        result |= 1;
    }
    if (pos.X > mSafezoneBottomRight.X) {
        result |= 2;
    }
    if (pos.Y > mSafezoneBottomRight.Y) {
        result |= 4;
    }
    if (pos.X < mSafezoneTopLeft.X) {
        result |= 8;
    }
    return result;
}

void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
    // top
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
    // bottom
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}

void Box3D(ImDrawList *draw, FVector origin, FVector extends, ImColor col) {
    origin.X -= extends.X / 2.f;
    origin.Y -= extends.Y / 2.f;
    origin.Z -= extends.Z / 2.f;
    
    
 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
    W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
    {
        
    Line(draw,s1, s2, col);
    Line(draw,s2, s3, col);
    Line(draw,s3, s4, col);
    Line(draw,s4, s1, col);
 
    Line(draw,s5, s6, col);
    Line(draw,s6, s7, col);
    Line(draw,s7, s8, col);
    Line(draw,s8, s5, col);
 
    Line(draw,s1, s5, col);
    Line(draw,s2, s6, col);
    Line(draw,s3, s7, col);
    Line(draw,s4, s8, col);

}
}

// ======================================================================== //
struct Threat_t {
	ASTExtraPlayerCharacter *m_Player;
	bool bAiming;
	bool bBehind;
	float mFOV;
	float mDIS;
};
std::vector<Threat_t> GetThreats() {
	std::vector<Threat_t> result;
	auto Actors = GetActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;
			if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
				auto Player = (ASTExtraPlayerCharacter *)Actor;
				if (Player->PlayerKey == localPlayer->PlayerKey)
					continue;
				if (Player->TeamID == localPlayer->TeamID)
					continue;
				if (Player->bDead)
					continue;
				auto RootComponent = Player->RootComponent;
				if (RootComponent) {
					FRotator RelativeRotation = RootComponent->RelativeRotation;
					ClampAngles(RelativeRotation);
					FVector myHeadPosition = localPlayer->GetBonePos("Head", {});
					FVector headLocation = Player->GetBonePos("Head", {});
					auto Angle = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(headLocation, myHeadPosition));
					ClampAngles(Angle);
					float num = abs(RelativeRotation.Pitch - Angle.Pitch);
					float num2 = abs(RelativeRotation.Yaw - Angle.Yaw);
					bool num3 = (num + num2) >= 170.f && (num + num2) <= 220.f;
					if (num + num2 >= 65.f) {
						if (localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
							float dist = localPlayer->GetDistanceTo(Player);
							ImVec2 HeadPosSC;                
							if (W2S(headLocation, (FVector2D *)&HeadPosSC)) {    
							result.push_back({Player, num3, NULL, num + num2, dist});
						}
					}
				}
			}
		}
	}
	std::sort(result.begin(), result.end(),
	[](const Threat_t &a, const Threat_t &b) -> bool {
		return a.mDIS < b.mDIS;
	});
	return result;
}
}


void GetLocalPlayer()
{
    if (auto GWorld = GetWorld())
    {
        if (auto NetDriver = GWorld->NetDriver)
        {
            if (auto PlayerController = NetDriver->ServerConnection->PlayerController)
            {
                ASTExtraPlayerController *localController = (ASTExtraPlayerController *)PlayerController;
                ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;

                if (localController && localPlayer)
                {
                    localController = localController;
                    localPlayer = localPlayer;
                }
            }
        }
    }
}

void DrawESP(ImDrawList *draw) {
      
    if (Config.Bypass) {
}


    if (Config.OTHER.HIDEESP) {
        HIDEESP = false;
    } else {
        HIDEESP = true;
    }
    if (HIDEESP) {

        auto Actors = GetActors();

        int totalEnemies = 0, totalBots = 0;

        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localController = 0;


        
		
		if (Config.OTHER.EXP) {
		
		
        }


        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
                localController = (ASTExtraPlayerController *) Actor;
                break;
            }
        }
		

	

        if (localController) {
            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey ==
                        localController->PlayerKey) {
                        localPlayer = (ASTExtraPlayerCharacter *) Actor;
                        break;
                    }
                }
            }


            if (localPlayer) {
              if (localPlayer && localPlayer->PartHitComponent)
{
    auto PartHitComponent = localPlayer->PartHitComponent;
    auto& ConfigAngles = PartHitComponent->ConfigCollisionDistSqAngles;
    
    if (ConfigAngles[5].Angle != 180.0f)
    {
        for (int i = 0; i < 6; ++i)
        {
            ConfigAngles[i].Angle = 180.0f;
        }
    }
}
                
                
                
                                    

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\


                if (Config.HighRisk.Recoil || Config.HighRisk.Shake || Config.HighRisk.Instant) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                            

           
           
           
           if (Config.HighRisk.Jump) {
UCharacterMovementComponent *CharacterMovement = g_LocalPlayer->CharacterMovement;
CharacterMovement->MaxFlySpeed = 799.9f;
                                }
                                
                          
           
                                
                                if (agha3) {
USceneComponent * MeshContainer = localPlayer->MeshContainer;
UCustomSpringArmComponent * SpringArmComp = localPlayer->SpringArmComp;
MeshContainer->RelativeLocation.X = 113;
SpringArmComp->RelativeLocation.X = 133;
} else {
USceneComponent * MeshContainer = localPlayer->MeshContainer;
UCustomSpringArmComponent * SpringArmComp = localPlayer->SpringArmComp;
MeshContainer->RelativeLocation.X = 0;
SpringArmComp->RelativeLocation.X = 0;

}


auto object = UObject::GetGlobalObjects();
    for (int i = 0; i < object.Num(); i++){
    auto Object = object.GetByIndex(i);
    if (isObjectInvalid(Object))
        continue;

 if (Config.ShowDamaze)
                             {
                                 if (Object->IsA(UDamageNumberWidget::StaticClass()))
                                 {
                                     auto LuaDamageInfo = (UDamageNumberWidget *) Object;
                                     auto DamageNumberConfigArray = LuaDamageInfo->DamageNumberConfigArray;
                                     for (int x = 0; x < DamageNumberConfigArray.Num(); ++x)
                                     {
                                         FDamageNumberConfig & DamageNumberConfig = DamageNumberConfigArray[x];
                                         FLinearColor BloodRedColor(0.7f, 0.0f, 0.0f, 1.0f);
                                         DamageNumberConfig.HeadDrawColor = BloodRedColor; // color
                                         DamageNumberConfig.BodyDrawColor = BloodRedColor; // color
                                         DamageNumberConfig.HeadDrawOutlineColor = BloodRedColor; // color
                                         DamageNumberConfig.BodyDrawOutlineColor = BloodRedColor; // color
                                         DamageNumberConfig.UpScaleFactor = 4.f; // for size
                                         DamageNumberConfig.ScaleRandOffset = 4.f; // for size
                             
                                     }
                                 }

                             }
                                }
                                
                            
                                 if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletRange = 100000.0f;
                                
                             }                             
                             
                             if (Config.Small){
                                        auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (Config.Small)  {
           ShootWeaponEntityComp->CrossHairInitialSize = (float) Config.Small;
           ShootWeaponEntityComp->GameDeviationFactor = 0;
           ShootWeaponEntityComp->GameDeviationAccuracy = 0;
           ShootWeaponEntityComp-> AccessoriesDeviationFactor = 0;
                            }}}}
     
                                
                                
                                if (Config.HighRisk.Switch) {
                                ShootWeaponEntityComp->SwitchFromBackpackToIdleTime = 0.0f;
                                ShootWeaponEntityComp->SwitchFromIdleToBackpackTime = 0.0f;
                                }
								
								if (AGHAXX) {
                                    ShootWeaponEntityComp->BulletMomentum = 10000000.0f;
                                    ShootWeaponEntityComp->BulletRange = 10000000.0f;
                                    ShootWeaponEntityComp->BaseImpactDamage = 100000000.0f;
                                    ShootWeaponEntityComp->MaxDamageRate = 100000000.0f;
         ShootWeaponEntityComp->BulletTrackDistanceFix = 100000000.0f;

                                }
                                
                        
                                
                                if(Config.HighRisk.Scope){
                                ShootWeaponEntityComp->WeaponAimFOV = 10000000.0f;
                                ShootWeaponEntityComp->WeaponAimInTime = 10000000.0f;
								}
								
								if (Config.HighRisk.Recoil) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0,
                                           sizeof(FSRecoilInfo));
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;
                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0,
                                           sizeof(FSDeviation));
                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;
                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;
                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }
								
								if (Config.HighRisk.Reload) {
                                    ShootWeaponEntityComp->ReloadRate = 0.0f;                        
							    }
							    
							                                    if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }
							    
							    					if (Config.HighRisk.FastMove){
			UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
			if (CharacterMovement){
			CharacterMovement->MaxWalkSpeed = 999.9f;
				}}
				
				

                                

                                
                                

                 

                                
                            }
                        }
                    }
                }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\
static bool bShooting = false;
                if (Config.SilentAim.Enable) {
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.AimBot.Cross*0.5f, IM_COL32(0, 0, 0, 255), 0, 0.5f);           
                 
                 
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 173;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    // CHANGE22222 add lambda function f_mprotect
                                    auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
                                      static_assert(PAGE_SIZE == 4096);
                                      constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
                                      void* start = reinterpret_cast<void*>(addr & -page_size);
                                      uintptr_t end = (addr + len + page_size - 1) & -page_size;
                                      return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                                    };
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        // CHANGE22222 add call of f_mprotect
                                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }
                 }
                    
                    


                    		
             if (Config.AimBot.Enable) {                                         
	    
			ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
			if (Target)
			{
				bool triggerOk = false;
				if (Config.AimBot.Trigger != EAimTrigger::None)
				{
					if (Config.AimBot.Trigger == EAimTrigger::Shooting)
					{
						triggerOk = localPlayer->bIsWeaponFiring;
					}
					else if (Config.AimBot.Trigger == EAimTrigger::Scoping)
					{
						triggerOk = localPlayer->bIsGunADS;
					}
					else if (Config.AimBot.Trigger == EAimTrigger::Both)
					{
						triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
					}
					else if (Config.AimBot.Trigger == EAimTrigger::Any)
					{
						triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
					}
				}
				else
					triggerOk = true;
				if (triggerOk)
				{
					FVector targetAimPos = Target->GetBonePos("Head", {});
                                targetAimPos.Z -= Config.AimBot.Position;
					auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
					if (WeaponManagerComponent)
					{
						auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
						if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3)
						{
							auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
							if (CurrentWeaponReplicated)
							{
								auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
								if (ShootWeaponComponent)
								{
									UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
									if (ShootWeaponEntityComponent)
									{
										ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
										if (CurrentVehicle)
										{
											FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
											float dist = localPlayer->GetDistanceTo(Target);
											auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
											targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
										}
										else
										{
											FVector Velocity = Target->GetVelocity();
											float dist = localPlayer->GetDistanceTo(Target);
											auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
											targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
										}
								    	if (Config.AimBot.Enable) {
                                        if (g_LocalPlayer->bIsGunADS) {
                                        if (g_LocalPlayer->bIsWeaponFiring) {
                                        float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                        targetAimPos.Z -= dist * 1.25f;
                                        }  
                                    }
                                }
							    localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos),"");
									}
								}
							}
						}
					}
				}
			}
		}
                      

                for (auto &i : Actors) {
                auto Actor = i;
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    auto Player = (ASTExtraPlayerCharacter *) Actor;

                    float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                    if (Distance > 500)
                        continue;

                    if (Player->PlayerKey == localController->PlayerKey)
                        continue;

                    if (Player->TeamID == localController->TeamID)
                        continue;

                    if (Player->bDead)
                        continue;
                    if (Player->bEnsure)
                        totalBots++;
                    else totalEnemies++;

                    if (Config.PlayerESP.NoBot)
                        if (Player->bEnsure)
                            continue;

                    float magic_number = (Distance);
                    float mx = (glWidth / 4) / magic_number;

                    float healthLength = glWidth / 19;
                    if (healthLength < mx)
                        healthLength = mx;

                    auto HeadPos = Player->GetBonePos("Head", {});
                    ImVec2 HeadPosSC;

                    auto RootPos = Player->GetBonePos("Root", {});
                    ImVec2 RootPosSC;
                    auto upper_r = Player->GetBonePos("upperarm_r", {});
                    ImVec2 upper_rPoSC;
                    auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
                    ImVec2 lowerarm_rPoSC;
                    auto hand_r = Player->GetBonePos("hand_r", {});
                    ImVec2 hand_rPoSC;
                    auto upper_l = Player->GetBonePos("upperarm_l", {});
                    ImVec2 upper_lPoSC;
                    auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
                    ImVec2 lowerarm_lSC;
                    auto hand_l = Player->GetBonePos("hand_l", {});
                    ImVec2 hand_lPoSC;
                    auto thigh_l = Player->GetBonePos("thigh_l", {});
                    ImVec2 thigh_lPoSC;
                    auto calf_l = Player->GetBonePos("calf_l", {});
                    ImVec2 calf_lPoSC;
                    auto foot_l = Player->GetBonePos("foot_l", {});
                    ImVec2 foot_lPoSC;
                    auto thigh_r = Player->GetBonePos("thigh_r", {});
                    ImVec2 thigh_rPoSC;
                    auto calf_r = Player->GetBonePos("calf_r", {});
                    ImVec2 calf_rPoSC;
                    auto foot_r = Player->GetBonePos("foot_r", {});
                    ImVec2 foot_rPoSC;
                    auto neck_01 = Player->GetBonePos("neck_01", {});
                    ImVec2 neck_01PoSC;
                    auto Pelvis = Player->GetBonePos("pelvis", {});
                    ImVec2 PelvisPoSC;

                    bool IsVisible = localController->LineOfSightTo(Player, {0, 0, 0}, true);

                    int SCOLOR, SCOLOR2;

                    if (IsVisible)
                    {
                        SCOLOR = ImColor(0,255,0);
                        SCOLOR2 = ImColor(255,255,0);
                    }else{
                        SCOLOR = ImColor(255,0,0);
                        SCOLOR2 = ImColor(255,255,255);
                    }
					
					
						if (Config.ESPMenu.Alert) {
bool isAI = Player->bEnsure;
                    
                        FVector MyPosition, EntityPosition;
                        ASTExtraVehicleBase* CurrentVehicle = Player->CurrentVehicle;
                        if (CurrentVehicle) {
                            MyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                        } else {
                            MyPosition = Player->RootComponent->RelativeLocation;
                        }                                         
                        ASTExtraVehicleBase* CurrentVehicleAI = localPlayer->CurrentVehicle;
                        if (CurrentVehicleAI) {
                        EntityPosition = CurrentVehicleAI->RootComponent->RelativeLocation;
                        } else {
                        EntityPosition = localPlayer->RootComponent->RelativeLocation;
                        }                        
                    
                        FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EntityPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), isAI);
                        FVector angle = FVector();
                        Vector3 toEntity = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
                        VectorAnglesRadar(toEntity, angle);
                    
                        // 将角度转换为弧度
                        const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                        
                        // 计算球体在屏幕上的水平位置
                        const auto new_point_x = (glWidth / 2) + (55/*距离我多远*/) / 2 * 8 * cosf(angle_yaw_rad);
                        
                        // 计算球体在屏幕上的垂直位置
                        const auto new_point_y = (glHeight / 2) + (55/*距离我多远*/) / 2 * 8 * sinf(angle_yaw_rad);
                        
                        // 设置球体的半径大小（根据需要调整这个值）
                        const float sphereRadius = 6.0f;
       if (Player->bEnsure) {
  draw->AddCircleFilled(ImVec2(new_point_x, new_point_y), sphereRadius, ImColor(0,255,0));
      // draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(0, 255, 0, 255), 1.5f);
       //draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(0, 255, 0, 255));
                            } else {
                            draw->AddCircleFilled(ImVec2(new_point_x, new_point_y), sphereRadius, SCOLOR);
                       //     draw->AddCircle(ImVec2(new_point_x, new_point_y), 10.0f, GetRandomColorByIndexAlpa(Player->TeamID), 0.0f, 6.0f);
       //draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 255), 1.5f);
      // draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 255));                            
      }
                                }
					
	



                    if (W2S(HeadPos, (FVector2D *) &HeadPosSC) &&
                        W2S(upper_r, (FVector2D *) &upper_rPoSC) &&
                        W2S(upper_l, (FVector2D *) &upper_lPoSC) &&
                        W2S(lowerarm_r, (FVector2D *) &lowerarm_rPoSC ) &&
                        W2S(hand_r, (FVector2D *) &hand_rPoSC ) &&
                        W2S(lowerarm_l, (FVector2D *) &lowerarm_lSC ) &&
                        W2S(hand_l, (FVector2D *) &hand_lPoSC ) &&
                        W2S(thigh_l, (FVector2D *) &thigh_lPoSC ) &&
                        W2S(calf_l, (FVector2D *) &calf_lPoSC ) &&
                        W2S(foot_l, (FVector2D *) &foot_lPoSC ) &&
                        W2S(thigh_r, (FVector2D *) &thigh_rPoSC ) &&
                        W2S(calf_r, (FVector2D *) &calf_rPoSC ) &&
                        W2S(foot_r, (FVector2D *) &foot_rPoSC ) &&
                        W2S(neck_01, (FVector2D *) &neck_01PoSC ) &&
                        W2S(Pelvis, (FVector2D *) &PelvisPoSC ) &&
                        W2S(RootPos, (FVector2D *) &RootPosSC)){

                        if (Distance < 350.0f && totalEnemies > 0 || totalBots > 0) {

                                            if (Config.PlayerESP.Line)
                                            {
                     draw->AddLine({(float)glWidth / 2, 0}, {HeadPosSC.x, HeadPosSC.y}, SCOLOR, 1.4f);
                                            }
                              if (Config.PlayerESP.Box) {
                                float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                float boxWidth = boxHeight * 0.65f;
                                Box4Line(draw, 0.2f, HeadPosSC.x - (boxWidth / 2), HeadPosSC.y, boxWidth, boxHeight,  SCOLOR);
                                }
                                
   
                                                             
                                
        
       
    
    
     std::string s;
            static bool blinkState = true;
            static float blinkTimer = 0.0f;
            blinkTimer += ImGui::GetIO().DeltaTime;
            if (blinkTimer > 0.5f)
            {
                blinkState = !blinkState;
                blinkTimer = 0.0f;
            }
            ImVec4 ballColor = blinkState ? ImVec4(1.0f, 0.0f, 0.0f, 1.0f) : ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
            



                         if (GameInfo) {
                         			ImGuiStyle& style = ImGui::GetStyle();
			style.WindowRounding = 7.0f;
			style.Colors[ImGuiCol_WindowBg] = ImVec4(0.000f, 0.000f, 0.000f, 0.784f);
                                if (Actor->IsA(ASTExtraGameStateBase::StaticClass())) {
									auto mareetg = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoBringToFrontOnFocus/* + ImGuiWindowFlags_NoTitleBar*/;
                                    auto InGame = (ASTExtraGameStateBase*)Actor;
                                    if (ImGui::Begin("Game Information ", 0, mareetg))
                                    {
                                     ImGui::Separator();
                                        if (InGame->AliveTeamNum == 1)
                                        {
											

                                            ImGui::Text("Game Information");
											
                                            ImGui::Separator();
                                            ImGui::Text("WINER WINNER CHICKEN DINNER");
                                        }
                                        else
                                        {
											
											ImGui::TextColored(ballColor, ICON_FA_CIRCLE);
											ImGui::SameLine();
                                            ImGui::Text(" Game Information");
                                            ImGui::Separator();
                                            std::string Text1 = std::to_string(InGame->AlivePlayerNum) + " Players Alive " + "With " + std::to_string((int)InGame->AliveTeamNum) + " Teams ";
                                            std::string Text2 = "Real Players : " + std::to_string(InGame->PlayerNum);
                                            std::string TEAMTYPE = "";
                                            if (InGame->PlayerNumPerTeam == 1) TEAMTYPE = "Solo"; else if (InGame->PlayerNumPerTeam == 2) TEAMTYPE = "Duo"; else if (InGame->PlayerNumPerTeam == 4) TEAMTYPE = "Squad"; else TEAMTYPE = "Detecting Mode;";
                                            std::string Text3 = "Team Type : " + TEAMTYPE;
											
                                            ImGui::Spacing;
                                            ImGui::Spacing;
                                            ImGui::Text(Text1.c_str());

                                            ImGui::Text(Text2.c_str());
                                            ImGui::Separator();
                                            ImGui::Text(Text3.c_str());
                                            ImGui::Spacing;
                                        }

                                        ImGui::End();
                                    }
                                    ImGui::PopStyleColor();
                                    ImGui::PopStyleColor();


                                }
                            }
                            
                            
                            				
      ImGuiIO &Io = ImGui::GetIO();
    static auto lund =
        ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse |
        ImGuiWindowFlags_NoScrollbar;
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 100));

    ImGui::PushStyleColor(ImGuiCol_TitleBg, ImVec4(0.0f, 1.0f, 0.0f, 100));

    ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.1f),
                            ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.1f));
    ImGui::SetNextWindowSize(
    {250, 0});

    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(5, 5));

    ImGui::SetNextWindowSize({340, 117});

                      if (Config.PlayerESP.GameInfo1) {

    if (ImGui::Begin(" Game Information", 0, lund | ImGuiWindowFlags_NoTitleBar))
    {
        if (Actor->IsA(ASTExtraGameStateBase::StaticClass()))
        {
            auto InGame = (ASTExtraGameStateBase *)Actor;
            static bool blinkState = true;
            static float blinkTimer = 0.0f;
            blinkTimer += ImGui::GetIO().DeltaTime;
            if (blinkTimer > 0.5f)
            {
                blinkState = !blinkState;
                blinkTimer = 0.0f;
            }
            ImVec4 ballColor = blinkState ? ImVec4(1.0f, 0.0f, 0.0f, 1.0f) : ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
            ImGui::TextColored(ballColor, ICON_FA_CIRCLE);

            ImGui::SameLine();
            ImGui::Text(" Game Information");
			if (InGame->AliveTeamNum == 1)
             {
              ImGui::Separator();
              ImGui::Text("WINER WINNER CHICKEN DINNER");
             }
            ImGui::Separator();
            ImGui::Text("%d Players alive With %d Teams, Real Players: %d", static_cast<int>(InGame->AlivePlayerNum), static_cast<int>(InGame->AliveTeamNum), static_cast<int>(InGame->PlayerNum));
             std::string TEAMTYPE = "";
           if (InGame->PlayerNumPerTeam == 1) TEAMTYPE = "Solo"; else if (InGame->PlayerNumPerTeam == 2) TEAMTYPE = "Duo"; else if (InGame->PlayerNumPerTeam == 4) TEAMTYPE = "Squad"; else TEAMTYPE = "Detecting Mode;";
		    std::string Text3 = "Team Type : " + TEAMTYPE;
		    ImGui::Text("Match ID: %d, Match Time: %ds | %dm", static_cast<int>(InGame->GameID), static_cast<int>(InGame->ElapsedTime), static_cast<int>(InGame->ElapsedTime) / 60);
            ImGui::Separator();
            ImGui::Text("In Match (%ds seconds)  ", static_cast<int>(InGame->ElapsedTime));

           ImGui::End();
        }
    }
    
}
                            
                            
if (Config.PlayerESP.SafeZone) {
    UGameplayStatics* gGameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass();
    std::string classname = Actor->GetName();
    if (classname.find("BP_radiation") != std::string::npos) {
        FVector2D SafeZone;
        FVector PosV = Actor->K2_GetActorLocation();
        float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
        if (gGameplayStatics->ProjectWorldToScreen(
            localController, Actor->RootComponent->RelativeLocation, false, &SafeZone)) {
            std::string s = "Safe Zone Location";
            s += " [";
            s += std::to_string((int)Distance);
            s += "M]";


            draw->AddTextStorke(NULL, 16.4f, (int)SafeZone.X - 10, SafeZone.Y - 10, IM_COL32(0, 255, 0, 255), s.c_str());


        }
    }
}
                            
                            
                                                      if (Config.PlayerESP.Alert1)
                            {
                            auto Target = GetTargetByPussy();
                            if (Target)
                            {
                            auto target = Target->GetBonePos("Head", {});
                            auto footL = Target->GetBonePos("Root", {});
                            ImVec2 targetSC, footLPos;
                            if (W2S(target, (FVector2D*)&targetSC) && W2S(footL, (FVector2D*)&footLPos))
                            {
                            draw->AddLine({(float)glWidth / 2, 716}, {footLPos.x - 2, footLPos.y},IM_COL32(0, 255, 0, 255), 1.5f);
                            }
                            }
                            }
                            
                              if (Config.ESPMenu.Alert69) {
                                bool shit = false;

                                FVector MyPosition, EnemyPosition;
                                ASTExtraVehicleBase *CurrentVehiclea = Player->CurrentVehicle;
                                if (CurrentVehiclea) {
                                    MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                                } else {
                                    MyPosition = Player->RootComponent->RelativeLocation;
                                }
                                ASTExtraVehicleBase *CurrentVehicle = localPlayer->CurrentVehicle;
                                if (CurrentVehicle) {
                                    EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                                } else {
                                    EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                                }
                                FVector EntityPos = WorldToRadar(
                                                        localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw,
                                                        MyPosition, EnemyPosition, NULL, NULL,
                                                        Vector3(glWidth, glHeight, 0), shit);
                                FVector angle = FVector();
                                Vector3 forward = Vector3((float) (glWidth / 2) - EntityPos.X,
                                                          (float) (glHeight / 2) - EntityPos.Y,
                                                          0.0f);
                                VectorAnglesRadar(forward, angle);
                                const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                                const auto new_point_x = (glWidth / 2) +
                                                         (30 /*alert dist from me*/) / 2 * 8 *
                                                         cosf(angle_yaw_rad);
                                const auto new_point_y = (glHeight / 2) +
                                                         (30 /*alert dist from me*/) / 2 * 8 *
                                                         sinf(angle_yaw_rad);
                                std::array<Vector3, 3> points{
                                    Vector3(new_point_x - ((90) / 4 + 3.5f) / 2,
                                            new_point_y - ((30) / 4 + 3.5f) / 2, 0.f),
                                    Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y,
                                            0.f), Vector3(new_point_x - ((30) / 4 + 3.5f) / 2,
                                                          new_point_y + ((20) / 4 + 3.5f) / 2,
                                                          0.f)};
                                RotateTriangle(points, angle.Y + 180.0f);
                                if (Config.SilentAim.VisCheck) {
                                    draw->AddCircle(ImVec2(new_point_x, new_point_y), 8.0f, ImColor(0.33f, 0.67f, 0.86f, 1.00f),
                                                    64, 8.0f);
                                } else {
                                    draw->AddCircle(ImVec2(new_point_x, new_point_y), 8.0f, ImColor(255,0,0),
                                                    64, 8.0f);
                                }
                            }
        
        


if (Config.PlayerESP.LineCenter) {
draw->AddLine({(float) glWidth / 2, 358}, HeadPosSC,SCOLOR, 0.6f);
}

if (Config.PlayerESP.LineDown) {
draw->AddLine({(float) glWidth / 2, 716}, RootPosSC,SCOLOR, 0.6f);
}        

 
if (Config.PlayerESP.Skeleton) {
                                // ESP Head
                                float boxWidth = 5.f - Distance * 0.03;
                                                draw->AddCircle({HeadPosSC.x, HeadPosSC.y},
                                                                boxWidth,
                                                                 SCOLOR,
                                                                0, 3.0f);

                                                //Skeleton
                                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y},
                                                              neck_01PoSC,
                                                               SCOLOR,
                                                              1.0f);
                                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y},
                                                              neck_01PoSC,
                                                               SCOLOR,
                                                              1.0f);

                                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y},
                                                              lowerarm_rPoSC,
                                                               SCOLOR,
                                                              1.0f);
                                                draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y},
                                                              hand_rPoSC,
                                                               SCOLOR,
                                                              1.0f);

                                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y},
                                                              lowerarm_lSC,
                                                               SCOLOR,
                                                              1.0f);
                                                draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y},
                                                              hand_lPoSC,
                                                               SCOLOR,
                                                              1.0f);

                                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y},
                                                              thigh_lPoSC,
                                                               SCOLOR,
                                                              1.0f);

                                                draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y},
                                                              calf_lPoSC,
                                                               SCOLOR,
                                                              1.0f);
                                                draw->AddLine({calf_lPoSC.x, calf_lPoSC.y},
                                                              foot_lPoSC,
                                                               SCOLOR,
                                                              1.0f);

                                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y},
                                                              calf_rPoSC,
                                                               SCOLOR,
                                                              1.0f);
                                                draw->AddLine({calf_rPoSC.x, calf_rPoSC.y},
                                                              foot_rPoSC,
                                                               SCOLOR,
                                                             1.0f);

                                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y},
                                                              PelvisPoSC,
                                                               SCOLOR,
                                                              1.0f);
                                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y},
                                                              HeadPosSC,
                                                               SCOLOR,
                                                              1.0f);


                            }
                                
                                
                                
 
                                
                                
                                
                                      if (Config.PlayerESP.Distance) {
                                    float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                    std::string s;
                                    
                                    

                            if (Config.PlayerESP.Distance) {       
                                s += "\n  ";
                                s += std::to_string((int)Distance);
                                s += "M";
                                
                            }
                            auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
//draw->AddTextStorke(NULL, 15.0f, (int) HeadSc.x - (textSize.x / 2), (int) sHeight - HeadSc.y - 33.817f, ToColor(Config.ColorsESP.PlayerID), playerid.c_str());
                            draw->AddTextStorke(NULL, 17.0f, (int) RootPosSC.x - (textSize.x / 2), RootPosSC.y, IM_COL32(255, 255, 255, 255), s.c_str());

                       }
                                
                                
							
							
                       if (Config.PlayerESP.Weapon1) {
        auto WeaponManagerComponent = Player->WeaponManagerComponent;
        if (WeaponManagerComponent) {
        {
        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
        if (CurrentWeaponReplicated) {
        auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
        if (WeaponId) {
        std::string s;
        s += CurrentWeaponReplicated->GetWeaponName().ToString();
        auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
	draw->AddTextStorke(NULL, WeaponId, (int) HeadPosSC.x - (textSize.x / 2.410), HeadPosSC.y  - (textSize.y / 0.749), IM_COL32(0, 255, 0, 255), s.c_str());
        }
        }
        }
        }
        }
      
                                

                        FVector2D top(RootPosSC.x, RootPosSC.y);
                        FVector2D bot(HeadPosSC.x, HeadPosSC.y);
                        if (top.X > bot.X)
                        {
                            top.X -= (top.X - bot.X);
                        }
                        else if (top.X < bot.X)
                        {
                            top.X += (bot.X - top.X);
                        }
                        FVector PlayerScreen{top.X, top.Y, std::abs(bot.Y - top.Y)};
						
if (Config.PlayerESP.Health) {
                                    float HPTHICKNESS = 3.2f;
                            float fixposyyy = 5;
                            float fixposx = -4;
                            DrawFilledRectangle(PlayerScreen.X - PlayerScreen.Z / 4 + fixposx, HeadPosSC.y, HPTHICKNESS, (PlayerScreen.Z + fixposyyy), ImVec4(0, 0, 0, 255));
                            if (Player->Health == 0 && !Player->bDead)
                            {
                                float CurHp = Player->NearDeathBreath;
                                float MaxHP = Player->NearDeatchComponent->BreathMax;
                                DrawFilledRectangle(PlayerScreen.X - (PlayerScreen.Z / 4) + fixposx, HeadPosSC.y, HPTHICKNESS, (PlayerScreen.Z + fixposyyy) * CurHp / MaxHP, ImVec4(255, 0, 0, 155));
                            }
                            else
                            {
                                if (Player->Health > 70.0)
                                {
                                    DrawFilledRectangle(PlayerScreen.X - (PlayerScreen.Z / 4) + fixposx, HeadPosSC.y, HPTHICKNESS, (PlayerScreen.Z + fixposyyy) * Player->Health / Player->HealthMax, ImVec4(0, 255, 0, 255));
                                }
                                if (Player->Health > 30.0 && Player->Health <= 70.0)
                                {
                                    DrawFilledRectangle(PlayerScreen.X - (PlayerScreen.Z / 4) + fixposx, HeadPosSC.y, HPTHICKNESS, (PlayerScreen.Z + fixposyyy) * Player->Health / Player->HealthMax, ImVec4(255, 25, 0, 255));
                                }
                                if (Player->Health > 0.0 && Player->Health <= 30.0)
                                {
                                    DrawFilledRectangle(PlayerScreen.X - (PlayerScreen.Z / 4) + fixposx, HeadPosSC.y, HPTHICKNESS, (PlayerScreen.Z + fixposyyy) * Player->Health / Player->HealthMax, ImVec4(255, 0, 0, 255));
                                }
                            }
                        }
                        
                        bool isDrawEnemyAround = false;
    bool moreThanOneAimingAtMe = false;
	
                         if (!Config.ESPMenu.WARNING) {
                         
     isDrawEnemyAround = true;
    } else {	
    
     auto Threats = GetThreats();
     if (Threats.size() == 1) {
      std::string ws;   
      if (Threats[0].bAiming) {
	   
       ws += ICON_FA_EXCLAMATION_TRIANGLE " ENEMY IS AIMING AT YOU " ICON_FA_EXCLAMATION_TRIANGLE ;
	   
       if (Threats[0].bBehind) {                                  
       ws += "Behind !!!";          
       } else {
       ws += "";
       }      
       long Aiming = ImColor(isRed, isGreen, 22.0f);
       if (Threats[0].bBehind) {          
       Aiming = ImColor(isRed, isGreen, 22.0f);
       }
       if (Player->bEnsure) {
       Aiming = ImColor(isRed, isGreen, 22.0f);
       }
          draw->AddTextStorke(Pra, 39.0f, (float) glWidth / 3.0f, 156.0f, Aiming, ws.c_str());                   
    }
    }
    
    }
  
                                if (Config.ESPMenu.HealthPC){
						                                                       int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                       (int) Player->HealthMax));
                                int MaxHP = (int) Player->HealthMax;

                                long HPColor = IM_COL32(39, 172, 57, 110);
                                long HPRectColor = IM_COL32(1, 1, 1, 255);

                                if (Player->Health == 0.0f && !Player->bDead) {
                                    HPColor = IM_COL32(255, 0, 0, 110);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent) {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                float boxWidth = density / 3.2f; // width
                                boxWidth -= std::min(((boxWidth / 2) / 500.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.19f; // height


                                ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
                                                 HeadPosSC.y - (boxHeight * 1.9f)}; //ooper neeche

                                ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),
                                                     vStart.y + boxHeight};
                                ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                draw->AddRectFilled(vStart, vEndFilled, HPColor, 0.0f, 240);
                                draw->AddRect(vStart, vEndRect, HPRectColor, 0.0f, 240);
                            

                            
                            

                        }
								
								
						
						                            if (Config.PlayerESP.Name) {
                                    float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                 //   std::string s;
                                    
                                    float rectWidth = density / 2.0f;
                                rectWidth -= std::min(((rectWidth / 0.0f) / 0.0f) * Distance,
                                                     rectWidth / 0.0f);
                                float rectHeight = rectWidth * 2.0f;
                                
                                    ImVec2 vStart = {RootPosSC.x - (boxWidth / 0.65f),
                                                 RootPosSC.y - (boxHeight * 0.65f)};
                                 ImVec2 vEnd = {RootPosSC.x - (rectWidth / 3.7f),
                                                 RootPosSC.y - (rectHeight * 2.0f)};
                                    std::string s;
                                    std::string ws;
                                if (Player->bIsAI) {
                                    s += u8"Bot";
                                } else {
									//ws +=
                                   s += Player->PlayerName.ToString();

                                        }
                                        auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
                            draw->AddTextStorke(NULL, 16.0f, (int) RootPosSC.x - (textSize.x / 2), RootPosSC.y, IM_COL32(255, 255, 0, 255), s.c_str());
                                    }
                                 


			 if (Config.PlayerESP.TeamID) {
                                    float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                    std::string s;
                                    
                                    

                                    if (Config.PlayerESP.TeamID) {
                                        s += "[";
                                        s += std::to_string(Player->TeamID);
                                        s += "]";
                                    }
							
						


							auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 20.0f));
                            draw->AddText(NULL, ((float) density / 20.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 0, 0, 255), s.c_str());
							}
					     
					
					
                        }
                    }
                }

                if (Config.PlayerESP.VehicleName) {
                    if (i->IsA(ASTExtraVehicleBase::StaticClass())) {
                        auto Vehicle = (ASTExtraVehicleBase *) i;

                        if (!Vehicle->Mesh)
                            continue;

                        float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;

                        FVector2D vehiclePos;
                        if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
                            std::string s = "[";
                                s += GetVehicleName(Vehicle);
                            s += "-";
                                s += std::to_string((int) Distance);
                                s += "M]";

                            draw->AddText(NULL, ((float) density / 20.0f), {vehiclePos.X, vehiclePos.Y}, ToColor(Config.ColorsESP.Vehicle), s.c_str());
                        }
                    }
                }
                
                
                
                       if (Config.PlayerESP.VehicleImage) {
                          if (i->IsA(ASTExtraVehicleBase::StaticClass())) {
                        auto Vehicle = (ASTExtraVehicleBase *) i;
                        if (!Vehicle->Mesh)
                             continue;
                        float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D vehiclePos;
                        
                        if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
                       std::string s;
                        
                        draw->AddText(NULL,((float) density / 29.0f),
                        {vehiclePos.X, vehiclePos.Y},
                        IM_COL32(0, 0, 0, 255), s.c_str());
                        draw->AddText(NULL,((float) density / 30.0f),
                        {vehiclePos.X, vehiclePos.Y},
                        
                        IM_COL32(255, 255, 000, 255), s.c_str());
                          }
                              }
                          }
                              

                              
	if (Config.ESPMenu.VehicleBox)
						  {
                             if (i->IsA(ASTExtraVehicleBase::StaticClass())) {
                        auto Vehicle = (ASTExtraVehicleBase *) i;
                                if (!Vehicle->Mesh)
                                    continue;

                                float Distance = Vehicle->GetDistanceTo(localPlayer) / 20.f;

                                FVector2D vehiclePos;
    if (Config.ESPMenu.Vehicle) {
                                    FVector Hunt;
                            Hunt.X = 350.0f; 
                            Hunt.Y = 350.0f; // Front
                            Hunt.Z = 350.0f; // Height
                                Box3D(draw, Vehicle->K2_GetActorLocation(), Hunt, IM_COL32(255, 255, 255, 255));							
                                }
                                if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
                                    std::string s = GetVehicleName(Vehicle);
                                    

                                    draw->AddText(NULL, ((float) density / 25.0f), {vehiclePos.X, vehiclePos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());
                                }
                            }
                        }
                
                 if (Config.ESPMenu.Grenade) {
         if (Actor->IsA(ASTExtraGrenadeBase::StaticClass())) {
                auto Grenade = (ASTExtraGrenadeBase *) Actor;
                  auto RootComponent = Actor->RootComponent;
                          if (!RootComponent)
                         continue;
              float Distance = Grenade->GetDistanceTo(localPlayer) / 100.f;

                                FVector2D grenadePos;

                                if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
                                    std::string s = ICON_FA_BOMB"Grenade";
                                    s += "";
                                    s += std::to_string((int) Distance);
                                    s += "M";
                                    std::string t;
                                t += "!!!...Warning Grenade...!!!";
                            auto textSize = ImGui::CalcTextSize2(t.c_str(), 0, ((float) density / 13.0f));
                        draw->AddText(NULL, ((float) density / 13.0f), ImVec2(glWidth / 2 - (textSize.x / 2), 110), IM_COL32(255, 000, 000, 255), t.c_str());

                                    draw->AddText(NULL, ((float) density / 30.0f),
                                                  {grenadePos.X, grenadePos.Y},
                                                  IM_COL32(255, 000, 000, 255), s.c_str());
                                }
                            }
                        }
                
                    if (Config.ESPMenu.LootBox) {     
                          if (i->IsA(APickUpListWrapperActor::StaticClass())) {
                              auto Pick = (APickUpListWrapperActor *) i;  
                          if (!Pick->RootComponent)
                              continue;                        
                              auto PickUpDataList2 = *(TArray<FPickUpItemData> *)((uintptr_t) Pick + 0x828);                
                              float Distance = Pick->GetDistanceTo(localPlayer) / 100.f;
                              FVector2D PickUpListsPos;
                              if (Distance <= 350.f) {
                              Vector3 origin, extends;                 
                          if (W2S(Pick->K2_GetActorLocation(), &PickUpListsPos)) {
                                std::string s = "LOOT BOX";
                                s += " - [";
                                s += std::to_string((int) Distance);
                                s += "M]";
                                draw->AddText(NULL, ((float) density / 25.0f), {PickUpListsPos.X - 40, PickUpListsPos.Y + 48}, ImColor(255,255,255,255), s.c_str());
                       
                          //======== 𝗘𝗦𝗣 𝗟𝗢𝗢𝗧 𝗜𝗧𝗘𝗠
                          if (Config.ESPMenu.LootBoxitems)  {
                          if (Distance <= 500) {
                               auto mWidthScale = std::min(0.1f * Distance, 35.f);
                               auto boxWidth = 75.f - mWidthScale;
                               auto boxHeight = boxWidth * 0.200f;
                               Rect PlayerRect(PickUpListsPos.X - (boxWidth / 2), PickUpListsPos.Y, boxWidth, boxHeight);       
                               float posY = PickUpListsPos.Y - (PlayerRect.height * 1.00f);
                          for (int j = 0; j < PickUpDataList2.Num(); j++) {
                                std::vector<std::string> s2;
                                std::string itm;
                                uint32_t tc = 0xFF000000;
                          for (auto &category : items_data) {
                          for (auto &item : category["Items"]) {
                          if (item["itemId"] == PickUpDataList2[j].ID.TypeSpecificID) {
                              itm += "[ ";
                              itm += item["itemClass"].get<std::string>();
                              itm += " ] ";
                              itm += item["itemName"].get<std::string>();
                              tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
                              s2.push_back(itm);
                              break;
                                }}}
                if (!s2.empty())  {
                if (PickUpDataList2[j].Count > 1){
                s2.push_back(" * ");
                s2.push_back(std::to_string(PickUpDataList2[j].Count));}
                std::string s3;
                for (auto &s4 : s2)   { s3 += s4;}
                draw->AddText(NULL, ((float) density / 25.0f), {PickUpListsPos.X, posY}, tc, s3.c_str());  
                posY -= PlayerRect.height * 1.00f;
                }}}}}}}}
                if (i->IsA(APickUpWrapperActor::StaticClass())) {
                    auto PickUp = (APickUpWrapperActor *) i;
                    if (Items[PickUp->DefineID.TypeSpecificID]) {
                        auto RootComponent = PickUp->RootComponent;
                        if (!RootComponent)
                            continue;

                        float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;

                        FVector2D itemPos;
                            if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                                std::string s;
                                uint32_t tc = 0xFF000000;

                                for (auto &category: items_data) {
                                    for (auto &item: category["Items"]) {
                                        if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
                                            s = item["itemName"].get<std::string>();
                                            tc = strtoul(
                                                    item["itemTextColor"].get<std::string>().c_str(),
                                                    0, 16);
                                            break;
                                    }
                                }
                            }

                            s += " - ";
                            s += std::to_string((int) Distance);
                            s += "M]";
							
							draw->AddText(NULL, ((float) density / 20.0f),
                                              {itemPos.X, itemPos.Y}, tc, s.c_str());
                        }
                    }
                }
            }
        }
    }
    
				    g_LocalController = localController;
            g_LocalPlayer = localPlayer;
            std::string s;
            int TotalCount = totalEnemies + totalBots;
                if (TotalCount > 0) {
                auto Flags69 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar;
                ImVec2 center = ImGui::GetMainViewport()->GetCenter();
                ImGui::SetNextWindowPos(ImVec2(center.x, 100), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
                ImGui::SetNextWindowSize(ImVec2(210.0f, 35.0f));
                ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(0,255,0,255));
                ImGui::PushStyleColor(ImGuiCol_WindowBg, IM_COL32(0,0,0,180));
                ImGui::Begin("ene", 0, Flags69);
                ImGui::PopStyleColor(2);
                ImGui::Text(("Total enemy around you : %d "),  TotalCount);
                ImGui::End();
            } else {
		         auto Flags69 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar;
                 ImVec2 center = ImGui::GetMainViewport()->GetCenter();
                 ImGui::SetNextWindowPos(ImVec2(center.x, 100), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
                 ImGui::SetNextWindowSize(ImVec2(210.0f, 35.0f));
                 ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(0,255,0,255));
                 ImGui::PushStyleColor(ImGuiCol_WindowBg, IM_COL32(0,0,0,180));
                 ImGui::Begin("ene", 0, Flags69);
                 ImGui::PopStyleColor(2);
                 ImGui::Text(("Total enemy around you : %d "),  TotalCount);
                 ImGui::End();
				
			}
			
        }

   if (Config.AimBot.Enable) {
	               
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.AimBot.Cross*0.5f, ToColor(Config.ColorsESP.Fov), 100, 1.0f);
}

if (FovAGHA) {
	               
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.SilentAim.Cross*0.5f, ToColor(Config.ColorsESP.Fov), 100, 1.0f);
}

  fps.update();
  std::string credit = "";
    auto textSize = ImGui::CalcTextSize2(credit.c_str(), 0, ((float) density / 15.5f));
    draw->AddText(NULL, ((float) density / 10.5f), {((float) glWidth / 2) - (textSize.x / 2), 90}, IM_COL32(255, 0, 0, 255), credit.c_str());

 }
 

void loadConfig()
{
    int fd = open("/data/data/com.tencent.ig/files/AGHA.ini", O_RDONLY);  
    int fr = open("/data/data/com.rekoo.pubgm/files/AGHA.ini", O_RDONLY);  
        read(fd, &Config, sizeof(Config)); 
        read(fd, &Config.Meter, sizeof(Config.Meter));      
        read(fd, &Config.HighRisk, sizeof(Config.HighRisk)); 
        read(fd, &Config.ESPMenu, sizeof(Config.ESPMenu));  
        
        close(fd);
}
    void DeleteConfig()
{

    int fd = remove("/data/data/com.tencent.ig/files/AGHA.ini");
    int fr = remove("/data/data/com.rekoo.pubgm/files/AGHA.ini");
    close(fd);
}

    void saveConfig()
{
    
    int fd = open("/data/data/com.tencent.ig/files/AGHA.ini", O_WRONLY | O_CREAT);
    system("chmod 777 /data/com.tencent.ig/files/AGHA.ini");
    int fr = open("/data/data/com.rekoo.pubgm/files/AGHA.ini", O_WRONLY | O_CREAT);
    system("chmod 777 /data/com.rekoo.pubgm/files/AGHA.ini");
    write(fd, &Config, sizeof(Config));
    write(fd, &Config.Meter , sizeof(Config.Meter));     
    write(fd, &Config.HighRisk , sizeof(Config.HighRisk));
    write(fd, &Config.ESPMenu, sizeof(Config.ESPMenu));  
    
    close(fd);
}

void loadCFG(){
    loadConfig();

}
void removeCFG(){
    DeleteConfig();

}
void saveCFG(){
    saveConfig();
}
// ==========agha77mm ========================== //

    std::string getClipboardText() {
        if (!g_App)
            return "";

        auto activity = g_App->activity;
        if (!activity)
            return "";

        auto vm = activity->vm;
        if (!vm)
            return "";

        auto object = activity->clazz;
        if (!object)
            return "";

        std::string result;

        JNIEnv *env;
        vm->AttachCurrentThread(&env, 0);
        {
            auto ContextClass = env->FindClass("android/content/Context");
            auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

            auto str = env->NewStringUTF("clipboard");
            auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
            env->DeleteLocalRef(str);

            auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
            auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

            auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
            auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

            auto text = env->CallObjectMethod(clipboardManager, getText);
            if (text) {
                str = (jstring) env->CallObjectMethod(text, toStringMethod);
                result = env->GetStringUTFChars(str, 0);
                env->DeleteLocalRef(str);
                env->DeleteLocalRef(text);
            }

            env->DeleteLocalRef(CharSequenceClass);
            env->DeleteLocalRef(ClipboardManagerClass);
            env->DeleteLocalRef(clipboardManager);
            env->DeleteLocalRef(ContextClass);
        }
        vm->DetachCurrentThread();

        return result;
    }

//========{{{{KNIG}}}}=========///
	
    const char *GetAndroidID(JNIEnv *env, jobject context) {
        jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
        jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
        jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
        jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

        auto obj = env->CallObjectMethod(context, getContentResolverMethod);
        auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetDeviceModel(JNIEnv *env) {
        jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
        jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

        auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetDeviceBrand(JNIEnv *env) {
        jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
        jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

        auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetPackageName(JNIEnv *env, jobject context) {
        jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
        jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

		//auto szPkgName = GetPackageName(context, getPackageNameId);
        auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
        return env->GetStringUTFChars(str, 0);
		
    }

    const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
        jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

        auto len = strlen(uuid);

        jbyteArray myJByteArray = env->NewByteArray(len);
        env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

        jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
        jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

        auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
        auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
        return env->GetStringUTFChars(str, 0);
    }

int LuffyClose() {
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, OBFUSCATE("AndroidThunkJava_RestartGame"),/*Luffy New Restart*/OBFUSCATE("()V"));
    if (method_id == NULL)
        return -4;
    java_env->CallVoidMethod(g_App->activity->clazz, method_id);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}
bool isLuffyFolderHere(const std::string& folderPath) {
    return (access(folderPath.c_str(), F_OK) == 0);
}



void LuffyAntiCrack1() {
std::string folderPath = XorStr("/storage/emulated/0/Android/data/com.guoshi.httpcanary");
if (isLuffyFolderHere(folderPath)) {
    LuffyClose(); } else {}
}
void LuffyAntiCrack2() {
std::string folderPath = XorStr("/storage/emulated/0/Android/data/com.guoshi.httpcanary.premium");
if (isLuffyFolderHere(folderPath)) {
    LuffyClose(); } else {}
}
void LuffyAntiCrack3() {
std::string folderPath = XorStr("/storage/emulated/0/Android/data/com.sniffer");
if (isLuffyFolderHere(folderPath)) {
    LuffyClose(); } else {}
}

    struct MemoryStruct {
        char *memory;
        size_t size;
    };

    static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
        size_t realsize = size * nmemb;
        struct MemoryStruct *mem = (struct MemoryStruct *) userp;

        mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
        if (mem->memory == NULL) {
            return 0;
        }

        memcpy(&(mem->memory[mem->size]), contents, realsize);
        mem->size += realsize;
        mem->memory[mem->size] = 0;

        return realsize;
    }

    std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

CURL *curl;
        CURLcode res;
        curl = curl_easy_init();
        if (curl) {
        std::string ripAGHA = "h";
        std::string ripAGHA1 = "t";
        std::string ripAGHA2 = "t";
        std::string ripAGHA3 = "p";
        std::string ripAGHA4 = "s";
        std::string ripAGHA5 = ":";
        std::string ripAGHA6 = "/";
        std::string ripAGHA7 = "/";
        std::string ripAGHA8 = "i";
        std::string ripAGHA9 = "n";
        std::string ripAGHA10 = "d";
        std::string ripAGHA11 = "k";
        std::string ripAGHA12 = "e";
        std::string ripAGHA13 = "y";
        std::string ripAGHA14 = ".";
        std::string ripAGHA15 = "x";
        std::string ripAGHA16 = "y";
        std::string ripAGHA17 = "z";
        std::string ripAGHA18 = "/";
        std::string ripAGHA19 = "c";
        std::string ripAGHA20 = "o";
        std::string ripAGHA21 = "n";
        std::string ripAGHA22 = "n";
        std::string ripAGHA23 = "e";
        std::string ripAGHA24 = "c";   
        std::string ripAGHA31 = "t";
        
    std::string sRedLink = ripAGHA+ripAGHA1+ripAGHA2+ripAGHA3+ripAGHA4+ripAGHA5+ripAGHA6+ripAGHA7+ripAGHA8+ripAGHA9+ripAGHA10+ripAGHA11+ripAGHA12+ripAGHA13+ripAGHA14+ripAGHA15+ripAGHA16+ripAGHA17+ripAGHA18+ripAGHA19+ripAGHA20+ripAGHA21+ripAGHA22+ripAGHA23+ripAGHA24+ripAGHA31;

        curl_easy_setopt(curl, CURLOPT_URL ,sRedLink.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
  curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
  struct curl_slist *headers = NULL;
  headers = curl_slist_append(headers, StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
  curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                           g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                       g_Token = "1";
                        g_Auth = "1";

                        bValid = g_Token == g_Auth;
                        EXP = result["data"]["EXP"].get<std::string>();
                        modname = result["data"]["modname"].get<std::string>();
                        mod_status = result["data"]["mod_status"].get<std::string>();
                        credit = result["data"]["credit"].get<std::string>();
                        key = result["data"]["key"].get<std::string>();
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}

void HueText(const char* text, ImVec4 color)
{
    static auto start_time = std::chrono::high_resolution_clock::now(); // Get the current time
    auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() / 1000.0f; // Calculate the time elapsed since the start time in seconds
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.0f)); // Set the text color to be transparent
    for (int i = 0; i < strlen(text); i++)
    {
        ImGui::SameLine(); // Put each character on the same line
        float t = fmodf(elapsed_seconds + (float)i / (float)strlen(text), 1.0f); // Calculate the progress of the color change from 0 to 1, wrapping around at 1
        ImVec4 currentColor = ImVec4(color.x * t, color.y * t, color.z * t, color.w); // Calculate the current color for this character
        ImGui::PushStyleColor(ImGuiCol_Text, currentColor); // Change the text color for this character
        ImGui::Text("%c", text[i]); // Draw the character
        ImGui::PopStyleColor(); // Reset the text color
    }
    ImGui::PopStyleColor(); // Reset the transparent text color
}
void DrawTextCentered(const char *text)
{
    ImGui::Separator();
    ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize(text).x) / 5.f);
    ImGui::Text(text);
    ImGui::Separator();
}

// ======================================================================== //

#define IM_CLAMP(V, MN, MX)     ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
namespace Settings
{
    static int Tab = 1;
}

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0)
        return eglSwapBuffers(dpy, surface);

    if (!g_App)
        return eglSwapBuffers(dpy, surface);

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);
                    if (!initImGui) {
                    
                ImGui::CreateContext();
    
    ImGuiStyle& style = ImGui::GetStyle();

style.WindowRounding    = 4.0f;     
style.FrameRounding     = 3.0f;     
style.TabRounding       = 2.0f;
style.ScrollbarSize     = 10.0f;
style.ScrollbarRounding = 0.0f;
style.WindowTitleAlign  = ImVec2(0.50f, 0.50f); 
style.WindowBorderSize  = 1.0f;

ImVec4* colors = style.Colors;

// 🖤 ARKA PLANLAR → TAM SİYAH
colors[ImGuiCol_WindowBg]  = ImColor(0, 0, 0, 255);
colors[ImGuiCol_ChildBg]   = ImColor(0, 0, 0, 255);
colors[ImGuiCol_PopupBg]   = ImColor(0, 0, 0, 255);

// 🔲 DİĞERLERİ AYNI
colors[ImGuiCol_Border]               = ImColor(45, 45, 45, 255);

ImVec4 mainRed = ImColor(200, 0, 0, 255);
colors[ImGuiCol_CheckMark]            = mainRed;
colors[ImGuiCol_SliderGrab]           = mainRed;
colors[ImGuiCol_SliderGrabActive]     = ImColor(255, 0, 0, 255);
colors[ImGuiCol_HeaderActive]         = mainRed;
colors[ImGuiCol_SeparatorActive]      = mainRed;
colors[ImGuiCol_NavHighlight]         = mainRed;

colors[ImGuiCol_TitleBg]              = ImColor(10, 10, 10, 255);
colors[ImGuiCol_TitleBgActive]        = ImColor(10, 10, 10, 255);

colors[ImGuiCol_Tab]                  = ImColor(25, 25, 25, 255);
colors[ImGuiCol_TabHovered]           = ImColor(40, 40, 40, 255);
colors[ImGuiCol_TabActive]            = ImColor(35, 35, 35, 255);

colors[ImGuiCol_FrameBg]              = ImColor(30, 30, 30, 255);
colors[ImGuiCol_FrameBgHovered]       = ImColor(45, 45, 45, 255);
colors[ImGuiCol_FrameBgActive]        = ImColor(55, 55, 55, 255);

colors[ImGuiCol_Button]               = ImColor(35, 35, 35, 255);
colors[ImGuiCol_ButtonHovered]        = ImColor(55, 55, 55, 255);
// 🖤 BASILI / AKTİF DURUM → SİYAH
colors[ImGuiCol_ButtonActive]      = ImColor(0, 0, 0, 255);
colors[ImGuiCol_FrameBgActive]     = ImColor(0, 0, 0, 255);
colors[ImGuiCol_HeaderActive]      = ImColor(0, 0, 0, 255);
colors[ImGuiCol_TabActive]         = ImColor(0, 0, 0, 255);
colors[ImGuiCol_SliderGrabActive]  = ImColor(0, 0, 0, 255);
colors[ImGuiCol_SeparatorActive]   = ImColor(0, 0, 0, 255);
colors[ImGuiCol_NavHighlight]      = ImColor(0, 0, 0, 255);

colors[ImGuiCol_Text]                 = ImVec4(0.95f, 0.95f, 0.95f, 1.00f);
colors[ImGuiCol_TextDisabled]         = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);



       ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");

        ImGuiIO& io = ImGui::GetIO();

        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

        static const ImWchar ranges[] =
        {
            0x0020, 0x00FF,
            0x2010, 0x205E,
            0x0600, 0x06FF,
            0xFE00, 0xFEFF,
            0,
        };
        static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
        ImFontConfig icons_config;

        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;

        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;

        io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 18.f, &CustomFont);
        io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 18.0f, &icons_config, icons_ranges);
        ImFontConfig cfg;
        cfg.SizePixels = ((float)density / 20.0f);
        io.Fonts->AddFontDefault(&cfg);

        memset(&Config, 0, sizeof(sConfig));

        

      
       
// ===============================ESPCOLOR ================================== //


        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Name = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Skeleton = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.SkeletonVisible = CREATE_COLOR(0, 255, 0, 255);
		Config.ColorsESP.Fov = CREATE_COLOR(255, 0, 0, 255);
		Config.AimBot.Recc = 1.055f;
		Config.Skeleton = 2.00f;
		Config.Line = 2.00f;
		

             initImGui = true;
        }
ImGuiIO &io = ImGui::GetIO();



    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();

 
  DrawESP(ImGui::GetBackgroundDrawList());

ImGui::SetNextWindowSize(ImVec2((float)glWidth * 0.35f, (float)glHeight * 0.55f), ImGuiCond_Once);

		if (ImGui::Begin(OBFUSCATE(" FUCKYOU CNC </>"), 0,ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoSavedSettings)) {

     static bool isLogin = true;
            if (!isLogin) {
            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::Text("Key");
            ImGui::SameLine();
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();
            static std::string err;
     //  if (ImGui::Button("Check", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
        if (ImGui::Button("Check", ImVec2(228, 0))) {
        err = Login(s);
        if (err == "OK") {
        isLogin = bValid && g_Auth == g_Token;
        }
        }
        ImGui::SameLine();
              if (ImGui::Button(" Paste Key", ImVec2(-1, 0))) {
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
            }
        if(ImGui::Button("Get Key", ImVec2(461 -0 , 0) )) {
  OpenURL("https://t.me/@agha77mm"); 
                       }
        if (!err.empty() && err != "OK") {
        ImGui::Text("Server Response: %s", err.c_str());
        }
        } else {
	

		


char sgasg[256] = ""; // assume this is your input buffer
static bool ic;
        static bool VR;
        static bool 鸡;
                    static bool blinkState = true;
            static float blinkTimer = 0.0f;
            blinkTimer += ImGui::GetIO().DeltaTime;
            if (blinkTimer > 0.5f)
            {
                blinkState = !blinkState;
                blinkTimer = 0.0f;
            }
        //    ImVec4 ballColor = blinkState ? ImVec4(1.0f, 0.0f, 0.0f, 1.0f) : ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
         //  ImVec4 ballColorhh = blinkState ? ImVec4(0,255,0,255) : ImVec4(0.0f, 0.0f, 0.0f, 0.0f);

        
 //       ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(255, 0, 0, 255));
   //     ImGui::SetCursorPos({ 4.f,4.f });
        if (ImGui::Button(ICON_FA_PLAY, ImVec2(50, 30)))
        {
            VR = true;
        }
        ImGui::SameLine();
        ImGui::Text(" CNC FUCKYOU </> ");
        ImGui::SameLine();
      //  ImGui::TextColored(ballColor, ICON_FA_CIRCLE);
    //    ImGui::PopStyleColor();


        ImVec2 center = ImGui::GetMainViewport()->GetCenter();
        ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));

        ImGui::SetNextWindowSize(ImVec2({783, 603}));
        if (VR) {
            static bool p_open = true;
      auto mareetg0 = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoBringToFrontOnFocus/* + ImGuiWindowFlags_NoTitleBar*/;
            char buf[128];
            sprintf(buf, (OBFUSCATE("CNC LEAKED BY @Scarfacestorex @Woltaj_hax")), (io.Framerate), ImGui::GetFrameCount());
          
            ImGui::Begin(buf, &VR,mareetg0);


			        ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 0.0f);
				    ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 0.0f);
				    ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(66, 66, 66, 255));
				    ImGui::SetCursorPos(ImVec2(0, 0));
				    ImGui::BeginChild("TitileBg#1", ImVec2(850, 30), true);
				    ImGui::PopStyleVar(2);
				    ImGui::PopStyleColor();
				    ImGui::EndChild();
			        static int tab = 1;
                   ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(8, 3));
			        ImGuiIO& io = ImGui::GetIO();
			        ImGuiStyle& style = ImGui::GetStyle();
			        style.FrameRounding = 4.0f;
                    if (ImGui::Button(ICON_FA_HOME" Home", ImVec2(152.5 - 6, 23)))
                        Settings::Tab = 1;
                    ImGui::SameLine();
                    if (ImGui::Button(ICON_FA_EYE" Visual", ImVec2(152.5 - 6, 23)))
                        Settings::Tab = 2;
                    ImGui::SameLine();
                    if (ImGui::Button(ICON_FA_CROSSHAIRS" Aimbot", ImVec2(152.5 - 6, 23)))
                        Settings::Tab = 3;

                    ImGui::SameLine();
                    if (ImGui::Button(ICON_FA_LIST" Memory", ImVec2(152.5 - 6, 23)))
                        Settings::Tab = 4;
                        
                    ImGui::SameLine();
                    if (ImGui::Button(ICON_FA_COG" Settings", ImVec2(152.5 - 6, 23)))
                        Settings::Tab = 5;

			        style.FrameRounding = 0.0f;
					
                    ImGui::PopStyleVar();
                    
                    
                if (Settings::Tab == 1) {
           ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
           ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
           ImGui::BeginChild("hdkdbfk ff#1", ImVec2(0, 0), true);
           ImGui::PopStyleVar(2);
           ICON_FA_USER;
           ImGui::Spacing();
           ImGui::Separator();
		   	ImGui::Text(" </> ENJOY WITH US");
	     	ImGui::SameLine();
	   //  	ImGui::TextColored(ballColorhh, ICON_FA_CIRCLE);
            ImGui::Text(" Support 3.5.0");
            ImGui::SameLine();
           ImGui::TextColored(ImColor(66, 66, 66, 255), "(+)");
            ImGui::Text(" - Version : Admin");
             ImGui::SameLine();
             ImGui::TextColored(ImColor(66, 66, 66, 255), "(#)");
           ImGui::Text(" - My Account : @notAGHA");
            ImGui::SameLine();
            ImGui::TextColored(ImColor(66, 66, 66, 255), "(?)");
		   				ImGui::SetCursorPos(ImVec2(5, 460));
						ImGui::Separator();
						ImGui::SetCursorPos(ImVec2(5, 465));
						ImGui::PushItemWidth(800);
						ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
                        ImGui::EndChild();
                }
                
                
                
                                    if (Settings::Tab == 2) {
                        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 2));
                        ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                        ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                        ImGui::BeginChild("MAIN#1", ImVec2(0, 0), true);
                        ImGui::PopStyleVar(2);
						{
                        ImGui::Columns(2);
					    ImGui::SetColumnOffset(1, 257);
					    ImGui::SetCursorPos(ImVec2(8, 8));
                        ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                        ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                        ImGui::BeginChild("EspMenu#1", ImVec2(250, 0), true);
                        ImGui::PopStyleVar(2);
                        {
							ImGui::Spacing();
		    	ImGui::Checkbox("Show enemy name", &Config.PlayerESP.Name);
		    	ImGui::Spacing();
		    	ImGui::Spacing();
			    ImGui::Checkbox("Draw enemy skeleton", &Config.PlayerESP.Skeleton);
			    ImGui::Spacing();
			    ImGui::Spacing();
                ImGui::Checkbox("Draw line to enemy", &Config.PlayerESP.Line);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Draw line center to enemy", &Config.PlayerESP.LineCenter);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Draw line down to enemy", &Config.PlayerESP.LineDown);
                ImGui::Spacing();
                ImGui::Spacing();
			    ImGui::Checkbox("Show enemy distance", &Config.PlayerESP.Distance);
			    ImGui::Spacing();
			    ImGui::Spacing();
                ImGui::Checkbox("Show enemy health", &Config.PlayerESP.Health);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Draw player box", &Config.PlayerESP.Box);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Show enemy weapon", &Config.PlayerESP.Weapon1);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Draw radar", &Config.ESPMenu.Alert);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Show enemy warning", &Config.ESPMenu.WARNING);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("Show Game information", &Config.PlayerESP.GameInfo1);

						}


                        ImGui::EndChild();
						ImGui::TableNextColumn();
					    ImGui::SameLine();
						ImGui::TableNextColumn();
					    ImGui::NextColumn();
					    ImGui::SetCursorPos(ImVec2(265, 8));
                        ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                        ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                        ImGui::BeginChild("PlayerSetting#1", ImVec2(0, 0), true);
                        ImGui::PopStyleVar(2);
						{
                        if (ImGui::BeginTabBar("Tab", ImGuiTabBarFlags_FittingPolicyScroll)) {

                            if (ImGui::BeginTabItem("Loot Item's")) {

                                for (auto& i : items_data) {
                                    if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
                                        ImGui::Spacing();
                                        for (auto& item : i["Items"]) {
                                            ImGui::Checkbox(item["itemName"].get<std::string>().c_str(),
                                                (bool*)&Items[item["itemId"].get<int>()]);

                                        }
                                    }
                                }


							}
                                ImGui::EndTabItem();
                            }
						}

                        }

                        ImGui::EndChild();
                        ImGui::EndChild();

                        ImGui::PopStyleVar();
                    }




           if (Settings::Tab == 3) {
                ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                ImGui::BeginChild("ESP#1", ImVec2(0, 0), true);
                ImGui::PopStyleVar(2);              
                ImGui::Columns(2);
                ImGui::SetColumnOffset(1, 255);
                {             
                ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                ImGui::BeginChild("EspMenu#1", ImVec2(240, 0), true);
                ImGui::PopStyleVar(2);
                {
                 ImGui::Checkbox(("SilentAim"), &Config.SilentAim.Enable);
                 ImGui::Spacing();
                 ImGui::Spacing();
				 ImGui::Checkbox("Auto Fire", &Autofire);

                }
                         ImGui::EndChild();
                         ImGui::NextColumn();
                                
                            ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                            ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                            ImGui::BeginChild("AimSetting#1", ImVec2(0, 0), true);
                            ImGui::PopStyleVar(2);
                            {
								

                           if(Config.SilentAim.Enable) {
                                if(ImGui::CollapsingHeader("SilentAim")) {
				                 ImGui::Text("");
                                 ImGui::SliderInt("distance", &Config.materAGHA,  0.000f, 1800.0f,"%.0fms");
                                 ImGui::Checkbox("ShowFov", &FovAGHA);
                          		if (FovAGHA) {
                               ImGui::SliderInt("Fov (fun)", &Config.SilentAim.Cross,  0.000f, 1800.0f,"%.0fms");
                              }
			                     ImGui::Spacing() ;   
                                 ImGui::Spacing() ;   
                                 static const char *targetsAimbot[] = {"Auto", "Chest"};
                                 ImGui::Combo("##TargetAimbot", (int *) &Config.SilentAim.Target, targetsAimbot, 2, -1);
                                 ImGui::Spacing();
                                 ImGui::Spacing() ; 
                                 static const char *triggers[] = {"None", "Shooting", "Scoping"};
                                 ImGui::Spacing() ;   
                                 ImGui::Spacing() ; 
                                 ImGui::Combo("Trigger", (int *) &Config.SilentAim.Trigger, triggers, 3, -1);
                                 ImGui::Spacing() ;   
                                 ImGui::Spacing() ; 
	     	                       ImGui::Checkbox("Ignore Bots", &Config.SilentAim.IgnoreBot);
			                       ImGui::SameLine();
	     	                       ImGui::Checkbox("Visibility Check", &Config.VisCheck);
		                           ImGui::SameLine();
	     	                       ImGui::Checkbox("Skip Knocked", &Config.SilentAim.IgnoreKnocked); 
	     	                       ImGui::Spacing();
	     	                       ImGui::Checkbox("Target Line", &Config.PlayerESP.Alert1);
								   
                                   ImGui::EndTabItem();
                                    }
                         }
            }
     }
 }



                if (Settings::Tab == 4) {
               ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                ImGui::BeginChild("E98SP#1", ImVec2(0, 0), true);
                ImGui::PopStyleVar(2);              
                ImGui::Columns(2);
                ImGui::SetColumnOffset(1, 255);
                {             
                ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                ImGui::BeginChild("Esp89Menu#1", ImVec2(240, 0), true);
                ImGui::PopStyleVar(2);
                {
                
                
                ImGui::Checkbox("instahit", &AGHAXX);				
                ImGui::Spacing();
                ImGui::Spacing();
				ImGui::Checkbox(" ipadview ", &Config.HighRisk.Ipad);
				ImGui::Spacing();
				ImGui::Spacing();
                ImGui::Checkbox(" small cross ", &Config.Small);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" no recoile ", &Config.HighRisk.Recoil);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" no shake ", &Config.HighRisk.Shake);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" fast switch ", &Config.HighRisk.Switch);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" Fast Reload ", &Config.HighRisk.Reload);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" fast scope ", &Config.HighRisk.Scope);                
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("zoom scope", &ZoomUp);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("ModSkin", &AghaX);
                ImGui::SameLine();
                ImGui::TextColored(ImColor(66, 66, 66, 255), "(*)");
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" speed knock", &Config.FLASH);              
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" fast shoot", &Config.agha2);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" fast shoot v2", &Config.speedshoot);
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox(" OneShot*", &Config.OneShotKill);
                ImGui::Spacing();
                ImGui::Spacing();
          
                ImGui::Checkbox("flash speed ", &AutoAGHA);
                ImGui::SameLine();
                ImGui::TextColored(ImColor(66, 66, 66, 255), "(x)");
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Checkbox("flash speed v2", &Config.HighRisk.FlashV1);
                ImGui::SameLine();
      


                }
                         ImGui::EndChild();
                         ImGui::NextColumn();
                                
                            ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);
                            ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 6.0f);
                            ImGui::BeginChild("Aim98Setting#1", ImVec2(0, 0), true);
                            ImGui::PopStyleVar(2);
                            {
                     ImGui::TableNextColumn();
                       if (Config.HighRisk.Ipad) {
                         if (ImGui::CollapsingHeader(("IPad View"))) {
                              ImGui::SliderInt("", &Config.IpadS, (110.0f), (150.1f));
                           }
                      }     
				   
				   			
					   						ImGui::TableNextColumn();
                        if (Config.agha2) {
                            if (ImGui::CollapsingHeader(("Fast Shoot Set"))) {
                                ImGui::SliderFloat(" #### fast ", &Config.aghashot, (0.0f), (0.100f));
                            }
                        }  
                        
                        ImGui::TableNextColumn();
                        if (Config.HitEffectRinbow1) {
                            if (ImGui::CollapsingHeader((" rinbow - Effect "))) {
                          ImGui::SliderFloat("", &Config.PIROrainbowSpeedPIRO, 10.0f, 40.0f);
						  ImGui::TableNextColumn();
						  ImGui::ColorEdit4("X Hit Color Edit", Config.Royal_color, ImGuiColorEditFlags_PickerHueWheel);
						  ImGui::TableNextColumn();
                          ImGui::SliderFloat("Size", &Config.xHitEffect, 10.0f, 40.0f);

                            }
                        }
                        
                        ImGui::TableNextColumn();
                        
                        if (Config.FLASH) {
                            if (ImGui::CollapsingHeader(("Speed Knock Set"))) {
                                ImGui::SliderFloat("", &speedknock12, (0.0f), (1800.0f));
                            }
                        }
                        
                        ImGui::TableNextColumn();

            
                            if (ZoomUp) {
                            if (ImGui::CollapsingHeader(("ZoomScope"))) {
                                ImGui::Text(" ZoomScope ");
								ImGui::SameLine();
								ImGui::PushItemWidth(389);
								ImGui::SliderFloat("####Zoom", &SetZoomUp, (-10.0f), (50.0f), "%.1f");
                            }
                        }
                        
                        ImGui::TableNextColumn();
                        
                            if (Config.OneShotKill) {
                            if (ImGui::CollapsingHeader(("OneShoot"))) {
                            ImGui::Text("  OneShot ");
								ImGui::SameLine();
								ImGui::PushItemWidth(389);
                                ImGui::SliderFloat(" #### OneShot ", &BulletNumSingleShot, (0.0f), (50.0f));
                            }
                        }
                        
                       ImGui::TableNextColumn();
						
						
					   ///////////////////////////
                        if (AghaX) {
       if (ImGui::CollapsingHeader(("      Mod Skin"))) {
                    
                        ImGui::Spacing();											
     if (ImGui::BeginTable("##ModGun", 3, ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersInner)) {
     ImGui::TableSetupColumn("Enable", 0, 20);
     ImGui::TableSetupColumn("Name", 0, 30);
     ImGui::TableSetupColumn("Skin", 0, 60);
     ImGui::TableHeadersRow();
     ImGui::TableNextRow();
     
     ImGui::TableNextColumn();
     ImGui::Checkbox("###0", &preferences.M416);
     ImGui::TableNextColumn();
     ImGui::Text("M416");
     ImGui::TableNextColumn();
     ImGui::InputInt("##m4", &preferences.Config.Skin.M416);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###1", &preferences.AKM);
     ImGui::TableNextColumn();
     ImGui::Text("AKM");
     ImGui::TableNextColumn();
     ImGui::InputInt("##ak", &preferences.Config.Skin.AKM);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###2", &preferences.SCARL);
     ImGui::TableNextColumn();
     ImGui::Text("SCAR-L");
     ImGui::TableNextColumn();
     ImGui::InputInt("##scar", &preferences.Config.Skin.Scar);
     ImGui::TableNextColumn();
     
    
     ImGui::Checkbox("###3", &preferences.M762);
     ImGui::TableNextColumn();
     ImGui::Text("M762");
     ImGui::TableNextColumn();
     ImGui::InputInt("##M762", &preferences.Config.Skin.M762);
     ImGui::TableNextColumn();
     
     ImGui::Checkbox("###4", &preferences.GROZA);
     ImGui::TableNextColumn();
     ImGui::Text("GROZA");
     ImGui::TableNextColumn();
     ImGui::InputInt("##GR", &preferences.Config.Skin.Groza);
     ImGui::TableNextColumn();
     
    
     ImGui::Checkbox("###5", &preferences.AUG);
     ImGui::TableNextColumn();
     ImGui::Text("AUG");
     ImGui::TableNextColumn();
     ImGui::InputInt("##AUG", &preferences.Config.Skin.AUG);
     ImGui::TableNextColumn();
     
     ImGui::Checkbox("###6", &preferences.M16);
     ImGui::TableNextColumn();
     ImGui::Text("M16A4");
     ImGui::TableNextColumn();
     ImGui::InputInt("##M16A4", &preferences.Config.Skin.M16A4);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###7", &preferences.ACE32);
     ImGui::TableNextColumn();
     ImGui::Text("ACE32");
     ImGui::TableNextColumn();
     ImGui::InputInt("##ACE", &preferences.Config.Skin.ACE32);
     ImGui::TableNextColumn();
     
     ImGui::Checkbox("###8", &preferences.KAR98);
     ImGui::TableNextColumn();
     ImGui::Text("Kar98-k");
     ImGui::TableNextColumn();
     ImGui::InputInt("##rak", &preferences.Config.Skin.K98);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###9", &preferences.M24);
     ImGui::TableNextColumn();
     ImGui::Text("M24");
     ImGui::TableNextColumn();
     ImGui::InputInt("##M24", &preferences.Config.Skin.M24);
     ImGui::TableNextColumn();
     
    
     ImGui::Checkbox("###10", &preferences.AWM);
     ImGui::TableNextColumn();
     ImGui::Text("AWM");
     ImGui::TableNextColumn();
     ImGui::InputInt("##AWM", &preferences.Config.Skin.AWM);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###11", &preferences.DP28);
     ImGui::TableNextColumn();
     ImGui::Text("DP-28");
     ImGui::TableNextColumn();
     ImGui::InputInt("##ra6k", &preferences.Config.Skin.DP28);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###12", &preferences.M249);
     ImGui::TableNextColumn();
     ImGui::Text("M249");
     ImGui::TableNextColumn();
     ImGui::InputInt("##M24g", &preferences.Config.Skin.M249);
     ImGui::TableNextColumn();
     
    
     ImGui::Checkbox("###13", &preferences.UZI);
     ImGui::TableNextColumn();
     ImGui::Text("UZI");
     ImGui::TableNextColumn();
     ImGui::InputInt("##UZI", &preferences.Config.Skin.UZI);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###14", &preferences.UMP);
     ImGui::TableNextColumn();
     ImGui::Text("UMP");
     ImGui::TableNextColumn();
     ImGui::InputInt("##UMP", &preferences.Config.Skin.UMP);
     
     ImGui::TableNextColumn();
     
    
     ImGui::Checkbox("###15", &preferences.TOMMY);
     ImGui::TableNextColumn();
     ImGui::Text("Thompson");
     ImGui::TableNextColumn();
     ImGui::InputInt("##Thompson", &preferences.Config.Skin.Thompson);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###16", &preferences.VECTOR);
     ImGui::TableNextColumn();
     ImGui::Text("Vector");
     ImGui::TableNextColumn();
     ImGui::InputInt("##Vector", &preferences.Config.Skin.Vector);
     ImGui::TableNextColumn();
     
     
     ImGui::Checkbox("###17", &preferences.BIZON);
     ImGui::TableNextColumn();
     ImGui::Text("Bizon");
     ImGui::TableNextColumn();
     ImGui::InputInt("##Bizon", &preferences.Config.Skin.Bizon);
     ImGui::TableNextColumn();
     
     ImGui::Checkbox("###18", &preferences.PAN);
     ImGui::TableNextColumn();
     ImGui::Text("Pan");
     ImGui::TableNextColumn();
     ImGui::InputInt("##Pan", &preferences.Config.Skin.Pan);
     ImGui::EndTable();
     }
    }
			
				}
			}
        }
				}}}
				
/////////////////////////////////////////////////////
				}
						
				 if (Settings::Tab == 5) {
                ImGui::BeginChild("MAIoliiit6iiiiiiiiiiN#7", ImVec2(0, 0), true, 0);
				{
                    ImGui::BeginChild("MAIoliiit6iiiiiiiiiiN#77", ImVec2(371, 125), true, 0);
					{
						ImGui::SetCursorPos(ImVec2(8, 8));
						ImGui::Checkbox("Text border  |  Update tick : ", &textborder);
						ImGui::SameLine();
						ImGui::PushItemWidth(151);
						ImGui::SliderInt("####2", &Test55, 10, 100, "%.0fms");

						ImGui::Separator();
						ImGui::SetCursorPos(ImVec2(8, 40));
						ImGui::Checkbox("Enable name cache", &fake);
						ImGui::SameLine();
						if (ImGui::Button("Flush name cache", { 190.f,21.f }))
						{
							
							
						}

						ImGui::Separator();
						ImGui::SetCursorPos(ImVec2(8, 72));
				if (ImGui::Button("Load ESP", { 180, 25 })) {
				
			        	 Config.PlayerESP.Line = true;
						 Config.PlayerESP.Skeleton = true;
						 Config.PlayerESP.Health = true;
						 Config.PlayerESP.Name = true;
						 Config.PlayerESP.Distance = true;
						 Config.ESPMenu.Alert = true;
				
				
                              }
                              ImGui::SameLine();
                              if (ImGui::Button("Load Menu", { 180, 25 })) {
                              
                              Config.SilentAim.Enable = true;
                              Config.VisCheck = true;
                              Autofire = true;
                              Config.SilentAim.IgnoreKnocked = true;
                              Config.AimPosClassic = true;
                              AGHAXX = true;
                              Config.HighRisk.Ipad = true;
                              Config.Small = true;
                              Config.HighRisk.Recoil = true;
                              Config.HighRisk.Shake = true;
                              Config.HighRisk.Switch = true;
                              Config.FLASH = true;
                              Config.agha2 = true;                              
                              
						}

						ImGui::Separator();
						//ImGui::Text("Expire after 999514 hours and 30 minutes");
                  //    ImGui::Text(("Expire after %s"), formatExpiryTime(std::stoi(expiry.substr(2).c_str())).c_str());
					}
					ImGui::EndChild();
					ImGui::SameLine();
					
                    ImGui::BeginChild("MAIoliiit6iiiiiiiiiiN#165", ImVec2(371, 125), true, 0);
					{
						ImGui::SetCursorPos(ImVec2(8, 8));
						if (ImGui::Button("Unload hack", ImVec2(355, 109)))
						{
					     
					     				Config.PlayerESP.Line = false;
						 Config.PlayerESP.Skeleton = false;
						 Config.PlayerESP.Health = false;
						 Config.PlayerESP.Name = false;
						 Config.PlayerESP.Distance = false;
						 Config.ESPMenu.Alert = false;
						 
								
								Config.SilentAim.Enable = false;
                              Config.VisCheck = false;
                              Autofire = false;
                              Config.SilentAim.IgnoreKnocked = false;
                              Config.AimPosClassic = false;
                              AGHAXX = false;
                              Config.HighRisk.Ipad = false;
                              Config.Small = false;
                              Config.HighRisk.Recoil = false;
                              Config.HighRisk.Shake = false;
                              Config.HighRisk.Switch = false;
                              Config.FLASH = false;
                              Config.agha2 = false;
					     
					     
						}

					}
					ImGui::EndChild();
					
				   ImGui::Text("                                                                                  Special Features");
				 
                    ImGui::BeginChild("MAIoliiit6iiiiiiiiiiN#1", ImVec2(750, 370), true, 0);
					{
						
                        ImGui::Checkbox("ShowDamage", &Config.ShowDamaze);
                        ImGui::SameLine();       						
						ImGui::Checkbox("HitEffect", &Config.HitEffectv3);
				 	    ImGui::SameLine();   
						ImGui::Checkbox(" Silent Weapon", &Config.SilentGodview);
						ImGui::SameLine();   
						ImGui::Checkbox(" Headshot mode:", &headv69);
						ImGui::Spacing();
						ImGui::SliderFloat("##69", &Config.PIROrainbowSpeedPIRO, 0.5f, 100.0f, "%.1fx");

					}
					ImGui::EndChild();

				}
				ImGui::EndChild();  
                }
	ImGui::End();
	if (preferences.isStateChanged) {
        preferences.save();
    }
	ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    return orig_eglSwapBuffers(dpy, surface);    
}
int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}

#define SLEEP_TIME 1000LL / 60LL

[[noreturn]] void *maps_thread(void *) {
    while (true) {
    
    
     
     
                                   if (Config.Ipad) {
                                    g_LocalPlayer->ThirdPersonCameraComponent->SetFieldOfView(Config.IpadS);
                                    //ImGui::SliderFloat("set view",&view,50.0f, 300.0f);
                                }
                                
                                if (Config.HighRisk.Ipad){
                                g_LocalPlayer->ThirdPersonCameraComponent->SetFieldOfView(Config.IpadS);
                                //ImGui::SliderFloat("set view",&view,50.0f, 300.0f);
                                }
                                
                                
                         
                                
                                
if (Config.FLASH) {
   
    auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
       auto Object = objs.GetByIndex(i);
    if (isObjectInvalid(Object))
       continue;

                    if (Object->IsA(ASTExtraCharacter::StaticClass())) {
                       auto playerChar = (ASTExtraCharacter *) Object;           
                       playerChar->SpeedScale = (float) speedknock12;
                    }
                }}
                               
                                
                                
           if (Config.Ipad) {
                                    g_LocalPlayer->ThirdPersonCameraComponent->SetFieldOfView(Config.IpadS);
                                    //ImGui::SliderFloat("set view",&view,50.0f, 300.0f);
                                }
                                
                                
                               
                
                if(AutoAGHA){
if(   g_LocalPlayer->ParachuteComponent) {
g_LocalPlayer-> ParachuteComponent->CurrentFallSpeed = (float) 8300;
g_LocalPlayer->  ParachuteComponent->FreeFall_AcceFall = (float) 25000;
g_LocalPlayer->  ParachuteComponent->FreeFall_MaxFreeFallSpeed = (float) 25000;
g_LocalPlayer-> ParachuteComponent->FreeFall_AcceForward = (float) 25000;
g_LocalPlayer-> ParachuteComponent->FreeFall_MaxForwardExtraFallSpeed = (float) 25000;
g_LocalPlayer-> ParachuteComponent->Opened_AcceFall = (float) 5000;
g_LocalPlayer->  ParachuteComponent->Opened_MaxFreeFallSpeed = (float) 5000;
g_LocalPlayer->  ParachuteComponent->Opened_AcceForward = (float) 5000;
g_LocalPlayer-> ParachuteComponent->Opened_MaxForwardSpeed = (float) 5000;
g_LocalPlayer->  ParachuteComponent->Opened_MaxForwardExtraFallSpeed = (float) 5000;
g_LocalPlayer->  ParachuteComponent->FreeFall_AcceForward = (float) 5000;
g_LocalPlayer-> ParachuteComponent->FreeFall_MaxForwardExtraFallSpeed = (float) 5000;
g_LocalPlayer->  ParachuteComponent->Opened_AcceFall = (float) 5000;
g_LocalPlayer-> ParachuteComponent->Opened_MaxFreeFallSpeed = (float) 5000;
g_LocalPlayer-> ParachuteComponent->Opened_AcceForward = (float) 5000;
g_LocalPlayer-> ParachuteComponent->AllowMaxDiatanceSqAtServer = (float) 40000;
g_LocalPlayer-> ParachuteComponent->MaxZAllowDistance = (float) 40000;

}}
    
auto object = UObject::GetGlobalObjects();
    for (int i = 0; i < object.Num(); i++){
    auto Object = object.GetByIndex(i);
    if (isObjectInvalid(Object))
        continue;
		
	if (Config.HighRisk.FlashV1) {
    if (Object->IsA(AWorldSettings::StaticClass())) {
    auto playerChar = (AWorldSettings *) Object;      
    playerChar->MinUndilatedFrameTime = 0.083f;
    }} else if (Object->IsA(AWorldSettings::StaticClass())) {
    auto playerChar = (AWorldSettings *) Object;      
    playerChar->MinUndilatedFrameTime = 0;
    }}    
    
    
   
               
                
        
                                        
          
              
               


 if (Config.HitEffectv3) {

 kFox::MemorySearch( "10.0", Type::TYPE_FLOAT);
 kFox::MemoryOffset( "46.0", 4, Type::TYPE_FLOAT);
 kFox::MemoryWrite( "99", 0, Type::TYPE_FLOAT);
 LOGI("XHit Effect Active!");
 kFox::ClearResult();
 
 }
 
 
 
 
   if (Config.HighRisk.HitEffect) {
   kFox::SetSearchRange(RegionType::ALL);
kFox::MemorySearch( "10.0", Type::TYPE_FLOAT);
kFox::MemoryOffset( "46.0", 4, Type::TYPE_FLOAT);
kFox::MemoryWrite( "19999", 0, Type::TYPE_FLOAT);
//CREDIT :- IAMNOBI
   LOGI("XHit Effect Active!");
   kFox::ClearResult();
   
  }
                           
                           
                          

                           
if (headv69) {
      kFox::SetSearchRange(RegionType::ALL);
            kFox::MemorySearch( "25", Type::TYPE_FLOAT);
            kFox::MemoryOffset( "30.5", 4, Type::TYPE_FLOAT);
            kFox::MemoryWrite( "900", 0, Type::TYPE_FLOAT);
            kFox::MemoryWrite( "900", 4, Type::TYPE_FLOAT);
            kFox::ClearResult();
            kFox::SetSearchRange(RegionType::ALL);
            kFox::MemorySearch( "69.5", Type::TYPE_FLOAT);
            kFox::MemoryOffset( "33.0", -4, Type::TYPE_FLOAT);
            kFox::MemoryOffset( "35.0", -8, Type::TYPE_FLOAT);
            kFox::MemoryWrite( "89.5", 0, Type::TYPE_FLOAT);
            kFox::ClearResult();
   
  }

     
      

                               
                                                        
if (Config.shake) {
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
                                        static float cnt = 0.0f;
                                        const float RainbowSpeed = 7.0f;
                                        const int RainbowColorCount = 7;
                                        const float FullCircle = 360.0f;
                                        const float IncrementValue = 0.02f;

                                        FLinearColor rainbowColors[RainbowColorCount] = {
                                                FLinearColor(1.0f, 0.0f, 0.0f, 1.0f),
                                                FLinearColor(1.0f, 0.5f, 0.0f, 1.0f),
                                                FLinearColor(1.0f, 1.0f, 0.0f, 1.0f),
                                                FLinearColor(0.0f, 1.0f, 0.0f, 1.0f),
                                                FLinearColor(0.0f, 0.0f, 1.0f, 1.0f),
                                               FLinearColor(0.5f, 0.0f, 1.0f, 1.0f),
                                                FLinearColor(1.0f, 0.0f, 1.0f, 1.0f)
                                        };

                                        int rainbowColorIndex = static_cast<int>(fmod(cnt * RainbowSpeed, RainbowColorCount));
                                        FLinearColor color1 = rainbowColors[rainbowColorIndex];
                                        FLinearColor color2 = rainbowColors[(rainbowColorIndex + 1) % RainbowColorCount];

                                        float rainbowPhase = fmod(cnt * RainbowSpeed, 1.0f);
                                        FLinearColor interpolatedColor = FLinearColor(
                                                color1.R + (color2.R - color1.R) * rainbowPhase,
                                                color1.G + (color2.G - color1.G) * rainbowPhase,
                                                color1.B + (color2.B - color1.B) * rainbowPhase,
                                                1.0f
                                        );
                                        localController->CrossHairColor = interpolatedColor;

                                        if (cnt >= FullCircle) {
                                            cnt = 0.0f;
                                        } else {
                                            cnt += IncrementValue;
                                        }
                                   
                                    
                                      }                  
                                      
                                      
                                      if (AGHANew) {                                          
                                                   
     USceneComponent *MeshContainer = g_LocalPlayer->MeshContainer;
    if(MeshContainer)
    {
    if (g_LocalPlayer->IsClientPeeking)
    {
        if (!g_LocalPlayer->IsPeekLeft)
        {
            MeshContainer->RelativeLocation.Y = 160.f;
        } 
        else
        {
            MeshContainer->RelativeLocation.Y = -160.f;
        }
    }
    else
    {
        MeshContainer->RelativeLocation.Y = 0.f;
    }

}      
}                   
                                      
                                      
                                                  if (Config.OneShotKill) {
    auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;

    if (WeaponManagerComponent) {
        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();

        if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;

            if (CurrentWeaponReplicated) {
                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;

                if (ShootWeaponComponent) {
                    UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;

                    if (ShootWeaponEntityComponent) {
                        if (Config.OneShotKill) {
                            ShootWeaponEntityComponent->BulletNumSingleShot = 50;
                        }
                    }
                }
            }
        }
    }
}
                                      
                                      
                                    
                        if (Config.SilentGodview){
                 auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                    auto Slot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                    if ((int) Slot.GetValue() >= 1 && (int) Slot.GetValue() <= 3) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                                        CurrentWeaponReplicated->RootComponent->K2_SetRelativeLocation({0.0f, 0.0f, 90.0f}, false, true, 0);}}}}
            }
            
            
						
            
            
                        if (ZoomUp)
            {
                UCameraComponent *ScopeCameraComp = g_LocalPlayer->ScopeCameraComp;
                if (ScopeCameraComp)
                {
                    ScopeCameraComp->SetFieldOfView(SetZoomUp);
                }
            }
            
     
     



if (FLASSHHHHHHH) {
                                         g_LocalPlayer->StandHalfHeight == 77.0f;
                                         g_LocalPlayer->StandHalfHeight == 50.0f;
                                               }
                                               
                                               
                                               if (Config.speedshoot)
            {
                auto objs = UObject::GetGlobalObjects();
                for (int i = 0; i < objs.Num(); i++)
                {
                    auto Object = objs.GetByIndex(i);
                    if (isObjectInvalid(Object))
                        continue;
                    if (Object->IsA(UShootWeaponEntity::StaticClass()))
                    {
                        auto playerChar = (UShootWeaponEntity *)Object;
                        playerChar->ShootInterval = 0;
                        playerChar->BurstShootInterval = 0;
                    }
                }
            }
            
            if (Config.agha2) {
auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;

if (WeaponManagerComponent) {
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();

if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;

if (CurrentWeaponReplicated) {
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;

if (ShootWeaponComponent) {
UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;

if (ShootWeaponEntityComponent) {
if (Config.agha2) {
ShootWeaponEntityComponent->ShootInterval = Config.aghashot;
}
}
}
}
}
}
}
                                               
                                               
                                                   
 


if (fastLX) {
auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
        auto Object = objs.GetByIndex(i);
        if (isObjectInvalid(Object))
            continue;
        if (Object->IsA(UShootWeaponEntity::StaticClass())) {
            auto playerChar = (UShootWeaponEntity *) Object;
   playerChar->ShootInterval = (float) fastLXzis;
}
  }
}

                                
                                
                            


if (Config.speedshoot)
            {
                auto objs = UObject::GetGlobalObjects();
                for (int i = 0; i < objs.Num(); i++)
                {
                    auto Object = objs.GetByIndex(i);
                    if (isObjectInvalid(Object))
                        continue;
                    if (Object->IsA(UShootWeaponEntity::StaticClass()))
                    {
                        auto playerChar = (UShootWeaponEntity *)Object;
                        playerChar->ShootInterval = 0;
                        playerChar->BurstShootInterval = 0;
                    }
                }
            }
            
            
            

                            
                            
if (magiccc){
                              uintptr_t Mesh = *(uintptr_t *)((uintptr_t) g_LocalPlayer + 0x37c);
if (Mesh != 0)
{
    uintptr_t Skeletal = *(uintptr_t *)(Mesh + 0x6d8);
    if (Skeletal != 0)
    {
        uintptr_t Asset = *(uintptr_t *)(Skeletal + 0xf0);
        if (Asset != 0)
        {
            uintptr_t ArraySkeletal = *(uintptr_t *)(Asset + 0x28);
            if (ArraySkeletal != 0)
            {
                uintptr_t SkeletalBodySetup = *(uintptr_t *)(ArraySkeletal + sizeof(uintptr_t) * 14);

                if (SkeletalBodySetup != 0)
                {
                    uintptr_t BoxElems = *(uintptr_t *)(SkeletalBodySetup + 0x28);
                    if (BoxElems != 0)
                    {
                        *(float *)(BoxElems + 0x78) = 200; //X
                        *(float *)(BoxElems + 0x7c) = 200; //Y
                        *(float *)(BoxElems + 0x80) = 200; //Z


                    }
                }
            }
        }
    }
}}

if (fastLX) {
auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
        auto Object = objs.GetByIndex(i);
        if (isObjectInvalid(Object))
            continue;
        if (Object->IsA(UShootWeaponEntity::StaticClass())) {
            auto playerChar = (UShootWeaponEntity *) Object;
   playerChar->ShootInterval = (float) fastLXzis;
}
  }
}



if (Config.AutoParachute) {

                                    if (g_LocalPlayer->ParachuteState == static_cast<EParachuteState>(2)) // will work after parachute open
                                    {
                                        GetWorld()->PersistentLevel->WorldSettings->MinUndilatedFrameTime = 0.100f;
                                    }
                                    else
                                    {
                                        GetWorld()->PersistentLevel->WorldSettings->MinUndilatedFrameTime = 0.00050000002f;
                                    }
                                
                                }
                                
                                
                                
                                
                                
                           
                                
                                
                                   
                                      
                                         
                                                                                  if (CrossColor)
                                    {
                                        static float cnt = 0.0f;
                                        const float RainbowSpeed = 8.0f;
                                        const int RainbowColorCount = 7;
                                        const float FullCircle = 360.0f;
                                        const float IncrementValue = 0.02f;

                                        FLinearColor rainbowColors[RainbowColorCount] = {
                                            FLinearColor(1.0f, 0.0f, 0.0f, 1.0f),
                                            FLinearColor(1.0f, 0.5f, 0.0f, 1.0f),
                                            FLinearColor(1.0f, 1.0f, 0.0f, 1.0f),
                                            FLinearColor(0.0f, 1.0f, 0.0f, 1.0f),
                                            FLinearColor(0.0f, 0.0f, 1.0f, 1.0f),
                                            FLinearColor(0.5f, 0.0f, 1.0f, 1.0f),
                                            FLinearColor(1.0f, 0.0f, 1.0f, 1.0f)};

                                        int rainbowColorIndex = static_cast<int>(fmod(
                                            cnt * RainbowSpeed, RainbowColorCount));
                                        FLinearColor color1 = rainbowColors[rainbowColorIndex];
                                        FLinearColor color2 = rainbowColors[(rainbowColorIndex + 1) % RainbowColorCount];
                                        float rainbowPhase = fmod(cnt * RainbowSpeed, 1.0f);
                                        FLinearColor interpolatedColor = FLinearColor(
                                            color1.R + (color2.R - color1.R) * rainbowPhase,
                                            color1.G + (color2.G - color1.G) * rainbowPhase,
                                            color1.B + (color2.B - color1.B) * rainbowPhase,
                                            1.0f);
                                        g_LocalController->CrossHairColor = interpolatedColor;

                                        if (cnt >= FullCircle)
                                        {
                                            cnt = 0.0f;
                                        }
                                        else
                                        {
                                            cnt += IncrementValue;
                                        }
                                    }



if (rec0 || Config.Cross) {
                auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                    auto Slot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                    if ((int) Slot.GetValue() >= 1 && (int) Slot.GetValue() <= 3) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                
                                 if (Config.Cross) {
                                        static float cnt = 0.0f;
                                        const float RainbowSpeed = 13.0f;
                                        const int RainbowColorCount = 7;
                                        const float FullCircle = 360.0f;
                                        const float IncrementValue = 0.02f;

                                        FLinearColor rainbowColors[RainbowColorCount] = {
                                                FLinearColor(1.0f, 0.0f, 0.0f, 1.0f),
                                                FLinearColor(1.0f, 0.5f, 0.0f, 1.0f),
                                                FLinearColor(1.0f, 1.0f, 0.0f, 1.0f),
                                                FLinearColor(0.0f, 1.0f, 0.0f, 1.0f),
                                                FLinearColor(0.0f, 0.0f, 1.0f, 1.0f),
                                                FLinearColor(0.5f, 0.0f, 1.0f, 1.0f),
                                                FLinearColor(1.0f, 0.0f, 1.0f, 1.0f)
                                        };

                                        int rainbowColorIndex = static_cast<int>(fmod(cnt * RainbowSpeed, RainbowColorCount));
                                        FLinearColor color1 = rainbowColors[rainbowColorIndex];
                                        FLinearColor color2 = rainbowColors[(rainbowColorIndex + 1) % RainbowColorCount];

                                        float rainbowPhase = fmod(cnt * RainbowSpeed, 1.0f);
                                        FLinearColor interpolatedColor = FLinearColor(
                                                color1.R + (color2.R - color1.R) * rainbowPhase,
                                                color1.G + (color2.G - color1.G) * rainbowPhase,
                                                color1.B + (color2.B - color1.B) * rainbowPhase,
                                                1.0f
                                        );
                                        g_LocalController->CrossHairColor = interpolatedColor;

                                        if (cnt >= FullCircle) {
                                            cnt = 0.0f;
                                        } else {
                                            cnt += IncrementValue;
                                        }
                                    }
                                                        
                                                        
                              

}
								                                }
                            }
                        }
                    }
                    
                    
                    
                    
                    
                    
                                                                            if (Config.shake) {
                                        static float cnt = 0.0f;
                                        const float RainbowSpeed = 7.0f;
                                        const int RainbowColorCount = 7;
                                        const float FullCircle = 360.0f;
                                        const float IncrementValue = 0.02f;

                                        FLinearColor rainbowColors[RainbowColorCount] = {
                                                FLinearColor(1.0f, 0.0f, 0.0f, 1.0f),
                                                FLinearColor(1.0f, 0.5f, 0.0f, 1.0f),
                                                FLinearColor(1.0f, 1.0f, 0.0f, 1.0f),
                                                FLinearColor(0.0f, 1.0f, 0.0f, 1.0f),
                                                FLinearColor(0.0f, 0.0f, 1.0f, 1.0f),
                                               FLinearColor(0.5f, 0.0f, 1.0f, 1.0f),
                                                FLinearColor(1.0f, 0.0f, 1.0f, 1.0f)
                                        };

                                        int rainbowColorIndex = static_cast<int>(fmod(cnt * RainbowSpeed, RainbowColorCount));
                                        FLinearColor color1 = rainbowColors[rainbowColorIndex];
                                        FLinearColor color2 = rainbowColors[(rainbowColorIndex + 1) % RainbowColorCount];

                                        float rainbowPhase = fmod(cnt * RainbowSpeed, 1.0f);
                                        FLinearColor interpolatedColor = FLinearColor(
                                                color1.R + (color2.R - color1.R) * rainbowPhase,
                                                color1.G + (color2.G - color1.G) * rainbowPhase,
                                                color1.B + (color2.B - color1.B) * rainbowPhase,
                                                1.0f
                                        );
                                        g_LocalController->CrossHairColor = interpolatedColor;

                                        if (cnt >= FullCircle) {
                                            cnt = 0.0f;
                                        } else {
                                            cnt += IncrementValue;
                                        }
                                    }
                                                                                                                 
   
	 if (Config.Fps) {
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto playerChar = (USTExtraGameInstance *) Object;      
          playerChar->UserDetailSetting.PUBGDeviceFPSDef = 120;   
                playerChar->UserDetailSetting.PUBGDeviceFPSLow = 120;
                playerChar->UserDetailSetting.PUBGDeviceFPSMid = 120;
                playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 120;
                playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 120;
                playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 120;
}
}
}

        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        std::vector<sRegion> tmp;
        char line[512];
        FILE *f = fopen("/proc/self/maps", "r");
        if (f) {
            while (fgets(line, sizeof line, f)) {
                uintptr_t start, end;
                char tmpProt[16];
                if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
                    if (tmpProt[0] != 'r') {
                        tmp.push_back({start, end});
                    }
                }
            }
            fclose(f);
        }
        trapRegions = tmp;

        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
}

void * (*aProcessEvent)(UObject *pObj, UFunction *pFunc, void *pArgs);
void * hrProcessEvent(UObject *pObj, UFunction *pFunc, void *pArgs) {
const char *EngineHUD = ("Function Engine.HUD.ReceiveDrawHUD");
if (pFunc) {
if (pFunc->GetFullName() == EngineHUD) {
AHUD *pHUD = (AHUD *) pObj;
if (pHUD) {
auto Params = (AHUD_ReceiveDrawHUD_Params *) pArgs;
if (Params) {
RenderESPAutoAGHA(pHUD, Params->SizeX, Params->SizeY);
}
}
}
}
return aProcessEvent(pObj, pFunc, pArgs);
}





void * (*oProcessEvent)(UObject *pObj, UFunction *pFunc, void *pArgs);
void * hkProcessEvent(UObject *pObj, UFunction *pFunc, void *pArgs) {
const char *EngineHUD = ("Function Engine.HUD.ReceiveDrawHUD");
if (pFunc) {
if (pFunc->GetFullName() == EngineHUD) {
AHUD *pHUD = (AHUD *) pObj;
if (pHUD) {
auto Params = (AHUD_ReceiveDrawHUD_Params *) pArgs;
if (Params) {
RenderESPPRIVATE(pHUD, Params->SizeX, Params->SizeY);
}
}
}
}
return oProcessEvent(pObj, pFunc, pArgs);
}

#include <cstdint>

void *main_thread(void *) {

           UE4 = Tools::GetBaseAddress("libUE4.so");
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }


    while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
    }

    while (!g_App->onInputEvent)
        sleep(1);

    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;

    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    LuffyAntiCrack1(); LuffyAntiCrack2(); LuffyAntiCrack3();
    	UObject::GUObjectArray = (FUObjectArray *)(UE4 + GUObject_Offset);
	Tools::Hook((void *) DobbySymbolResolver(OBFUSCATE("/system/lib/libEGL.so"), OBFUSCATE("eglSwapBuffers")), (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);
	preferences.load();
/*Tools::Hook((void *)(UE4 + ProccesEvent_Offset), (void *)hrProcessEvent, (void **)&aProcessEvent);
Tools::Hook((void *)(UE4 + ProccesEvent_Offset), (void *)hkProcessEvent, (void **)&oProcessEvent);
Tools::Hook((void *)(UE4 + ProccesEvent_Offset), (void *)kill2, (void **)&kill1);*/
Tools::Hook((void *)(UE4 + 0x30e6fa0), (void *) shoot_event, (void **) &orig_shoot_event);//Offset Bullet Track 32Bit
    void *egl = dlopen_ex("libEGL.so", 4);
    while (!egl) {
        egl = dlopen_ex("libEGL.so", 4);
        sleep(1);
    }


    void *addr = dlsym_ex(egl, "eglSwapBuffers");
    HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
    dlclose_ex(egl);

    pthread_t t;
    pthread_create(&t, 0, maps_thread, 0);

    items_data = json::parse(JSON_ITEMS);

    return 0;
}


__attribute__((constructor)) void _init() {
    pthread_t t;
    pthread_create(&t, 0, main_thread, 0);
}

