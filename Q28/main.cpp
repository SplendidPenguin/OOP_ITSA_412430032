#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%2 == 1) { //�_��
            cout << i ;
            if (i != n-1 && i != n) { //�̫ᤣ�L�Ů�
                cout << " ";
            }
        }
    }
	cout << endl;

	return 0;
}
