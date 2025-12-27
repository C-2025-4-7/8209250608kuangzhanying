#include<iostream>
#include"mytemperature.h"
using namespace std;
//1.求最大公约数和最小公倍数
void GCD_LCM(int a,int b,int& gcd,int& lcm) {
	int c;
	cout << endl;
	int x = 0, y = 0;
	x = a < b ? b : a;
	y = a > b ? b : a;
	//辗转相除法
	while (x % y != 0) {
		c = x % y;
		x = y;
		y = c;
	}
	gcd = y;
	lcm = a * b / gcd;
}
//2.判断素数
bool is_prime(int num) {
	if (num == 2) {
		return true;
	}
	for (int i = 2; i * i <=num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
//5.递归
int rec(int num_day ,int& num) {
	if (num_day == 1) {
		num = 1;
	}
	else {
		num = (rec(num_day - 1, num)+1)*2;
	}
	return num;
}
int main() {
	//1.输入自然数m和n，
	//（1）求他们的最大公约数（或称最大公因数）。
	//要求输入、输出在主函数中进行，求公约数由函数实现。
	//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
	int a, b;
	int gcd, lcm;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	GCD_LCM(a, b, gcd, lcm);
	cout << a << "和" << b << "的";
	cout << "最大公约数是：" << gcd<<"\t";
	cout << "最小公倍数是：" << lcm;
	//2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
	//	bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
	//	利用函数is_prime找出前200个素数，并按每行10个输出：
	//	2     3      5      7    11    13    17    19    23    29
	int i = 0, k = 0;
	for (int j = 2;; j++) {
		if (is_prime(j) == true) {
			cout << j << "\t";
			i++;
			k++;
		}
		if (i ==10 ) {
			cout << endl;
			i = 0;
		}
		if (k == 200) {
			break;
		}
	}
	//	3、编程实现摄氏温度到华氏温度的转换：
	//	编写一个头文件，包含下面两个函数：
	//	double celsius_to_fah(double cel)    //摄氏温度到华氏温度
	//	double fahrenheit_to_cels(double fah) //华氏温度到摄氏温度
	//	实现头文件，并编写测试程序，调用函数显示如下结果：
	//	Celsius    Fahrenheit    | Fahrenheit       Celsius
	//	40.0       105.0 | 120.0            48.89
	//	39.0       102.0 | 110.0            43.33
	//	……       ……         | ……             ……
	//	31.0        87.8 | 30.0 - 1.11
	//	（测试程序为主模块，即main()函数所在的CPP文件，头文件mytemperature.h只有函数声明；函数定义写在另一CPP文件mytemperature.cpp）

	//	4、创建名为mytriangle.h的头文件，包括：
	//	bool is_valid(double side1, double side2, double side3)
	//	double_area(double side1, double side2, double side3)
	//	面积 = sqrt(s(s - side1)(s - side2)(s - side3))
	//	其中s = (side1 + side2 + side3) / 2
	//	写测试程序：读取三角形三边长，如输入合法，计算面积，否则输出错误信息。
	//	（测试程序为主模块，即main()函数所在的CPP文件，头文件mytriangle.h只有函数声明；函数定义写在另一CPP文件mytriangle.cpp）
	//	3与4选一个完成
	//选3
	double cel = 0, fah = 0;
	cout << "请输入一个摄氏度：";
	cin >> cel;
	fah = celsius_to_fah(cel);
	cout << "对应的华氏度是：" << fah << endl;
	cout << "请输入一个华氏度：";
	cin >> fah;
	cel = fahrenheit_to_cels(fah);
	cout << "对应的摄氏度是：" << cel << endl;
	//	5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，问，第一天猴子共摘多少桃子（用递归实现）。
	int num_day = 0, total = 0;
	cout << "请输入最后一天的天数：";
	cin >> num_day;
	total = rec(num_day, total);
	cout << "总共摘了" << total << "个" << endl;

	return 0;
}