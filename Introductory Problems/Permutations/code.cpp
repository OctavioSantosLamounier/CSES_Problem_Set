#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
 
int main() {
    fastio;
 
    int n;
    cin >> n;
 
    if (n == 1) {
        cout << 1;
    }
    else if (n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
    } 
    else if (n&1) {
        for (int i=n-1; i>0; i-=2)
            cout << i << ' ';
        for (int i=n; i>0; i-=2)
            cout << i << ' ';
    }
    else {
        for (int i=2; i<=n; i+=2)
            cout << i << ' ';
        for (int i=1; i<n; i+=2)
            cout << i << ' ';
    }
 
    return 0;
}