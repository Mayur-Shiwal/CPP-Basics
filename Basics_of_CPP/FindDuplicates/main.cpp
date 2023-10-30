#include <iostream>

using namespace std;

int duplicateValues(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }

}

int main()
{
    int arr[7]={2,4,3,1,6,3,7};
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"duplicate values from given array is: "<<duplicateValues(arr,7)<<endl;
    return 0;
}
