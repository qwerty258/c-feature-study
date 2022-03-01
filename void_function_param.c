#include <stdio.h>
#include <stdbool.h>

bool x = true;
bool y = false;

bool func1(void)
{
    return x && y;
}

bool func2(bool a, bool b)
{
    return a && b;
}

int main(int argc, char* argv[])
{
    bool ret1 = func1();
    bool ret2 = func2(true, false);
    printf("%d\n", ret1);
    printf("%d\n", ret2);
    return 0;
}

