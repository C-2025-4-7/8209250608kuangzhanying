//(1)编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回 - 1。
// 在主程序中输入字符串s1与s2，调用函数实现。
//函数原型：int indexof(const char* s1, const char* s2);
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
	int size1, size2;
	size1 = strlen(s1);
	size2 = strlen(s2);
	cout << size1 << '\t' << size2 << endl;
	if (size1 == 0) return 0;//空串是任意字符串子串
	if (size1 > size2) return -1;//s1比s2长不可能是子串
	for (int i = 0; i <= size2 - size1; i++) {
		int j = 0;
		while (j < size1 && s1[j] == s2[j + i]) {
			j++;
		}
		if (j == size1) {
			return i;//返回下标(从0开始)
		}
	}
	return -1;
}
int main() {
	cout << "这是一个判断str1是否为str2的子串的函数" << endl;
	string str1, str2;
	cout << "请输入一串字符串str1：";
	getline(cin, str1);
	cout << str1 << endl;
	cout << "请输入一串字符串str2：";
	getline(cin, str2);
	cout << str2 << endl;
	cout << "indexof(str1,str2)的结果是：" << indexof(str1.c_str(), str2.c_str());
	return 0;
}