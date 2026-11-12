ARCHS = arm64
DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = ADMIN

ADMIN_FRAMEWORKS = IOKit UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController

ADMIN_CFLAGS      = -w -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -I$(CURDIR)
ADMIN_CCFLAGS     = -w -std=gnu++14 -fno-rtti -fno-exceptions -DNDEBUG -I$(CURDIR)
ADMIN_OBJCFLAGS   = -w -fobjc-arc -Wno-deprecated-declarations -I$(CURDIR)
ADMIN_OBJCXXFLAGS = -w -fobjc-arc -Wno-deprecated-declarations -std=gnu++14 -I$(CURDIR)

ADMIN_FILES = Tweak.mm KeySystem.mm

include $(THEOS_MAKE_PATH)/tweak.mk
