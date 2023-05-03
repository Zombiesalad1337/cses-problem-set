#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    //top most layer - squares of odd starting at indices 1, 3, 5, ... , adjacent number is ++num
    //leftmost layer - squares of even starting at indicies 2, 4, 6, ..., adjacent number is ++num
    // pattern goes down then left OR right then up, depending upon square's dimension
    // even size - down then left, odd size - right then up
    
    // OR
    //
    // find the edge of square on which number lies m <- max(x, y)
    // calculate m^2, then subtract accordingly:
        // if even m: decreasing right then up
            // sub (y - 1)
            // if x < m : sub (x - 1)
        //if odd m: decreasing down then up
            // sub (x - 1)
            // if y < m: sub (y - 1)
            //


    int t;
    cin >> t;
    //row = x, col = y, UNLIKE QUESTION
    for (int i = 1; i <= t; ++i){
        int x, y;
        cin >> x >> y;

        long long int m = max(x, y);
        
        //? has lower precedence than +, so needed brackets
        // before : (x - 1) + y < m ? (m - y) : 0
        // === (x - 1 + y) < m : (m - y) : 0
        long long int num = m * m - (m & 1 ? ((x - 1) + (y < m? (m - y): 0)) : ((y - 1) + (x < m? (m - x) : 0)));
        cout << num << "\n";
    }
    return 0;
}
