#include <iostream>

using namespace std;

void sort(int *arr,int n){

    int i =0;
    while(i<n){
        int correct = arr[i]-1;
        if(arr[i] != arr[correct])
            swap(arr[i],arr[correct]);
        else
            i++;
    }

}

int main()
{
    int arr[5] = {3,5,2,1,4};
    sort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
