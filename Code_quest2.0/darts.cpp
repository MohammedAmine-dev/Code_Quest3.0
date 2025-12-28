#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        if (s[0]=='<' || s[n-1]=='>') cout<<"FAILURE"<<endl;
        else{
        stack<char> pile1;
        stack<char> pile2;
        for (int i=n-1;i>=0;i--)
        {
            if (s[i]=='<')
            {pile1.push(s[i]);}
            else{
                pile2.push(s[i]);
            }
        }
        while(!pile1.empty() && !pile2.empty()!=0)
        {   
            pile1.pop();
            pile2.pop();
        }
        if (pile1.empty() && pile2.empty()) cout<<"SUCCESS"<<endl;
        else{
            cout<<"FAILURE"<<endl;
            
        }
    }
}

}