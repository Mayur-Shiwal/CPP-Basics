#include <iostream>

using namespace std;

int main()
{

    int arr[4]={3,4,5,1};
    int start=0;
    int end=3;

    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;

        }
        else{
            end=mid;
            cout<<end<<endl;
            break;
        }
        mid=start+(end-start)/2;

    }


    return 0;
}
