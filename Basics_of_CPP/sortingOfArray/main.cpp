#include <iostream>

using namespace std;

void sortedArray(int arr[],int n){
for(int i=0;i<=n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[7]={2,5,3,6,8,9,7};
    sortedArray(arr,7);
    return 0;
}
