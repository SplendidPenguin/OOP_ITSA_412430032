#include <iostream>
using namespace std;

int main(void)
{
	int n;
    double bmi;
    cin >> n;
	for (int i = 0; i < n; i++) {
        cin >> bmi;
        if (bmi < 18.5) {
            cout << "�魫�L��" << endl;
        } else if (18.5 <= bmi && bmi < 24) {
            cout << "���`" << endl;
        } else if (24 <= bmi && bmi < 28) {
            cout << "�魫�L��" << endl;
        } else {
            cout << "�έD" << endl;
        }
    }

	return 0;
}
