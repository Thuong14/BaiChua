#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i; i<n; i++) 
        cin >> v[i];
    sort(v.begin(), v.end());
    
    v.erase(unique(v.begin(), v.end()), v.end());
    
    if(v.size() < 3) cout << v[0];
    else cout << v[v.size()-3];
    return 0;
}
