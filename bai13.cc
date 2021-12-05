#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    
    while(v.size()>1) {
        int x = v[v.size()-1];
        v.pop_back();
        int y=v[v.size()-1];
        v.pop_back();

        if(x-y > 0) {
            v.push_back(x-y);
            sort(v.begin(), v.end());
        }
    }

    if(v.empty()) cout << 0;
    else cout << v[0] << endl; 

    return 0;
}