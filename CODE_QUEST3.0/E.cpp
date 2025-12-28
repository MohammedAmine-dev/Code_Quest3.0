#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> arr(4);
    for (int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x= arr[1]-arr[0];
    int y= arr[2]-arr[1];
    int z= arr[3]-arr[2];
    int diff;
    if (x==y) diff=x;
    else if (x==z) diff=x;
    else if (y==z) diff=z;
    
    for (int i=0;i<3;i++)
    {
        if(arr[i+1]!=arr[i]+diff)
        {
            cout<<arr[i]+diff;
            return 0;
        }
    }
    if(arr[0]-diff>0) 
    {cout<<arr[0]-diff<<endl;
        return 0;}
        else{
    cout<< arr[3]+diff;
        }
    
}