#include <iostream>
using namespace std;

int main(void)
{
	int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){ //°õ¦æn¦¸
        cin >> x;
        if (50 <= x && x <= 70) {
            cout << x << endl;
        } else {
            cout << 100 << endl;
        }
    }


	return 0;
}
