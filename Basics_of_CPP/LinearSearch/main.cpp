#include <iostream>

using namespace std;

bool search(int arr[],int size, int key){
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                return 1;
            }
        }
        return 0;
}

int main()
{
    int arr[10]={5,11,-2,5,7,-3,6,13,9,3};
    cout<<"enter the Element to find: "<<endl;
    int key;
    cin>>key;

    bool found= search(arr,10,key);

    if(found){
        cout<<key<<" is present in the array"<<endl;
    }
    else{
        cout<<key<<" is not present in the array"<<endl;
    }

    return 0;
}
