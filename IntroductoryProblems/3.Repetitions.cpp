#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int count = 1;
    int maxCount = 1;
    for (int i = 1; i < s.size(); ++i){
        if (s[i] == s[i - 1]) 
            count++;
        else count = 1;
        maxCount = max(count, maxCount);
    }
    cout << maxCount << "\n";
    return 0;
}
