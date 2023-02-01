#include <bits/stdc++.h>
using namespace std;

int main(){

    // remove bottleneck of cin and cout
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
     
    long long x_or = 0;
    for (int i = 1; i < n; ++i){
        int x;
        cin >> x;
        x_or = x_or ^ x ^ i;
    }
    x_or ^= n;
    
    cout << x_or << "\n";


    return 0;
}

