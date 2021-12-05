#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string s; cin >> s;
    for(int i=0; i<s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    
    float x=0, y=0;
    for(char c: s) {
        if(c=='W') y++;
        else if(c=='S') y--;
        else if(c=='A') x--;
        else if(c=='D') x++;
    }

    cout << sqrt(x*x + y*y);

}