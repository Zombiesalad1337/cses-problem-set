#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    int a, b;
    cin >> n;
    cin >> a;
    if (n == 1){
        cout << "0\n";
        return 0;
    }
    long long count = 0;
    while (--n){
        cin >> b;    
        if (b < a){
            count += a - b;
            b = a;
        }
        a = b;
    }
    cout << count << "\n";
    return 0;
}
