#include "macros.h"
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> children;

    for (int i = 0; i < n; ++i){
        int y;
        cin >> y;
        children.push_back(y);
    }
    sort(children.begin(), children.end());

    int count = 0;

    int l = 0, r = n - 1;

    while (l <= r){
        if (children[l] + children[r] <= x){
            l++;
        }
        r--;
        count++;
    }
    cout << count << "\n";

    return 0;
}
