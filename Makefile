# Eğer paket ismin farklıysa "DarkIOS" yazan yerleri kendi ismine göre değiştir.
# Örnek: TWEAK_NAME = rrr ise, DarkIOS_FILES yerine rrr_FILES yazmalısın.

ARCHS = arm64 arm64e
TARGET = iphone:clang:latest:14.0
INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = DarkIOS

# BURASI ÇOK ÖNEMLİ: Tüm .mm ve .xm dosyaların burada listelenmeli
DarkIOS_FILES = Tweak.mm KeySystem.mm Menu.mm Engine.mm

# Kullanılan framework ve kütüphaneler
DarkIOS_FRAMEWORKS = UIKit Foundation WebKit
DarkIOS_PRIVATE_FRAMEWORKS = 

# JRMemory gibi harici kütüphaneler varsa buraya eklenir
DarkIOS_LIBRARIES = substrate
DarkIOS_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
