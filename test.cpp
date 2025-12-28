#include <bits/stdc++.h>
using namespace std;
 
int main() {

 
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
 
        long long n = (sqrt(1 + 8.0 * x) - 1) / 2;
        if (n * (n + 1) / 2 < x)
            n++;
         if (n*(n + 1) / 2 - x == 1)
            n++;
 
        cout << n <<endl;
    }
    
}