#include <iostream>
using namespace std;

int main(void)
{
	int T, B, H;
    double area;
    cin  >> T >> B >> H;
    area = (double)(T+B)*H/2;
    cout.setf(ios::fixed); //���n����
    cout.setf(ios::showpoint);  //�n�p���I
    cout.precision(1); //�p���I��1��
    cout << "Trapezoid area:" << area <<endl;
	return 0;
}
