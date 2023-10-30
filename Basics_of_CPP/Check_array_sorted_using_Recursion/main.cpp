#include <iostream>

using namespace std;

bool isSorted(int *arr/*or arr[0] both are OK */, int n){

    //base case
    if(n==0 || n==1){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,n-1);
        return remainingPart;
    }

}

int main()
{
    int arr[5]={2,4,6,8,9};
    bool ans=isSorted(arr,5);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else
        cout<<"array is not sorted"<<endl;
    return 0;
}
