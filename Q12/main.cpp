#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int w, h;
    double bmi;
    cin >> w >> h;
    bmi = ((double)w)/((((double)h)/100)*(((double)h)/100));
    cout.setf(ios::fixed);      //���n����
    cout.setf(ios::showpoint);  //�n�p���I
    cout.precision(2);          //�p���I���2��
    cout << (round(bmi*100))/100 <<endl; //�|�ˤ��J�D��2��


	return 0;
}
