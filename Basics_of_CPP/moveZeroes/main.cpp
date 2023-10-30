#include <iostream>

using namespace std;

void moveZeroes(int arr[],int n){

    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[7]={0,2,0,5,6,0,0};
    moveZeroes(arr,7);
    printArray(arr,7);
    return 0;
}
