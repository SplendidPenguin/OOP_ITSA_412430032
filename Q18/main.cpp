#include <iostream>
using namespace std;

int main(void)
{
	int n, flag = 0;
    cin >> n;
    if(n < 2) cout << "NO" << endl;//1不是質數
    for(int i = 2; i*i < n; i++) { //O(sqrtn)
        if (n%i == 0) { //能整除代表不是質數
            flag = 1;
            break;
        }
    }
	if (flag) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

	return 0;
}
