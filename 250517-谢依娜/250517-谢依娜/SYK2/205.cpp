#include <iostream>
using namespace std;

int main() 
{
    char c;
    int letters = 0;    
    int spaces = 0;     
    int digits = 0;     
    int others = 0;    

    cout << "请输入一行字符（按回车结束）: ";

    while ((c = cin.get()) != '\n') 
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
        {
            letters++;
        }
        else if (c >= '0' && c <= '9') 
        {
            digits++;
        }
        else if (c == ' ') 
        {
            spaces++;
        }
        else 
        {
            others++;
        }
    }

    cout << "\n统计结果：" << endl;
    cout << "英文字母: " << letters << " 个" << endl;
    cout << "数字字符: " << digits << " 个" << endl;
    cout << "空格: " << spaces << " 个" << endl;
    cout << "其他字符: " << others << " 个" << endl;

    return 0;
}