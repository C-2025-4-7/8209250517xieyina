#include <iostream>
#include <iomanip>  
#include <cmath>    
using namespace std;

bool is_prime(int num);

int main() {
    int count = 0;      
    int num = 2;        

    cout << "Ç°200¸öËØÊý£º" << endl;

    while (count < 200) {
        if (is_prime(num)) {
            count++;  

            cout << setw(6) << num; 

            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;  
    }

    if (count % 10 != 0) {
        cout << endl;
    }


    return 0;
}

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }

    if (num == 2) {
        return true;
    }

    if (num % 2 == 0) {
        return false;
    }

    int limit = static_cast<int>(sqrt(num));
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return false;  
        }
    }

    return true;  
}