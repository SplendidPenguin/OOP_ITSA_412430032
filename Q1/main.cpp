#include <iostream>
using namespace std;

int main(void)
{
	int h, l;
    double area;
    cin >> l >> h;
    area = (double)(h*l)/2;
    cout.setf(ios::fixed); //���n����
    cout.setf(ios::showpoint);  //�n�p���I
    cout.precision(1); //�p���I��1��
    cout << "Triangle area:" << area << endl;
	return 0;
}
