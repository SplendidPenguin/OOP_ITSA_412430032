#include <iostream>
using namespace std;

int main(void)
{
    int n, a, b;
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << (a + b) * (a + b) << endl;
    }


	return 0;
}
