#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if (n<=2) {
            cout <<"-1"<<endl;
            continue;
        }
        vector<long long>arr(n);
            long long sum_w=0;

        for (int i=0;i<n;i++)
        {
            cin >>arr[i];
            sum_w+=arr[i];

        }
        sort(arr.begin(),arr.end());
        long long left=0,right=1e18;
        while(left<right)
        {
            long long mid= (right+left-1)/2;
            if (sum_w+mid>2*n*arr[n/2])
            {
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        cout<<left<<endl;


    }


}