#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define f first
#define s second
typedef pair<int,int> ii; 
typedef long long ll; 
 
int main() {
    fastio;
 
    int n,k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i=0; i<n; i++)
       cin >> arr[i];  
    
    map<int,int> mp;
    // janela inicial
    for (int i=0; i<k; i++)
        mp[arr[i]]++;
 
    cout << mp.size();
    // janelas seguintes
    for (int i=k; i<n; i++) {
        mp[arr[i-k]]--;
        if (mp[arr[i-k]] == 0)
            mp.erase(arr[i-k]);
        mp[arr[i]]++;
 
        cout << ' ' << mp.size();
    }

    return 0;
}