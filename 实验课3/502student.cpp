#include <iostream>
#include <cstring> 
#include "student.h"

void Student::set_value(int n, const char* na, char s)
{
    num = n;
    strcpy_s(name, na);  
    sex = s;
}

void Student::display()         
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}