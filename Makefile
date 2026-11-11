ARCHS = arm64 arm64e
TARGET = iphone:clang:latest:14.0
INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = rrr

rrr_FILES = Tweak.mm KeySystem.mm Menu.mm Engine.mm
rrr_FRAMEWORKS = UIKit Foundation WebKit
rrr_PRIVATE_FRAMEWORKS = 
rrr_LIBRARIES = substrate
rrr_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
