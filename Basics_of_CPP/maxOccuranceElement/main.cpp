#include <iostream>

using namespace std;

char getMaxOccChar(string s){

    int arr[26]={0};

    //create an array of count of string
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //covert into lowercase
        int number=0;
        number = ch-'a';
        arr[number]++;
    }
    //find maximum occ character
    int ans=0,maxi=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    //covert it into charchter
    char finalAns='a'+ans;
    return finalAns;

}



int main()
{
    string s;
    cin>>s;

    cout<<"max occuring character is: "<<getMaxOccChar(s)<<endl;


    return 0;
}
