#include <iostream>
using namespace std;

int main(void)
{
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
        cin >> a;
        cout << a << " " << a*a << " " << a*a*a << endl;
    }
	return 0;
}
