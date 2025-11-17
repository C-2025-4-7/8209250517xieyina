#include <iostream>
using namespace std;

int main() {
    double price = 0.8;  
    int day = 1;         
    int totalApples = 0; 
    double totalCost = 0.0; 
    int applesToday = 2; 

    cout << "苹果购买记录：" << endl;
    cout << "-------------------" << endl;
    while (totalApples + applesToday <= 100) {
        double costToday = applesToday * price;  
        totalApples += applesToday;              
        totalCost += costToday;                  

        cout << "第" << day << "天: 购买" << applesToday
            << "个苹果, 花费" << costToday << "元" << endl;

        applesToday *= 2; 
        day++;             
    }
    double averageCost = totalCost / (day - 1);
    cout << "-------------------" << endl;
    cout << "统计结果：" << endl;
    cout << "购买天数: " << day - 1 << " 天" << endl;
    cout << "总苹果数: " << totalApples << " 个" << endl;
    cout << "总花费: " << totalCost << " 元" << endl;
    cout << "每天平均花费: " << averageCost << " 元" << endl;
    return 0;
}