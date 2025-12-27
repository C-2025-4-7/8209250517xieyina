#include <iostream>
using namespace std;

// 排序函数：冒泡排序
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换位置
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    // 1. 输入数组大小
    cout << "请输入数组元素个数: ";
    cin >> size;

    // 2. 动态创建数组
    int* arr = new int[size];

    // 3. 输入数组元素
    cout << "请输入" << size << "个整数:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "元素" << i + 1 << ": ";
        cin >> arr[i];
    }

    // 4. 显示原始数组
    cout << "\n原始数组: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 显示指针信息（调试观察）
    cout << "指针arr的值（数组首地址）: " << arr << endl;
    cout << "第一个元素的值: " << *arr << endl;

    // 5. 调用排序函数
    sortArray(arr, size);

    // 6. 显示排序后的数组（用指针方式）
    cout << "\n排序后数组: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";  // 指针方式访问元素
    }
    cout << endl;

    // 7. 释放内存
    delete[] arr;
    cout << "\n内存已释放！" << endl;

    return 0;
}