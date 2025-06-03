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
            cout << "體重過輕" << endl;
        } else if (18.5 <= bmi && bmi < 24) {
            cout << "正常" << endl;
        } else if (24 <= bmi && bmi < 28) {
            cout << "體重過重" << endl;
        } else {
            cout << "肥胖" << endl;
        }
    }

	return 0;
}
