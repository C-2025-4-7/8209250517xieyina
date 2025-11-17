#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    double a;      
    double xn;     
    double xn1;    
    cout << "请输入一个正数 a: ";
    cin >> a;
    if (a < 0) 
    {
        cout << "错误：不能计算负数的平方根！" << endl;
        return 1;  
    }
    if (a == 0) 
    {
        cout << a << " 的平方根是: 0" << endl;
        return 0;
    }
    xn = a;
    do 
    {
        xn1 = 0.5 * (xn + a / xn);
        if (fabs(xn1 - xn) < 1e-5) 
        {
            break;  
        }
        xn = xn1;
    } while (true);  
    cout << a << " 的平方根是: " << xn1 << endl;
    cout << "验证: " << xn1 << " * " << xn1 << " = " << xn1 * xn1 << endl;
    return 0;
}