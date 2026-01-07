#include<iostream>
using namespace std;
//定义一个长方形的类
class rect {
private:
	double length;
	double width;
	double height;
	double volume;
public:
	double cal_vol(double l, double w, double h);
};
//计算长方形体积，同时初始化长方形的数据
double rect::cal_vol(double l, double w, double h) {
	length = l;
	width = w;
	height = h;
	volume = l * w * h;
	return volume;
}
//定义一个长方形的结构体，用来放多个长方形，并规定个数为3个
struct rects {
	rect my_rects[3];
	int num = 0;
};
int main() {
	rects three_rects;
	double l, w, h;
	//循环输入数据，并在三个时跳出循环
	while (true) {
		cout << "请输入长方形的长宽高:  ";
		cin >> l >> w >> h;
		cout << "该长方形体积为：" << three_rects.my_rects[three_rects.num].cal_vol(l, w, h) << endl;//输出体积
		three_rects.num++;//长方形的个数加1
		if (three_rects.num == 3)//当个数为三时不再输入
		{
			break;
		}
	}
	return 0;
}