#include <iostream>

using namespace std;


void printsum(int arr[][3],int row,int col){


    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }cout<<sum <<" ";
    }
    cout<<endl;

}

int largestRowSum(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    int rowIndex=0;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"maximum element is "<<maxi<<endl;
    return rowIndex;

}

int main()
{
    int arr[3][3];
    //taking input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //output of 2d Array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    printsum(arr,3,3);
    int ans=largestRowSum(arr,3,3);
    cout<<"at Index: "<<ans<<endl;

    return 0;
}
