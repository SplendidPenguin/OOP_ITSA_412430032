#include <iostream>
using namespace std;

int main(void)
{
	int n, flag = 0;
    cin >> n;
    if(n < 2) cout << "NO" << endl;//1���O���
    for(int i = 2; i*i < n; i++) { //O(sqrtn)
        if (n%i == 0) { //��㰣�N���O���
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
