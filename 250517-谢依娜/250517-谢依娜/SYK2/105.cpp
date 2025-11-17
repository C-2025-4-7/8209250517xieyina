#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double fahrenheit;
    double celsius;

    cout << "请输入华氏温度：";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fixed << setprecision(2);
    cout << "对应的摄氏温度为：" << celsius << "* C" << endl;

    return 0;
}