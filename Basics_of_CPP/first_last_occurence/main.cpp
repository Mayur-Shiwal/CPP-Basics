#include <iostream>

using namespace std;

int lastOccurence(int arr[],int n, int key){

        int start=0;
        int end=n-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                start=mid+1;
               }
            else if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;

}

int firstOccurence(int arr[],int n, int key){

        int start=0;
        int end=n-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
               }
            else if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;

}


int main()
{
    int arr[7]={2,3,4,4,4,6,7};

    cout<<"first occurence of 4 is at index: "<<firstOccurence(arr,7,4)<<endl;
    cout<<"last occurence of 4 is at index: "<<lastOccurence(arr,7,4)<<endl;
    return 0;
}
