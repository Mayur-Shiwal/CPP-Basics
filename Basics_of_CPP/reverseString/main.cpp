#include <iostream>

using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    cout<<"Reverse of your string is: "<<name;
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    int l=getLength(name);
    cout<<"Length of your string is: "<<l<<endl;
    reverse(name,l);
    return 0;
}
