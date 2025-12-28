#include <bits/stdc++.h>
using namespace std;
bool hasAtLeastK(long long x, long long n, long long k) {
    long long count = x - (x / n);
    
    return count >= k;
}
int main(){
int t;
cin>>t;
while (t--)
{
    long long n,k;
    cin>>n>>k;
     long long left=1,right=k+1e18;
     while (left<right)
     {
        long long x=(right+left)/2;
        if (hasAtLeastK(x,n,k))
        {
            right=x;
        }
        else{
            left=x+1;
        }
        

     }
     cout<<left<<endl;

}



}