#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a; //��mod����0
}


int main() {
    int m, n, res;
    cin >> m >> n;
    res = gcd(m ,n);
    cout << res << endl;
	return 0;
}
