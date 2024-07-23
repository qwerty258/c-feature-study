#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct dynamic_array
{
    size_t size;
    uint8_t contents[0];
};

int main(int argc, char* argv[])
{
    size_t array_size = 5;
    struct dynamic_array *p_array = (struct dynamic_array *) malloc (sizeof (struct dynamic_array) + array_size);
    p_array->size = array_size;

    for (size_t i = 0; i < array_size; i++)
    {
        p_array->contents[i] = i;
    }

    for (size_t i = 0; i < array_size; i++)
    {
        printf("%u\n", p_array->contents[i]);
    }

    free(p_array);
    return 0;
}
