#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> b;
    int n; cin >> n;
    int j=1;
    while(j++<n){
        int a; cin >> a;
        b.push_back(a);
    }
    
    sort(b.begin(),b.end());
 
    for(int i=1; i<=n; i++)
        if(b[i-1] != i){
            cout << i << endl;  
            return 0;
        }   
}