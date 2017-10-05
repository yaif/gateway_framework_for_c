#ifndef __IOT_PLATFORM_FACTORY_H__
#define __IOT_PLATFORM_FACTORY_H__

#include "IoTPlatform.h"

CLASS(IoTPlatformFactory) {
    IoTPlatform* (*create)(IoTPlatformFactory* t, const char* type);
};

#endif /* __IOT_PLATFORM_FACTORY_H__ */

