#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;cin>>n;
    vector<long long>x(n);
    vector<long long>y(n);
    for(int i = 0 ; i < n ; i++){
        cin>>x[i]>>y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    cout<<pow(x[n-1],2)+pow(y[n-1],2)<<endl;
    
}