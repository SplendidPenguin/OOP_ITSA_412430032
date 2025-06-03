#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n, i;
    long long b;
	cin >> n;
    for (int a = 0; a < n; a++){
        cin >> i;
        b = 1 << i; //b = pow(2, i);
        if (i > 31) cout << "Value of more than 31" << endl;
        else cout << b << endl;
    }

	return 0;
}
