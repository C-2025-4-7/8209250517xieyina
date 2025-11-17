#include<iostream>
using namespace std;

int main()
{ 
    char ch;

    cout << "请输入一个字符：";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        char upperCase = ch - 32;
        cout << "转换结果；" << upperCase << endl;
    }
    else
    {
        char nextChar = ch + 1;
        cout << "后继字符的ASCⅡ：" << (int)nextChar << endl;
    }

    return 0;
}