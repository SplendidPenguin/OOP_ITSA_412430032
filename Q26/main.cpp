#include <iostream>
using namespace std;

int main(void)
{
    int n, score;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score;
        if (90 <= score && score <= 100) {
            cout << "�u��" << endl;
        } else if (80 <= score && score <= 89) {
            cout << "�ҵ�" << endl;
        } else if (70 <= score && score <= 79) {
            cout << "�A��" << endl;
        } else if (60 <= score && score <= 69) {
            cout << "����" << endl;
        } else {
            cout << "���ή�" << endl;
        }
    }


	return 0;
}
