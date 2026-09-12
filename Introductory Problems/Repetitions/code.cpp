#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str; 
    cin >> str;
 
    int i=0,j=0,biggest = 0;
 
    while(i<str.size()){
        if(str[j] == str[i]) 
            j++;
        else{
            biggest = max(biggest, j-i);
            i = j; j++; 
        }
    }
 
    cout << biggest << endl;
    return 0;
}