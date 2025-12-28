#include <bits/stdc++.h>
using namespace std;
int main(){
    map< string,string>mymap;
    int n;
    cin>>n;
    while(n--)
    {
        string place;
        cin>>place;
        string zone;
        cin>>zone;
        mymap[place]=zone;
    }
    map< string,int>mymap2;
    int q;
    cin>>q;
    while(q--)
    {
        string place;
        cin>>place;
        int a;
        cin>>a;
        string zone=mymap[place];
        mymap2[zone]+=a;
    }
    string maxKey;
    int maxValue = INT_MIN;
    for (const auto& pair : mymap2) {
        if (pair.second > maxValue) {
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }
    cout<<maxKey<<endl;







}