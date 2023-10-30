#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int m=n;
    int mask=0;

    //edge case
    if(m==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans = (~m)&mask;
    cout<<ans<<endl;
    return 0;
}
