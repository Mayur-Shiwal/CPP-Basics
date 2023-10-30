#include <iostream>

using namespace std;

int main()
{
    int arr[7]={1,2,2,3,4,4,5};
    int brr[4]={2,2,3,4};

    int i=0, j=0;

    while(i<7 && j<4){
        if(arr[i]==brr[j]){
            cout<<arr[i];
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return 0;
}
