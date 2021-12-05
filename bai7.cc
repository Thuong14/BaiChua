#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int Max = a[0];
    
    for(int i=1; i<n; i++) {
        if(a[i] > Max) Max = a[i];
    }
    int k; cin >> k;
    for(int b: a) {
        if(b+k >= Max) cout << 1 << " ";
        else cout << 0 << " ";
    }
    
    return 0;
}
