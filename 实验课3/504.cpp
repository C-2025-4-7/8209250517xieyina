#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    float score;

public:
    void setInfo(int num, float sc)
    {
        id = num;
        score = sc;
    }

    int getId()
    {
        return id;
    }

    float getScore()
    {
        return score;
    }
};

void max(Student* students, int n)
{
    float maxScore = students[0].getScore();
    int maxId = students[0].getId();

    for (int i = 1; i < n; i++)
    {
        if (students[i].getScore() > maxScore)
        {
            maxScore = students[i].getScore();
            maxId = students[i].getId();
        }
    }

    cout << "最高成绩者的学号是：" << maxId << "，成绩为：" << maxScore << endl;
}

int main()
{
    Student stu[5]{};

    stu[0].setInfo(1001, 85.5);
    stu[1].setInfo(1002, 92.0);
    stu[2].setInfo(1003, 78.5);
    stu[3].setInfo(1004, 95.5);
    stu[4].setInfo(1005, 88.0);

    cout << "5个学生的信息已设置：" << endl;
    cout << "学号\t成绩" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << stu[i].getId() << "\t" << stu[i].getScore() << endl;
    }

    cout << "\n查找最高成绩者：" << endl;
    max(stu, 5);  

    return 0;
}