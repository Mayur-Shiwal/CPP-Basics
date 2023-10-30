#include <bits/stdc++.h>
#include<vector>
using namespace std;
void printF(int i, vector<int> &ds, int arr[], int n){

    if(i == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0) cout<<"{}";
        cout<<endl;
        return;
    }
    //take or pick particular index into subsequences
    ds.push_back(arr[i]);
    printF(i+1, ds, arr, n);
    ds.pop_back();
    //not pick, or not take condition, this element is not added to your subsequence
    printF(i+1, ds, arr, n);
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);
    return 0;
}
