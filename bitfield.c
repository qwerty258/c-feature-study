/*
MIT License

Copyright (c) 2024 yaofei zheng

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
#include <stdint.h>
#include <string.h>

#define LITTLE_ENDIAN

#ifdef LITTLE_ENDIAN
typedef struct
{
    uint8_t first_bit : 1;
    uint8_t second_bit : 1;
    uint8_t rest_bits : 6;
} x_type;
#else
typedef struct
{
    uint8_t rest_bits : 6;
    uint8_t second_bit : 1;
    uint8_t first_bit : 1;
} x_type;
#endif

int main(int argc, char *argv[])
{
    uint8_t a = 7;
    x_type x;
    memcpy(&x, &a, sizeof(uint8_t));
    printf("first_bit: %u\n", x.first_bit);
    printf("second_bit: %u\n", x.second_bit);
    printf("rest_bits: %u\n", x.rest_bits);
    return 0;
}
