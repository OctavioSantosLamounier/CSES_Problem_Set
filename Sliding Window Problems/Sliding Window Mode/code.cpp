#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
 
int main() {
    fastio;
 
    int n,k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (int & e: arr)
        cin >> e;
 
 
    int i=0;
    map<int,int> mp;
    map<int,set<int>> inv_mp;
 
    for (int j=0; j<n; j++){
        int old = mp[arr[j]]++;
 
        // apaga do antigo conjunto de frequencia
        if (old >= 1)
            inv_mp[old].erase(arr[j]);
        // apaga o conjunto se ele tiver vazio
        if (inv_mp[old].size() == 0)
            inv_mp.erase(old);
 
        // atualizar o conjunto da nova frequencia
        inv_mp[old+1].insert(arr[j]);
        
        // primeira janela
        if (j-i+1 < k)
            continue;
 

        auto& [_, ele] = *inv_mp.rbegin();
        cout << *ele.begin() << " ";
 
        // update mapa de frequencia
        int fr = mp[arr[i]]--;
        if (mp[arr[i]] == 0)
            mp.erase(arr[i]);
 
        // update mapa inverso 
        inv_mp[fr].erase(arr[i]);
        if (inv_mp[fr].size() == 0) // limpa se tiver vazio;
            inv_mp.erase(fr);
        if (fr > 1) // adiciona ao conjunto anterior
            inv_mp[fr-1].insert(arr[i]);
        
        i++;
    }
    return 0;
}
