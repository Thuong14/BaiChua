#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float sum = sqrt(n);

    for(int i=n-1; i>=1; i--){
        sum = sqrt(i + sum);

    }

    return 0;
}