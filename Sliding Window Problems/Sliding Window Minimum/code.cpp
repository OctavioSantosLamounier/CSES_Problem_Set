#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define f first
#define s second
typedef long long ll;
typedef pair<ll,int> pli;
 
 
int main() {
    fastio;
 
    int n,k;
    ll x,a,b,c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    
    int cnt_added = 0;
    int cnt_removed = 0;
    deque<pli> q;
 
    // cresce a janela
    q.push_back({x,cnt_added++});
 
    // primeira janela
    for (int i=2; i<=k; i++) {
        // gera e processa a fila
        x = (a*x+b) % c;
        while(!q.empty() && q.back().f > x)
            q.pop_back();
 
        q.push_back({x,cnt_added++});
    }
    ll numXor = q.front().f;
    
    // proximas janelas
    for (int i=k+1; i<=n; i++) {
        // encolhe janela
        if(q.front().s == cnt_removed)
            q.pop_front();
        cnt_removed++;
 
        // 
        x = (a*x+b) % c;
        while (!q.empty() && q.back().f > x)
            q.pop_back();
 
        //
        q.push_back({x,cnt_added++});
        numXor ^= q.front().f;
    }    
 
    cout << numXor << endl;
    return 0;
}