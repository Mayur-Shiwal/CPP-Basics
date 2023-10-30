#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double pi=3.141592;
    cout << pi << endl;
    cout << setprecision(4) << pi << endl; //it will calculate all the number in pi including before and after integers
    cout << setprecision(10) << pi << endl;
    cout << fixed;                              // IT WILL FIX THE VALUE AND GIVES THE OUTPUT AS FIXED PRECESION
    cout << setprecision(4) << pi << endl;
    cout << setprecision(10) << pi << endl;

    return 0;
}
