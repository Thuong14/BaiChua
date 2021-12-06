#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10] = {6,2,5,5,4,5,6,3,7,6};

    string n;
    getline(cin,n);

    int sum=0;
    for(int i=0; i<n.size(); i++){

        sum+=a[n[i]-'0'];
    }

    cout << sum;
    return 0;
}