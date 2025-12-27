#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);  
    int len2 = strlen(s2);  

    if (len1 > len2) {
        return -1;
    }

    // 在s2中逐个位置尝试匹配
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        // 从当前位置开始比较s1和s2
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;  // 字符不同，跳出内循环
            }
        }
        // 如果j走到了s1的末尾，说明完全匹配
        if (j == len1) {
            return i;  // 返回匹配的起始位置
        }
    }

    return -1;  // 没有找到匹配
}

int main() {
    char s1[100], s2[100];

    cout << "请输入主字符串s2: ";
    cin.getline(s2, 100);

    cout << "请输入子字符串s1: ";
    cin.getline(s1, 100);

    int pos = indexof(s1, s2);

    if (pos != -1) {
        cout << "子串 \"" << s1 << "\" 在 \"" << s2
            << "\" 中首次出现的位置是: " << pos << endl;
    }
    else {
        cout << "子串 \"" << s1 << "\" 不在 \"" << s2 << "\" 中" << endl;
    }

    return 0;
}