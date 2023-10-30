#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int temp=i;
        while(j<=i){
            cout<<temp;
            temp=temp+1;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
