#include <iostream>
#include<vector>

using namespace std;

vector<int>reverse(vector<int> v){

    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}


int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(23);
    v.push_back(15);
    v.push_back(19);
    v.push_back(20);

    vector<int> ans= reverse(v);
    print(ans);
    return 0;
}
