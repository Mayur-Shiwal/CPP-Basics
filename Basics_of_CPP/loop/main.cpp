#include <iostream>

using namespace std;

int main()
{
    int n,i=2,sum=0;
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<sum;
    return 0;
}
