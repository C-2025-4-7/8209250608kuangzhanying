#include<iostream>
#include<iomanip>
#define pi 3.14159265
using namespace std;
int main()
{	//1
	//Int i = k + 1;//Int要改为小写，且k未被定义
	int k = 1, i = 1;
	cout << i++ << endl;
	//int i = 1;//不能重复定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	//2
	double r, h, v;
	cout << "请输入三角锥的底面半径和锥高：";
	cin >> r >> h;
	v = pi * r * r * h / 3;
	cout << "三角锥的体积是：" << v << endl;
	//3
	cout << "char length:" << sizeof( char ) << endl;     
	cout << "int length:" << sizeof(int) << endl;
	//4
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in oct unsigned int type:" << oct << testUnint << endl;//8进制输出
	//5
	double a, b;
	cout << "请输入一个华氏温度：";
	cin >> a;
	cout << endl;
	b = (a - 32) / 1.8;
	cout << "对应的摄氏温度是：" << fixed << setprecision(2) << b;
	return 0;
}