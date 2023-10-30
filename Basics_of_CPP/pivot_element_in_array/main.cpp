#include <iostream>

using namespace std;

int pivotElement(int arr[],int n){

    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }mid=s+(e-s)/2;
    }return e;

}


int main()
{
    int arr[5]={7,9,1,2,3};
    int ans=pivotElement(arr,5);
    cout<<"pivot element is at index: "<<ans<<endl;


    return 0;
}
