#include <stdio.h>
#include <stdbool.h>

bool t()
{
    puts("t");
    return true;
}
bool f()
{
    puts("f");
    return false;
}
int main()
{
    if ((t() || f() || t()) && (f() || f() || t()) && (t() || f())) {
        puts("true");
    } else {
        puts("false");
    }
}