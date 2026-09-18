#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    while(n--){
        int a,b;
        cin >> a >> b;
        
        cout << (
            (a+b)%3 == 0 && 2*a >= b && 2*b >=a ?
            "YES\n" : "NO\n"
        );
    }
    return 0;
}