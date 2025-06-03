#include <iostream>
using namespace std;

int main(void)
{
	int T, B, H;
    double area;
    cin  >> T >> B >> H;
    area = (double)(T+B)*H/2;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Trapezoid area:" << area <<endl;


	return 0;
}
