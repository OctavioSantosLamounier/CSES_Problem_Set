#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
 
int main() {
	fastio;

	int n; 
    cin >> n;

	vector<int> v(n);
	long long count=0;

	for (int i=0; i<n; i++) {
		cin >> v[i];
		if (v[i-1] > v[i] && i>0)
			while (v[i-1] > v[i]) {
				v[i]++; count++;
			}
	}
    
	cout << count << endl;
	return 0;
}