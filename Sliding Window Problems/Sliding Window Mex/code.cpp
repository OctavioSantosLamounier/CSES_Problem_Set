#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
 
int main() {
    fastio;
 
    int n,k;
    cin >> n >> k;
 
    vector<int> v(n);
    for (int &i: v)
        cin >> i;
 
    set<int> s;
    for (int i=0; i<=k; i++)
        s.insert(i);
 
    map<int,int> mp;
 

    for (int i=0; i<k; i++) {
        s.erase(v[i]);
        if (v[i] <= k)
            mp[v[i]]++;
    }
    cout << *s.begin();
 
    for (int i=k; i<n; i++){
        // remove
        mp[v[i-k]]--;
        if (mp[v[i-k]] <= 0) {
            mp.erase(v[i-k]);
            s.insert(v[i-k]);
        }
        
        // insert
        s.erase(v[i]);
        if (v[i] <= k)
            mp[v[i]]++;
 
        cout << ' ' << *s.begin();
    }
    return 0;
}