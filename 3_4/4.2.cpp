#include<iostream>
using namespace std;
//2、起泡排序：
//利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。每趟处理中，对相邻元素进行比较。若为降序，则交换；否则，保持原顺序。此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部。
//算法可描述如下：
int main() {
	int list[] = { 1,3,5,8,4,7,8,6 };
	int listSize = sizeof(list) / sizeof(list [0] );
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
	for (int element : list) {
		cout << element << "\t";
	}
	return 0;
}
