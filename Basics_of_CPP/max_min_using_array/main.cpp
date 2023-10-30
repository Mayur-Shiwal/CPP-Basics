#include <iostream>

using namespace std;

int getMin(int num[], int n){

        int min=INT_MAX;
        for(int i=0;i<n;i++){
            //mini=min(mini,num[i}) also possible
            if(num[i]<min){
                min=num[i];
            }
        }
        //returning the value of min
        return min;
}

int getMax(int num[], int n){

        int max=INT_MIN;

        for(int i=0;i<n;i++){
            //maxi=max(maxi,num[i}) also possible
            if(num[i]>max){
                max=num[i];
            }
        }
        //returning the value of max
        return max;
}


int main()
{
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int num[100];

    //taking input in array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The maximum value of given array is "<<getMax(num,size)<<endl;
    cout<<"The minimum value of given array is "<<getMin(num,size)<<endl;
    return 0;
}
