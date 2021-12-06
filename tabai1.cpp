#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[100];
    cin >> n;

    int i = 0;
    while(i<n){
        cin >> a[i];

        if((i != 0) and(a[i] < a[i-1])){
            i=0;
            cout << "Yeu cau nhap lai: " << endl;
            continue;
        }
        i++;
    }

    for(int i=0; i < n; i++) cout << a[i] << " ";
    return 0;
}