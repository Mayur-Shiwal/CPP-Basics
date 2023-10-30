#include <iostream>

using namespace std;

int main()
{
    const int a = 1;
    const int b = a+1;
    a=b+1; // it will throw an compliel time error cause a is a constant variable.
    return 0;
}
