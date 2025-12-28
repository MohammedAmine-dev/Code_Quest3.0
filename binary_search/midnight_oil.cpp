#include <bits/stdc++.h>
using namespace std;
bool canwrite(long long v, long long n,int k)
{
    long long s=0;
    int i=0;
    while (v/(pow(k,i))!=0)
    {
        s+=v/(pow(k,i));
        i++;
        if(s>=n) return true;
    }
    return false;
}
int main()
{
long long n;
int k;
cin>>n>>k;
long long left=1,right=pow(10,9);
while (left<right)
{
    long long v=(left+right)/2;
    if (canwrite(v,n,k))
    {
        right=v;
        
    }
    else{
        left=v+1;
    }

}
cout<<left<<endl;


}