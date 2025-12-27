#include<iostream>
using namespace std;
void Sort(int arr[],int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			int temp = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int  main() {
	//给定数组长度
	int len = 0;
	cout << "请输入一个数组长度:";
	cin >> len;
	//动态分配整型数组
	int* arr = new int[len];
	cout << "请输入一个整型数组:";
	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}
	Sort(arr,len);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";
	}
	delete[] arr;
	arr = nullptr;
	return 0;
}