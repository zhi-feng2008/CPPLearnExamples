#include <iostream>
using namespace std;

// �������壺���㲢�����������������ֵ
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    // ��������
    int number1, number2;

    // ������������
    cout << "��������������: ";
    cin >> number1 >> number2;

    // ʹ�������ж�
    if (number1 == number2) {
        cout << "��������ȡ�" << endl;
    } else {
        cout << "�ϴ������ " << max(number1, number2) << endl;
    }

    // ʹ��forѭ����ӡ��1��10����
    cout << "��1��10����: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // ʹ��whileѭ��ʵ�ּ򵥵ļ�����
    int counter = 5;
    cout << "����ʱ: ";
    while (counter > 0) {
        cout << counter << " ";
        counter--;
    }
    cout << "��ʼ!" << endl;

    return 0;
}
