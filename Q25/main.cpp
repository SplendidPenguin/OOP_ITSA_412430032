#include <iostream>
using namespace std;

int main(void)
{
	int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if ((37 < x && x <= 70) || (150 < x)){ //����n���|��61~69
            cout << "�קK�~�X" << endl;
        } else {
             cout << "�i�̻ݭn�ݦb��~" << endl;
        }
    }


	return 0;
}
