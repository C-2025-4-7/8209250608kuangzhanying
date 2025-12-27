#include<iostream>
#include <cctype>  // 为了使用 tolower() 函数
#include<stdio.h>
using namespace std;
//6、字符串中每个字母出现的次数：
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。
//const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。
//字母不分大小写，例如字母A和字母a都被看作a。

// 统计字符串中每个字母出现的次数
void count(const char s[], int counts[]) {
    // 初始化 counts 数组为0
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // 遍历字符串中的每个字符
    int i = 0;
    while (s[i] != '\0') {
        char ch = s[i];

        // 将字符转换为小写
        ch = tolower(ch);

        // 如果是字母，统计次数
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';  // 计算字母对应的索引
            counts[index]++;       // 对应字母计数加1
        }
        i++;
    }
}

// 测试函数
int main(){
    char str[100];
    cout << "Enter a string:";
    fgets(str, 100, stdin);
    int letterCounts[26];
    // 调用统计函数
    count(str, letterCounts);
    // 输出结果
    cout << "字母出现次数统计：" << endl;
    for (int i = 0; i < 26; i++) {
        if (letterCounts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << letterCounts[i] << "times" << endl;
        }
    }
    return 0;
}