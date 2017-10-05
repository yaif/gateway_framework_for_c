#ifndef __IOT_PLATFORM_H__
#define __IOT_PLATFORM_H__

#include "lw_oopc.h"

#define NAME_MAX_LENGTH 128

ABS_CLASS(IoTPlatform) {
    char _name[NAME_MAX_LENGTH];

    void (*set_name)(IoTPlatform *t, const char *name);
    const char *(*get_name)(IoTPlatform *t);
    void (*init)(IoTPlatform *t, const char *name);
};

#endif /* __IOT_PLATFORM_H__ */

