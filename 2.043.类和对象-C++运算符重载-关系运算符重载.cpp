#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
using namespace std;
//重载关系运算符

class Person
{
public:
    Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }

    //重载==号
    bool operator==(Person& p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
            return true;
        else
            return false;
    }
    string m_Name;
    int m_Age;
};
void test01()
{
    Person p1("Tom", 18);
    Person p2("Tom", 18);
    if (p1 == p2)
    {
        cout << "p1 和p2 是相等的！" << endl;
    }
    else
        cout << "p1 和 p2是不相等的！" << endl;
}
int main(void)
{
    test01();
    system("pause");
    return 0;
}

