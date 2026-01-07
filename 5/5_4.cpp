//4、建立一个对象数组，内放5个学生的（学号，成绩），
// 设立一个函数max，用指向对象的指针作函数参数，
// 在max函数中找出5个学生的最高成绩者，并输出其学号。
#include<iostream>
#include<string>
using namespace std;
//定义学生对象
class student {
private:
	string number;
	double grade;
public:
	//构造函数
	student(string num, double gra) {
		number = num;
		grade = gra;
	};
	void showdata();
	double m_grade();
};
//显示对象的数据
void student::showdata() {
	cout << "学号:" << number << "\t" << "成绩:" << grade << endl;
}
//获取对象的成绩，用来比较最大值
double student::m_grade() {
	return grade;
}
//参数 对象数组的首地址 对象数组元素个数
//作用 获取成绩最高的人的数据
void max(student* stu ,int size) {
	static double max = stu->m_grade();
	static int max_num = 0;
	for (int i = 1; i < size; i++) {
		if (max < ((stu + i)->m_grade())) {
			max = (stu + i)->m_grade();
			max_num = i;
		}
	}
	cout << "成绩最高的学号及他的成绩是：";
	(stu + max_num)->showdata();
}
int main(){
	student stu_arr[] = {
		student("1",98),
		student("2",100),
		student("3",97),
		student("4",86),
		student("5",60)
	};
	int size = sizeof(stu_arr) / sizeof(stu_arr[0]);
	max(stu_arr, size);
	return 0;
}