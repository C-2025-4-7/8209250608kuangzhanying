#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	//构造函数
	Point(int X, int Y) {
		x = X;
		y = Y;
	};
	void setPoint(int i, int j);
	void display();
};
//修改坐标
void Point::setPoint(int i, int j) {
	x += i;
	y += j;
}
//显示坐标
void Point::display() {
	cout << "(" << x << "," << y << ")" << endl;
}
int main() {
	//初始化定义
	Point p(60, 80);
	p.display();
	//修改后
	p.setPoint(6, 8);
	p.display();
	return 0;
}