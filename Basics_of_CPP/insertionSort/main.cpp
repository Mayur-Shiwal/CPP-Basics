#include <iostream>

using namespace std;

void insertionSort(int arr[],int n){

        for(int i=1;i<n;i++){
            int temp=arr[i];
            int j=i-1;
            for(;j>=0;j--){
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            }arr[j+1]=temp;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}

int main()
{
    int arr[7]={3,4,1,5,7,6,2};
    insertionSort(arr,7);
    return 0;
}
