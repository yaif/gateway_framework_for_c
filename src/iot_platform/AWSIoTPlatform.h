#ifndef __AWS_IOT_PLATFORM_H__
#define __AWS_IOT_PLATFORM_H__

#include "IoTPlatform.h"

CLASS(AWSIoTPlatform) {
    EXTENDS(IoTPlatform);

    void (*init)(AWSIoTPlatform *t);
};

#endif /* __AWS_IOT_PLATFORM_H__ */

