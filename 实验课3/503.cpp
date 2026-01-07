#include <iostream>
using namespace std;

class Cuboid
{
private:
    double length;
    double width;
    double height;

public:
    void inputDimensions()
    {
        cout << "请输入长、宽、高（用空格分隔）：";
        cin >> length >> width >> height;
    }

    double calculateVolume()
    {
        return length * width * height;
    }

    void outputVolume()
    {
        double volume = calculateVolume();
        cout << "该长方柱的体积为：" << volume << endl;
    }
};

int main()
{
    Cuboid cuboid1, cuboid2, cuboid3;

    cout << "=== 计算3个长方柱的体积 ===" << endl;

    cout << "\n第一个长方柱：" << endl;
    cuboid1.inputDimensions();
    cuboid1.outputVolume();

    cout << "\n第二个长方柱：" << endl;
    cuboid2.inputDimensions();
    cuboid2.outputVolume();

    cout << "\n第三个长方柱：" << endl;
    cuboid3.inputDimensions();
    cuboid3.outputVolume();

    return 0;
}