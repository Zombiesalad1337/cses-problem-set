#include "macros.h"

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ll int> res = {0, 6, 28, 96, 252, 550, 1056, 1848};	
    
    ll int n;

    cin >> n;


    for (ll int i = 9; i <= n; ++i){
        ll val = res[i - 3] + (4 * (i - 1) * ((i - 2) * (i - 2) + 6)) + 14 + ((4 * i - 24) * (4 * i - 5)) / 2;
        res.pb(val);
    }
    for (ll int i = 1; i <= n; ++i)
        cout << res[i - 1] << "\n";

    return 0;
}

//In = (n - 2)^2 - number of cells in inner square
//P = 4*(n - 1) - number of cells in outermost layer

//only works for size 7 or greater
//For square of size n:
    //1. count all of previous layer
    //2. Place one on outermost layer and one on inner layers
    //3. Place both on outermost layer
//1. = res[i - 3]
//2. 
    //corner blocks 2 of inner layer: ways = 4 * (In - 2)
    //adjacent to corners blocks 2 of inner layers: 8 *  (In - 2)  (8 of these)
    //adjacent to above block 3 of inner layers: 8 * (In - 3)
    //remaining outermost ones block 4 of inner layers: (P - 4 - 8 - 8) (In - 4)
                                                    // = (P - 20)(In - 4)
//3.
    //Corners don't block any of the outermost cells: 4 * (P - 1)
    //The next two adjacent to corners block 1 of outermost layer: 16 * (P - 2)
    //The remaining outermost cells dont block any outermost cell: (P  - 20) * (P - 1)

// Divide #3 by 2: since we are double counting here.
// Sum 1 + 2 + 3 and simplify to get code's expression
