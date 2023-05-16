#include "macros.h"

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    int count = 0;
    
    vector<int> applicants;
    vector<int> apartments;
    
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        applicants.push_back(x);
    }
    for (int i = 0; i < m; ++i){
        int x;
        cin >> x;
        apartments.push_back(x);
    }
    sort(apartments.begin(), apartments.end());
    sort(applicants.begin(), applicants.end());

    int a = 0, b = 0;

    while (a < n && b < m){
        if (applicants[a] < apartments[b] - k){
            a++;
        }
        else if  (LINR(applicants[a], apartments[b] - k, apartments[b] + k)){
            count++;
            a++;
            b++;
        }
        else{
            b++;
        }
    }
    cout << count << "\n";
}


