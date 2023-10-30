#include <iostream>

using namespace std;

void printArray(int arr[],int n){

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

}

int findUnique(int arr[], int size){

        int ans=0;
        for(int i=0;i<size;i++){
            ans=ans^arr[i];
        }
        return ans;

}

int main()
{
    int arr[7]={2,3,4,3,2,4,5};

    printArray(arr,7);
    cout<<"your unique element in array is: "<<findUnique(arr,7)<<endl;
    return 0;
}
