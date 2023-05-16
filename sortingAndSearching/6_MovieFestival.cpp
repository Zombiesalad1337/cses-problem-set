#include "macros.h"

bool timeSort(const ii& a, const ii& b){
    if (a.se < b.se) return true;
    return false;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ii> timings;	

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i){
        int s, f;
        cin >> s;
        cin >> f;
        
        timings.emplace_back(s, f);
    }

    sort(ALL(timings), timeSort);

    int count = 1;
    
    int last = timings[0].se;

    for (int i = 1; i < n; ++i){
        if (timings[i].fi >= last){
            count++;
            last = timings[i].se;
        }
    }
    
    cout << count << "\n";


    return 0;
}
