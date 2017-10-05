#include <stdio.h>
#include "iot_platform/AWSIoTPlatform.h"

int main(int argc, char *argv[])
{
    AWSIoTPlatform* aws_iot_platform = AWSIoTPlatform_new();
    aws_iot_platform->init(aws_iot_platform);
    IoTPlatform* iot_platform = SUPER_PTR(aws_iot_platform, IoTPlatform);
    printf("%s\n", iot_platform->get_name(iot_platform));
    lw_oopc_delete(aws_iot_platform);
    return 0;
}
