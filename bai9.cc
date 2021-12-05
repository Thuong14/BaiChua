#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> m;

    for(int i=0; i<n; i++) cin >> v[i];
    vector<int> v2 = v;
    sort(v2.begin(), v2.end());

    int rank = 1;

    for(int k: v2) {
        if(m[k]==0)
            m[k] = rank++; 
    }
    for(int i=0; i<n; i++) {
        v[i] = m[v[i]];
    }
    
    for(int k: v) cout << k  << " ";
    return 0;
}