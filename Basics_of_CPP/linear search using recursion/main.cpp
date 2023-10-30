#include <iostream>

using namespace std;

bool linearSearch(int arr[], int n, int k){
    if(n == 0)
        return false;
    if(arr[0] == k)
        return arr[0];
    else
        return linearSearch(arr+1,n-1,k);
}
int main()
{
    int arr[5]={2,4,6,8,10};
    bool ans=linearSearch(arr,5,8);
    if(ans)
        cout<<"Element found: "<<endl;
    else
        cout<<"Element not found: "<<endl;
    return 0;
}
