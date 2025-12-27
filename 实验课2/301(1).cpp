#include <iostream>
using namespace std;

int gcd(int m, int n);

int main() {
    int m, n;

    cout << "请输入两个自然数m和n：" << endl;
    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "错误：请输入正整数！" << endl;
        return 1;
    }

    int result = gcd(m, n);

    cout << m << " 和 " << n << " 的最大公约数是：" << result << endl;

    return 0;
}

int gcd(int m, int n) {
    int remainder;

    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }

    while (n != 0) {
        remainder = m % n;  
        m = n;              
        n = remainder;      
    }

    return m;  
}