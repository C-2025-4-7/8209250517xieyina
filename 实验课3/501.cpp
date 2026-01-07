#include <iostream>
using namespace std;

class Time             
{
private:              
    int hour;
    int minute;
    int sec;

public:
    void inputTime()
    {
        cout << "请输入时、分、秒（用空格分隔）：";
        cin >> hour >> minute >> sec;
    }

    void outputTime()
    {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main()
{
    Time t1;           

    t1.inputTime();   
    t1.outputTime();   

    return 0;
}