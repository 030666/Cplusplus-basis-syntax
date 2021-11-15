#define  _CRT_SECURE_NO_WARNINGS  
#include<iostream>
#include<string>
using namespace std;

//分别利用普通写法和多态技术实现计算器

//普通写法
class Calaulator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
			return m_Num1 + m_Num2;
		else if (oper == "-")
			return m_Num1 - m_Num2;
		else if (oper == "*")
			return m_Num1 * m_Num2;
	}
	//如果想扩展新的功能，需要修改源码
	//在真实开发中 提倡 开闭原则
	//开闭原则： 对扩展进行开放 ，对修改进行关闭
	int m_Num1;//操作数1
	int m_Num2;//操作数2
};
void test01()
{
	//创建计算机对象
	Calaulator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 <<"+"<<c.m_Num2 <<"="<<c.getResult("+") <<endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}

//利用多态实现计算器
//多态好处：
// 1、组织结构清晰
// 2、可读性强
// 3、对于前期和后期扩展以及维护性高
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalaulator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法运算器
class SubCalaulator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法运算器
class MulCalaulator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象

	//加法运算
	AbstractCalculator* abc = new AddCalaulator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult ()<< endl;
	//用完后记得销毁
	delete abc;
	//减法运算
	abc = new SubCalaulator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}