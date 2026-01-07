#include <iostream>             
#include "student.h"

int main()
{
    Student stud;                
    Student stud1;               

    stud.set_value(1, "张三", 'm');     
    stud1.set_value(7, "tcg", 'm');     

    std::cout << "学生1信息：" << std::endl;
    stud.display();              

    std::cout << "\n学生2信息：" << std::endl;
    stud1.display();             

    return 0;
}