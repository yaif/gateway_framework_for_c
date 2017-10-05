#include <stdio.h>
#include "iot_platform/IoTPlatformFactory.h"

int main(int argc, char *argv[])
{
    IoTPlatformFactory* iot_platform_factory = IoTPlatformFactory_new();
    IoTPlatform* iot_platform = iot_platform_factory->create(iot_platform_factory, "aws");
    printf("%s\n", iot_platform->get_name(iot_platform));
    lw_oopc_delete(iot_platform);
    lw_oopc_delete(iot_platform_factory);
    return 0;
}
