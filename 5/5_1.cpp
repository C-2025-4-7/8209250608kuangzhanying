#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:          // 数据成员为私有的 (1)将数据成员改为私有的；
	int hour;
	int minute;
	int sec;
public:
	//(2)将输入和输出的功能改为由成员函数实现；
	//(3)在类体内定义成员函数
	void Settime(int h, int m, int s) {
		//输入时间
		hour = h;
		minute = m;
		sec = s;
	};
	void Showtime() {
		//输出时间
		cout << hour << ":" << minute << ":" << sec << endl;
	};
};


int main()
{
	Time t1;           //定义t1为Time类对象
	int H, M, S;
	cout << "请分别输入时分秒：";
	cin >> H >> M >> S;
	t1.Settime(H, M, S);
	t1.Showtime();
	return 0;
}