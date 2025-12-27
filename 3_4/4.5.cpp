#include<iostream>
#include <cstring>  // 使用 strlen
using namespace std;
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
//编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。
// 第一种
//int indexOf(const char s1[], const char s2[]){
//		// 使用 strlen 获取实际字符串长度
//		int len1 = strlen(s1);
//		int len2 = strlen(s2);
//		// 特殊情况处理
//		if (len1 == 0) return 0;  // 空串是任何字符串的子串
//		if (len1 > len2) return -1;
//
//		// 主匹配循环
//		for (int i = 0; i <= len2 - len1; i++) {  // 注意：<=
//			int j = 0;
//			// 逐个字符比较
//			while (j < len1 && s2[i + j] == s1[j]) {
//				j++;
//			}
//			// 如果完全匹配
//			if (j == len1) {
//				return i;  // 返回下标（从0开始）
//			}
//		}
//		return -1;
//}
//第二种
int indexOf(const char s1[], const char s2[]){
 	int size1=0, size2=0;
	size1 = strlen(s1);
	size2 = strlen(s2);
	cout << size1 << "\t" << size2 << endl;
	if (size1 > size2) {
		return -1;
	}
	for (int i = 0; i < size2 - size1; i++) {
		if (s2[i]==' ') {
			continue;
		}
		int j = 0;
		int k = i;
		while (s2[k]==s1[j]) {
			if (j == size1 - 1) {
				return i ;// 返回下标（从0开始）
			}
			k++;
			j++;
		}
	}
	return -1;
 
 }


//缺点：都无法区分大小写
int main() {
	cout << "Enter the first string : welcome" << endl;
	cout << "Enter the second string : We welcome you!" << endl;
	cout << "indexOf(welcom,We welcome you!) is:" << indexOf("welcome", "We welcome you!");
	return 0;

}