#include "macros.h"
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arrival[n], departure[n];

    for (int i = 0; i < n; ++i){
        cin >> arrival[i];
        cin >> departure[i];
    }
    sort(arrival, arrival + n);
    sort(departure, departure + n);

    int a = 0, d = 0;
    
    int curr = 0;
    int maxCount = 0;
    while (a < n){
        if (arrival[a] < departure[d]){
            curr++;
            maxCount = max(curr, maxCount);
            a++;
        }
        else{
            curr--;
            d++;
        }
    }

    cout << maxCount << "\n";


    return 0;
}
