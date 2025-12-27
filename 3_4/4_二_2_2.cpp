//(2)编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。
//函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”); 返回165
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString){
	int sum = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++) {
		if (hexString[len - i - 1] >= '0' && hexString[len - i - 1] <= '9') {
			sum += (pow(16, i) * (hexString[len-i-1] - '0'));
		}
		else if (hexString[len-i-1] >= 'A' && hexString[len-i-1] <= 'F') {
			sum += (pow(16, i) * (10 + hexString[len-i-1] - 'A'));
		}
		else {
			cout << "输入了错误的16进制数" << endl;
		}
	}
	return sum;
}
int main() {
	string str;
	cout << "请输入一个16进制的数(A-F要大写)：";
	cin >> str;
	cout << "转为10进制的数后为：" << parseHex(str.c_str());
	return 0;
}