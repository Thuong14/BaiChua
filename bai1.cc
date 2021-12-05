#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    cin >> a[0];
    int i=1;
    while(i<n) {
        int k; cin >> k;
        if(k >= a[i-1]) {
            a[i] = k;
            i++;
        }
    }
}