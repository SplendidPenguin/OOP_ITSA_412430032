#include <iostream>
using namespace std;

int main(void)
{
	int h, l;
    double area;
    cin >> l >> h;
    area = (double)(h*l)/2;
    cout.setf(ios::fixed); //不要指數
    cout.setf(ios::showpoint);  //要小數點
    cout.precision(1); //小數點第1位
    cout << "Triangle area:" << area << endl;
	return 0;
}
