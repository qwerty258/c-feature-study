#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 5

int main(int argc, char *argv[])
{
    char dest[BUFF_SIZE] = {0};
    char *p_str = "1";
    strncpy(dest, p_str, 1);

    for (size_t i = 0; i < BUFF_SIZE; i++)
    {
        printf("0x%02X\n", dest[i]);
    }

    return 0;
}
