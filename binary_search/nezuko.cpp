#include <bits/stdc++.h>
using namespace std;
bool canturn(long long h ,long long d,long long turns)
{
    if (turns<d) return false;
    
    long long i=d;
    long long required=i*(i+1) /2;
    long long available=h+turns-i;
    //d-=1;
    
    return available>=required;
                                

}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long h,d;
        cin>>h>>d;
        long long left=0,right=pow(10,9);
        while (left<right)
        {
            long long turns=(right+left-1)/2;
            if (canturn(h,d,turns))
            {
                right=turns;
            }
            else
            {
                left=turns+1;
            }

            
        }
        cout<<left<<endl;

    }
    
}