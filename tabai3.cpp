#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum =0;

    for(int i=1; i <= sqrt(n); i++){

        if(n % i == 0) {

            if(pow(i,2)==n) sum+=i;
            else sum+=i + n/i;  
        }

    } 
    cout << (sum);

    return 0;
}