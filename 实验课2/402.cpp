#include <iostream>
#include <cstring>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;  
    int len = strlen(hexString);  

    // 遍历字符串的每个字符
    for (int i = 0; i < len; i++) {
        result *= 16;  // 每次把之前的结果乘以16

        char ch = hexString[i];  // 当前字符

        // 处理数字字符 '0'-'9'
        if (ch >= '0' && ch <= '9') {
            result += (ch - '0');  // '0'的ASCII码是48，减去48得到数字
        }
        // 处理大写字母 'A'-'F'
        else if (ch >= 'A' && ch <= 'F') {
            result += (ch - 'A' + 10);  // 'A'=10，'B'=11，依次类推
        }
        // 处理小写字母 'a'-'f'
        else if (ch >= 'a' && ch <= 'f') {
            result += (ch - 'a' + 10);
        }
        // 如果有前缀0x或0X，跳过
        else if ((ch == '0' && i == 0) &&
            (hexString[1] == 'x' || hexString[1] == 'X')) {
            result = 0;  // 重置结果
            i++;  // 跳过x/X字符
        }
    }

    return result;
}

int main() {
    char hexStr[100];

    cout << "请输入十六进制数: ";
    cin >> hexStr;

    int decimal = parseHex(hexStr);
    cout << "对应的十进制数是: " << decimal << endl;

    // 测试几个例子
    cout << "\n测试例子:" << endl;
    cout << "A5 -> " << parseHex("A5") << endl;        // 165
    cout << "FF -> " << parseHex("FF") << endl;        // 255
    cout << "1F4 -> " << parseHex("1F4") << endl;      // 500
    cout << "0x1A -> " << parseHex("0x1A") << endl;    // 26

    return 0;
}