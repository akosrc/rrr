ARCHS = arm64 arm64e
TARGET = iphone:clang:latest:14.0
INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

# Projenin adı neyse (depo adı 'rrr' olduğu için rrr yaptım)
TWEAK_NAME = rrr

# BURASI ÇOK ÖNEMLİ: Tüm .mm ve .xm dosyaların burada listelenmeli!
# Eğer başka dosyaların varsa (örn: Tweak.xm varsa) onları da buraya ekle.
rrr_FILES = Tweak.mm KeySystem.mm Menu.mm Engine.mm

# Kullanılan frameworkler (WebKit KeySystem için, UIKit genel arayüz için)
rrr_FRAMEWORKS = UIKit Foundation WebKit

# Logos/Substrate kütüphanesi (Tweak'ler için standarttır)
rrr_LIBRARIES = substrate

# Objective-C ARC desteği
rrr_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
