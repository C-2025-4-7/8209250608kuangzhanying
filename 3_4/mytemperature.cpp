#include<iostream>
using namespace std;
//摄氏温度到华氏温度
double celsius_to_fah(double cel) {
	double fah = 0;
	fah = cel * 1.8 + 32;
	return fah;
}
//华氏温度到摄氏温度
double fahrenheit_to_cels(double fah) {
	double cel = 0;
	cel = (fah - 32) / 1.8;
	return cel;
}