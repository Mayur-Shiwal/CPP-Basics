#include <iostream>

using namespace std;

int factorial(int n){
    //base case:
    if(n==1){
        return 1;
    }
    int ChotiProblem = factorial(n-1);
    int badiProblem = n * ChotiProblem;

    return badiProblem;

}


int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}
