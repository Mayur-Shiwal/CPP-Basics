#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int count=1;
        while(count<=n-i+1){
            cout<<count;
            count++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        int k=i-1;
        while(k){
            cout<<"*";
            k--;
        }
        int l=n-i+1;
        while(l){
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;

    }
    return 0;
}
