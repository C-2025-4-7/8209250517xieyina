#include <iostream>
using namespace std;

class Point
{
private:
    int x;  
    int y;  

public:
    Point()
    {
        x = 60;
        y = 80;
        cout << "创建点，初始坐标为(" << x << "," << y << ")" << endl;
    }

    void setPoint(int i, int j)
    {
        x = 60 + i;  
        y = 80 + j;  
    }

    void display()
    {
        cout << "当前坐标为：(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    cout << "=== 验证Point类的功能 ===" << endl;

    Point p1;

    cout << "\n初始状态：" << endl;
    p1.display();

    cout << "\n修改坐标，加(5,10)：" << endl;
    p1.setPoint(5, 10);
    p1.display();

    cout << "\n再创建一个新点：" << endl;
    Point p2;
    p2.display();

    cout << "\n修改新点的坐标，加(-10,20)：" << endl;
    p2.setPoint(-10, 20);  
    p2.display();

    return 0;
}