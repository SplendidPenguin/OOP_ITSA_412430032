#include <iostream>
using namespace std;

int main(void)
{
	char c;
    cin >> c;   //�j�p�g���n�ˬd
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "����" << endl;
    } else {
        cout << "�l��" << endl;
    }
	return 0;
}
