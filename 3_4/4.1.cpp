#include<iostream>
using namespace std;
int main() {
	//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
	/*提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。*/
	double arr[10];
	cout << "enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	int count = 0;
	for (int i = 1; i < 10; i++) {
		for (int j=0; j < i; j++) {
			if (arr[i] == arr[j]) {
				break;
			}
			else if (j + 1 == i) {
				count++;
				arr[count] = arr[i];
			}
		}
	}
	for (int i = 0; i < count+1;i++) {
		cout << arr[i]<<"\t";
	}
	
}