#include "macros.h"
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;	
    cin >> n >> x;
    
    map<int, int> index;

    int firstVal;
    cin >> firstVal;
    index[firstVal] = 0;
    
    ii res = mp(0, 0);

    F(i, 1, n){
        //DBG(i);
        int y;
        cin >> y;
        //DBG(y);
        
        int pos = index[x - y];
        //DBG(pos);

        if (pos > 0){
            res.fi = pos;
            res.se = i;
        }
        if (pos == 0 && y + firstVal == x){
            res.fi = pos;
            res.se = i;
        }
        index[y] = i;
    }
    if (res.fi == 0 && res.se == 0){
        cout << "IMPOSSIBLE\n";
    }
    else{
        cout << res.fi + 1 << " " << res.se + 1 << "\n";
    }
    
    return 0;
}
