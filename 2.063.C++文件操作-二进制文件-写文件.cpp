#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<fstream>
using namespace std;
//二进制文件 写文件
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//1、包含头文件
	//2、创建流对象
	ofstream ofs;
	//3、打开方式
	ofs.open("Person.txt", ios::out | ios::binary);
		//4、写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));
	//关闭文件
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}