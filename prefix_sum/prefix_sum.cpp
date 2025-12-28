#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >>n;
    long long q;
    cin >> q;
    vector <long long> arr(n);
    vector<long long > prefix(n+1);
    prefix[0]=0;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for (int i=1;i<=n;i++)
    {
        prefix[i]=arr[i-1]+prefix[i-1];
    }
    for (int i=0;i<q;i++)
    {
        long long a,b;
        cin>>a>>b;
        cout<< prefix[b]-prefix[a-1]<<endl;
    }
}