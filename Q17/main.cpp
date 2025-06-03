#include <iostream>
using namespace std;

int main(void)
{
	char c;
    cin >> c;   //大小寫都要檢查
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "母音" << endl;
    } else {
        cout << "子音" << endl;
    }
	return 0;
}
