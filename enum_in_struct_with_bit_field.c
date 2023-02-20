#include <stdio.h>

typedef enum {
    A = 0x1000,
    B,
    C,
    D
} enum_type;

#pragma pack(push, 1)
typedef struct
{
    enum_type type : 16;
    char c;
} test_struct;
#pragma pack(pop)

int main(int argc, char* argv[])
{
    printf("sizeof(test_struct): %d\n", sizeof(test_struct));

    int x = 65535;
    test_struct a;
    a.type = x;
    int b;
    b = a.type;
    printf("%d\n", b);

    x = 65536;
    a.type = x;
    b = a.type;
    printf("%d\n", b);

    return 0;
}
