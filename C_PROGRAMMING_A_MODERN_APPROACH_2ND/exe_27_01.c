#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
    int8_t int8t_max = INT8_MAX;
    int16_t int16t_max = INT16_MAX;
    int32_t int32t_max = INT32_MAX;
    int64_t int64t_max = INT64_MAX;
    int8_t int8t_min = INT8_MIN;
    int16_t int16t_min = INT16_MIN;
    int32_t int32t_min = INT32_MIN;
    int64_t int64t_min = INT64_MIN;
    uint8_t uint8t_max = UINT8_MAX;
    uint16_t uint16t_max = UINT16_MAX;
    uint32_t uint32t_max = UINT32_MAX;
    uint64_t uint64t_max = UINT64_MAX;
    uint8_t uint8t_min = 0;
    uint16_t uint16t_min = 0;
    uint32_t uint32t_min = 0;
    uint64_t uint64t_min = 0;
    printf("int8t_max=%d, int8t_min=%d\n", int8t_max, int8t_min);
    printf("int16t_max=%d, int16t_min=%d\n", int16t_max, int16t_min);
    printf("int32t_max=%d, int32t_min=%d\n", int32t_max, int32t_min);
    printf("int64t_max=%lld, int64t_min=%lld\n", int64t_max, int64t_min);
    printf("uint8t_max=%u, uint8t_min=%u\n", uint8t_max, uint8t_min);
    printf("uint16t_max=%u, uint16t_min=%u\n", uint16t_max, uint16t_min);
    printf("uint32t_max=%u, uint32t_min=%u\n", uint32t_max, uint32t_min);
    printf("uint64t_max=%llu, uint64t_min=%llu\n", uint64t_max, uint64t_min);
    return 0;
}
