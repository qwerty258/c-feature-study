#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 2

int main(int argc, char *argv[])
{
    char dest[BUFF_SIZE] = {0};
    char *p_str = "12";
    strncpy(dest, p_str, BUFF_SIZE);

    for (size_t i = 0; i < BUFF_SIZE; i++)
    {
        printf("0x%02X\n", dest[i]);
    }

    printf("%s\n", dest);

    return 0;
}
