#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    char op;

    cout << "简易计算器" << endl;
    cout << "支持运算: + - * / %" << endl;
    cout << "请输入表达式 (例如: 5 + 3): ";
    cin >> num1 >> op >> num2;

    switch (op) 
    {
    case '+':
        cout << "结果: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;

    case '-':
        cout << "结果: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;

    case '*':
        cout << "结果: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 != 0) 
        {
            cout << "结果: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else 
        {
            cout << "错误：除数不能为0！" << endl;
        }
        break;

    case '%':
        if (num2 != 0) 
        {
            int int1 = static_cast<int>(num1);
            int int2 = static_cast<int>(num2);
            cout << "结果: " << int1 << " % " << int2 << " = " << int1 % int2 << endl;
        }
        else 
        {
            cout << "错误：取模运算的除数不能为0！" << endl;
        }
        break;

    default:
        cout << "错误：非法的运算符 '" << op << "'！" << endl;
        cout << "请使用 + - * / % 中的运算符" << endl;
        break;
    }

    return 0;
}