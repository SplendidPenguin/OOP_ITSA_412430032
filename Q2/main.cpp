#include <iostream>
using namespace std;

int main(void)
{
	int T, B, H;
    double area;
    cin  >> T >> B >> H;
    area = (double)(T+B)*H/2;
    cout.setf(ios::fixed); //不要指數
    cout.setf(ios::showpoint);  //要小數點
    cout.precision(1); //小數點第1位
    cout << "Trapezoid area:" << area <<endl;
	return 0;
}
