#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if (arr.size()==1) cout<<"1 "<<endl<<arr[0]<<endl;
    else{
        while(arr.size()!=1){
            long long x=arr.back();
            arr.pop_back();
            long long y=arr.back();
            arr.pop_back();
            arr.push_back(__gcd(x,y));

        }
        cout<<"1 "<<endl<<arr[0]<<endl;


}}