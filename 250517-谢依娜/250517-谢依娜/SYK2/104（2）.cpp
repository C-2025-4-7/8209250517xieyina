#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;
    cout << "output in unsigned int i type" << testUnint << endl;
    cout << "output in oct type:" << oct << testUnint << endl;

    double realNumber = 3.14159;
    cout << "real number to int:" << static_cast<int>(realNumber) << endl;

    system("pause");
    return 0;
}