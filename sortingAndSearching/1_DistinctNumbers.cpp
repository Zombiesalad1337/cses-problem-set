#include "macros.h"

int main(){
    map<int, bool> seen;
    int t;
    cin >> t;
    int distinct = 0;
    for (int i = 0; i < t; ++i){
        int x;
        cin >> x;
        
        if (!seen[x]){
            distinct++;
            seen[x] = true;
        }
    }
    cout << distinct << "\n";
    return 0;
}
