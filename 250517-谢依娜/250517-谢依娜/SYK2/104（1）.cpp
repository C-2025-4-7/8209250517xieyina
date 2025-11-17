#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;
    cout << "output in unsigned int 1 type" << testUnint << endl;
    cout << "output in char type1" << static_cast<char>(testUnint) << endl;
    cout << "output in short type1" << static_cast<short>(testUnint) << endl;
    cout << "output in int type1" << static_cast<int>(testUnint) << endl;
    cout << "output in double type1" << static_cast<double>(testUnint) << endl;
    cout << "output in double type1" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type1" << hex << testUnint << endl;
    system("pause");
    return 0;
}