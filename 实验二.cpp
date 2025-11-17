#include<iostream>
using namespace std;

void captital()
{
	char a;
	cout << "请输入一个字符:";
	cin >> a;
	if ('a' <= a && a <= 'z') {
		cout << (char)(a + 'A' - 'a');
	}
	else {
		cout << 'a' + 1;
	}
}
void piecewise_function() {
	double x, y = 0;
	cout << "请输入x的值：";
	cin >> x;
	if (0 < x && x < 1) {
		y = 3 - 2 * x;
	}
	else if (1 <= x && x < 5) {
		y = 2 / (4 * x);
	}
	else if (5 <= x && x < 10) {
		y = x * x;
	}
	cout << y;
}
void triangle() {
	double C = 0;
	double x = 0, y = 0, z = 0;
	cout << "请输入三角形三条边长：";
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x) {
		C = x + y + z;
		cout << "三角形周长为：" << C << endl;
		if (x == y || x == z || y == z) {
			cout << "该三角形是等腰三角形";
		}
	}
	else {
		cout << "无法构成三角形";
	}
}
double calculate () {
	double num1, num2, result;
	char op;

	cout << "=== 简易计算器 ===" << endl;
	cout << "请输入算式（格式：数字 运算符 数字，例：3 + 5）：";
	cin >> num1 >> op >> num2;
	result = 0;
	switch (op) {
	case '+': result = num1 + num2; break;
	case '-': result = num1 - num2; break;
	case '*': result = num1 * num2; break;
	case '/':
		if (num2 == 0) {
			cout << "错误！除数不能为0" << endl;  // 直接结束程序
		}
		result = num1 / num2;
		break;
	default:
		cout << "错误！运算符只能是 +、-、*、/ " << endl;
		return 0;
	}

	cout << "结果：" << num1 << " " << op << " " << num2 << " = " << result << endl;
	return result;
}
void read() {
	char c;
	int letters = 0;    // 英文字母个数
	int spaces = 0;     // 空格个数
	int digits = 0;     // 数字字符个数
	int others = 0;     // 其他字符个数

	cout << "请输入一行字符（以回车结束）: " << endl;

	// 使用cin.get()逐个读取字符，直到遇到换行符'\n'
	while ((c = cin.get()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			// 判断是否为英文字母
			letters++;
		}
		else if (c >= '0' && c <= '9') {
			// 判断是否为数字字符
			digits++;
		}
		else if (c == ' ') {
			// 判断是否为空格
			spaces++;
		}
		else {
			// 其他字符
			others++;
		}
	}

	// 输出统计结果
	cout << "统计结果：" << endl;
	cout << "英文字母个数: " << letters << endl;
	cout << "空格个数: " << spaces << endl;
	cout << "数字字符个数: " << digits << endl;
	cout << "其他字符个数: " << others << endl;

}
void divisor_multiple() {
	int a, b, c, d, e;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	cout << endl;
	int x = 0, y = 0;
	x = a < b ? b : a;
	y = a > b ? b : a;
	//辗转相除法
	while (x % y != 0) {
		e = x % y;
		x = y;
		y = e;
	}
	c = y;
	d = a * b / c;
	cout << a << "和" << b << "的";
	cout << "最大公约数是：" << c;
	cout << "最小公倍数是：" << d;
}
void print() {
	for (int i = 1; i <= 5; i++) {
		int x = 0;
		while (x < i) {
			cout << "*";
			x++;
		}
		cout << endl;
	}
}
double rooting() {
	double a = 0, x = 1, temp = 0;
	cout << "请输入一个正数：";
	cin >> a;
	while ((x - temp) > 0.00001 || (temp - x) > 0.00001) {
		temp = x;
		x = (temp + a / temp) / 2;
	}
	cout << "该数的平方根是" << x;
	return x;
}
void interest() {
	double price = 0.8;
	int day = 0;
	int total = 0;
	for (int num = 2; num <= 100; num *= 2) {
		total += num;
		day++;
	}
	double average = 0;
	average = total * price / day;
	cout << "每天平均花" << average << "元";
}

int main() {
	captital();
	cout << endl;
	piecewise_function();
	cout << endl;
	triangle();
	cout << endl;
	calculate();
	cout << endl;
	read();
	cout << endl;
	divisor_multiple();
	cout << endl;
	print();
	cout << endl;
	rooting();
	cout << endl;
	interest();
}