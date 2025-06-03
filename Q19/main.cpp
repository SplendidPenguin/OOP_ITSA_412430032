#include <iostream>
using namespace std;

int main(void)
{
    int n, total;
	cin >> n;
    total = n*100;
	if (n < 10) {
    //不做任何事
    } else if (10 <= n && n < 30) {
        total *= 0.9;
    } else if (30 <= n && n < 100) {
        total *= 0.8;
    } else if (n > 100) {
        total *= 0.7;
    }
	cout << total << endl;
	return 0;
}
