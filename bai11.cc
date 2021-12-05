#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main() {

    float m, n, a;
    cin >> m >> n >> a;
    cout << ceil(m/a) * ceil(n/a);

    return 0;
}
