#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int s=5;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}
