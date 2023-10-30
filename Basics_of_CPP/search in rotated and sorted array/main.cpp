#include <iostream>

using namespace std;

int sqrt(int n){

    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        int square=mid*mid;
        if(square==mid){
            return mid;
        }
        else if(square<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }return ans;
}


int main()
{
    cout<<sqrt(16)<<endl;;
    return 0;
}
