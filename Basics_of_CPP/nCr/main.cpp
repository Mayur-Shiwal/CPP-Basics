#include <iostream>

using namespace std;

int factorial(int n){

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){

    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    return numerator/denominator;

}


int main()
{
    int n,r;
    cout<<"enter any two number: "<<endl;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<"your answer for nCr is: "<<answer<<endl;
    return 0;
}
