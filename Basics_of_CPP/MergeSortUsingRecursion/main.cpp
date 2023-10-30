#include <iostream>

using namespace std;

void merge(int *arr, int s, int e){

    int mid=s+(e-s)/2;

    //length of two array
    int len1=mid-s+1,len2=e-mid;

    //creating two arrays for copying
    int *first=new int[len1];
    int *second=new int[len2];

    //copying values in to the new created array
    //into the first array
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    //into the second array
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){

    if(s>=e){
        return;
    }

    int mid=s+(e-s)/2;

    //left side part
    mergeSort(arr,s,mid);

    //right side part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);

}

int main()
{
    int arr[7]={5,2,3,6,4,9,8};
    int n=7;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
