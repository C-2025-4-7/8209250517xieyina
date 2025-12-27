#include <iostream>
#include <iomanip>           
#include "mytemperature.h"   

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    cout << "Celsius    Fahrenheit   |   Fahrenheit    Celsius" << endl;
    cout << "--------------------------------------------------" << endl;

    double celsius = 40.0;  
    while (celsius >= 31.0) {
        double fahrenheit = celsius_to_fah(celsius);  

        cout << setw(7) << celsius << "    "
            << setw(10) << fahrenheit << "   |   ";

        double fah_right = 120.0 - (40.0 - celsius) * 10.0; 
        double celsius_right = fahrenheit_to_cels(fah_right); 

        cout << setw(10) << fah_right << "    "
            << setw(10) << celsius_right << endl;

        celsius = celsius - 1.0;  
    }

    return 0;
}