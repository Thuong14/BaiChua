#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
- Cau truc du lieu vector:
    + push_back() : thêm phần tử vào cuối vector
    + pop_back()  : xóa phần tử ở cuối vector
    + size()    : trả về số phần tử hiện tại của vector
    + empty()   : kiểm tra vector có rỗng hay không(nếu có trả về true, ngược lại trả về false)
    + v.erase(v.begin()+i): xóa phần tử tại vị trí i
*/
int main() {
    vector<int> v;      // khởi tạo một vector rỗng
    vector<int> x(5);   // khởi tạo một vector có cỡ là 5 (các phần tử mặc định bằng 0);
    vector<int> y(5,1); // khởi tạo một vector có 5 phần tử đều được gán bằng 1
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3); 
    v.pop_back(); 
    
    cout << v.size() << endl;
    
    // in ra lần lượt các phần tử trong vector
    for(int k: v) cout << k << " ";
    cout << endl;
    
    v.erase(v.begin()+1); // xóa phần tử ở vị trí 1 trong vector
    
    sort(v.begin(), v.end()); // sắp xếp vector theo thứ tự tăng dần

    vector<int> v2 = {1,1,1,1,1,2,2,2};
    v2.erase(unique(v2.begin(), v2.end()), v2.end()); // xóa bỏ các phần tử trùng nhau trong vector
    for(int k: v2) cout << k << " ";
}