#include <bits\stdc++.h>
using namespace std;

int main() {
    unordered_map<char, char> m;
    char i='a', j='z';
    char I='A', J='Z';
    while(i<='z') {
        m[i++] = j--;
        m[I++] = J--;
    }
    string s; cin >> s;
    for(int i=0; i<s.length(); i++) 
        s[i] = m[s[i]];
    cout << s;
}