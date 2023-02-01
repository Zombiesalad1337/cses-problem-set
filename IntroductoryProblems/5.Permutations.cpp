#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 1){
        cout << "1\n";
    }
    else if (n < 4){
        cout << "NO SOLUTION\n";
    }
    else if (n == 4){
        cout << "2 4 1 3\n";
    }
    else{
        bool isOdd = n & 1;
        for (int i = 0; i <= (isOdd ? n / 2 : n / 2 - 1); ++i){
            cout << 2 * i + 1 << " ";
        }
        for (int i = 1; i <=  n / 2; ++i){
            cout << 2 * i << " ";
        }
        cout << "\n";
    }

    


    return 0;
}
