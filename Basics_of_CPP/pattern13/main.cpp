#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
            //print spaces
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
            //print 1st triangle
        int j=1;
        while(j<=i){
            cout<<j;        //for * pattern just replace j as *
            j++;
        }
            //print 2nd triangle
        int k=i-1;
        while(k){
            cout<<k;        //and here k as *
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
