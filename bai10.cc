#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    string s; cin >> s;
    int count=0;
    
    bool flag = true;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='V') {
            count++;
            if(count==2) break;
        }
        if(s[i]=='M' && s[i+1]=='M' &&s[i+2]=='M') {
            flag = false;
            break;
        }
    }

    if(count==2 || !flag) cout << "Khong du dieu kien\n";
    else cout << "du dieu kien\n";
    

    return 0;
}