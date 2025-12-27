#include <iostream>
using namespace std;

void calculateGCDandLCM(int m, int n, int& gcdValue, int& lcmValue);

int main() {
    int m, n;
    int gcdResult, lcmResult;

    cout << "请输入两个自然数m和n：" << endl;
    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "错误：请输入正整数！" << endl;
        return 1;
    }

    calculateGCDandLCM(m, n, gcdResult, lcmResult);

    cout << m << " 和 " << n << " 的最大公约数是：" << gcdResult << endl;
    cout << m << " 和 " << n << " 的最小公倍数是：" << lcmResult << endl;

    return 0;
}

void calculateGCDandLCM(int m, int n, int& gcdValue, int& lcmValue) {
    int a = m;  
    int b = n;  
    int remainder;

    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        remainder = a % b;  
        a = b;              
        b = remainder;      
    }

    gcdValue = a;  

    lcmValue = (m * n) / gcdValue;

}