#define  _CRT_SECURE_NO_WARNINGS  1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1.整形
	int a = 0;
	cout << "请给整形变量a赋值：" << endl;
	cin >> a;
	cout << "整形变量a= " << a << endl;
	//2.浮点数
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点数变量f= " << f << endl;
	//3.字符型
	char ch = 'a';
	cout << "请给字符型变量赋值：" << endl;
	cin >> ch;
	cout << "字符型变量ch= " << ch<< endl; 
	//4.字符串型
	string str = "hello";
	cout << "请给字符串赋值：" << endl;
	cin >> str;
	cout << "字符串str= " << str << endl;
	//5.布尔类型
	bool flag = false;
	cout << "请给布尔类型flag 赋值" << endl;
	cin >> flag;
	cout << "布尔类型flag="<<flag << endl;

	system("pause");
	return 0;
}