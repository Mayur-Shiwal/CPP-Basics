#include <iostream>

using namespace std;


int sumOfarray(int num[], int n){

            int sum=0;
            for(int i=0;i<n;i++){
                    sum=sum+num[i];
            }
            return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The sum of the given array is "<<sumOfarray(num,size)<<endl;
    return 0;
}
