#include <bits/stdc++.h>
using namespace std;
bool canpower(long long n,long long m, long long mid)
{
    if ((long long)(ceil((-3+sqrt(9+4*mid))/2))>m/mid) return false;
    return mid*(ceil((-3+sqrt(9+4*mid))/2))<=m && mid<=n;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,m;
        cin>>n>>m;
        long long left=1,right=n;
        while(left<right)
        {
            long long mid=(left+right+1)/2;
            if(canpower(n,m,mid))
            {
                left=mid;
            }
            else{
                right=mid-1;
            }
        }
        cout<<left<<endl;
    }





}