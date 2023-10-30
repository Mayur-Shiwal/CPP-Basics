#include <iostream>

using namespace std;

string reverse(string str, int i, int j){

    if(i>j)
        return str;
    swap(str[i],str[j]);
    i++;
    j--;
    return reverse(str,i,j);

}
/*
void reverse(string& str,int i, int j){    also possible!

    if(i>j)
        return ;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
*/
int main()
{
    string s="mayur";
    cout<<reverse(s,0,s.length()-1)<<endl;

    return 0;
}
