#include <iostream>
using namespace std;

int main(void)
{
    int n, score;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score;
        if (90 <= score && score <= 100) {
            cout << "優等" << endl;
        } else if (80 <= score && score <= 89) {
            cout << "甲等" << endl;
        } else if (70 <= score && score <= 79) {
            cout << "乙等" << endl;
        } else if (60 <= score && score <= 69) {
            cout << "丙等" << endl;
        } else {
            cout << "不及格" << endl;
        }
    }


	return 0;
}
