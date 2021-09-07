#include <stdio.h>
#include <stdint.h>
int main()
{
    uint16_t a = 0;
    uint16_t b = 65535;
    int16_t ret = a-b;
    printf("%d\n", ret);
    return 0;
}
