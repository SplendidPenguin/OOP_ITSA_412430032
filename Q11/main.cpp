#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double c, f;
    cin >> c;
	f = ((c*9)/5) + 32;
    cout.setf(ios::fixed);      //���n����
    cout.setf(ios::showpoint);  //�n�p���I
    cout.precision(1);          //�p���I���1��
	cout << round(10*f)/10 << endl;
	return 0;
}
