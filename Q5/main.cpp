#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
    if(a >= 0) {
         cout << a << "/" << b << "=" << a / b << "..." << a % b << endl;
    } else {
         cout << a << "/" << b << "=" << (a / b) - 1 << "..." << (-a) % b << endl;
    }

	return 0;
}
