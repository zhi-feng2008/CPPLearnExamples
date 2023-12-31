#include <iostream>
using namespace std;

// 函数定义：计算并返回两个整数的最大值
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    // 声明变量
    int number1, number2;

    // 输入两个整数
    cout << "请输入两个整数: ";
    cin >> number1 >> number2;

    // 使用条件判断
    if (number1 == number2) {
        cout << "两个数相等。" << endl;
    } else {
        cout << "较大的数是 " << max(number1, number2) << endl;
    }

    // 使用for循环打印从1到10的数
    cout << "从1到10的数: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 使用while循环实现简单的计数器
    int counter = 5;
    cout << "倒计时: ";
    while (counter > 0) {
        cout << counter << " ";
        counter--;
    }
    cout << "开始!" << endl;

    return 0;
}
