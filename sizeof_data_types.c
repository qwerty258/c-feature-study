/*
MIT License

Copyright (c) 2023 yaofei zheng

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <time.h>
#include <sys/types.h>

#define PRINT_SIZE(type) printf(#type ": %zu\n", sizeof(type));

typedef enum
{
    A,
    B
} enum_define;

typedef struct
{
    uint16_t index : 16;
    uint8_t subindex : 8;
    uint8_t bitsize : 8;
} mapping_config_t;

int main(int argc, char *argv[])
{
    PRINT_SIZE(struct timespec);
    PRINT_SIZE(((struct timespec *)0)->tv_sec);
    PRINT_SIZE(((struct timespec *)0)->tv_nsec);
    PRINT_SIZE(size_t);
    PRINT_SIZE(ssize_t);
    PRINT_SIZE(bool);
    PRINT_SIZE(char);
    PRINT_SIZE(unsigned char);
    PRINT_SIZE(short);
    PRINT_SIZE(unsigned short);
    PRINT_SIZE(int);
    PRINT_SIZE(unsigned int);
    PRINT_SIZE(long);
    PRINT_SIZE(unsigned long);
    PRINT_SIZE(long int);
    PRINT_SIZE(long long);
    PRINT_SIZE(float);
    PRINT_SIZE(double);
    PRINT_SIZE(long double);
    PRINT_SIZE(int8_t);
    PRINT_SIZE(int16_t);
    PRINT_SIZE(int32_t);
    PRINT_SIZE(int64_t);
    PRINT_SIZE(uint8_t);
    PRINT_SIZE(uint16_t);
    PRINT_SIZE(uint32_t);
    PRINT_SIZE(uint64_t);
    PRINT_SIZE(int_fast8_t);
    PRINT_SIZE(int_fast16_t);
    PRINT_SIZE(int_fast32_t);
    PRINT_SIZE(int_fast64_t);
    PRINT_SIZE(int_least8_t);
    PRINT_SIZE(int_least16_t);
    PRINT_SIZE(int_least32_t);
    PRINT_SIZE(int_least64_t);
    PRINT_SIZE(enum_define);
    PRINT_SIZE(mapping_config_t);
    return 0;
}
