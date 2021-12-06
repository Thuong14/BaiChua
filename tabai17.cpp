#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[100];
    cin >> n;
    int max=0;
    int luu;

    for(int i=0; i<n; i++){

        cin >> a[i];

        if(max< abs(a[i])){
            luu=a[i];
            max = abs(a[i]);
        }
        
    }

    cout << luu;

    return 0;
}