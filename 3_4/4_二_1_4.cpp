//(4)下面程序的主函数中能保证p[0]输出1，p[1]输出2吗？如何修改以保证之\
// （提示：在函数f中使用new生成动态数组；在main中用delete释放。）
//#include<iostream>
//using namespace std;
//int* f()
//{
//	int list[] = { 1,2,3,4 };
//	return list;
//}
//void main()
//{
//	int* p = f();
//	cout << p[0] << endl;
//	cout << p[1] << endl;
//}
#include<iostream>
using namespace std;
int* list;
int* f()
{
	list = new int[4] {1, 2, 3, 4};
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] list;
}