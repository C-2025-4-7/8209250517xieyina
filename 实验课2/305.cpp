#include <iostream>
using namespace std;

int peach(int day)
{
    if (day == 10)          
        return 1;
    else                    
        return 2 * (peach(day + 1) + 1);
}

int main()
{
    cout << "第一天有：" << peach(1) << "个桃子" << endl;

    cout << "\n看看每天有多少桃子：" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "第" << i << "天：" << peach(i) << "个" << endl;
    }

    return 0;
}