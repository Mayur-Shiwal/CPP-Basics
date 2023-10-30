#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"ENTER ANYTHING YOU WANT I CHECK WHETHER THE INPUT IS UPPERCASE,LOWERCASE OR NUMBERS"<<endl;
    cin>>ch;
    if(ch>'a' && ch<'z'){
        cout<<"you entered lowercase"<<endl;
    }
    else if(ch>'A' && ch<'Z'){
        cout<<"YOU ENTERED THE UPPERCASE"<<endl;
    }
    else{
        cout<<"you entered the numeric value"<<endl;
    }
    return 0;
}
