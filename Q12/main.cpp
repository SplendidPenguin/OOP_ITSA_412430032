#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int w, h;
    double bmi;
    cin >> w >> h;
    bmi = ((double)w)/((((double)h)/100)*(((double)h)/100));
    cout.setf(ios::fixed);      //不要指數
    cout.setf(ios::showpoint);  //要小數點
    cout.precision(2);          //小數點後第2位
    cout << (round(bmi*100))/100 <<endl; //四捨五入道第2位


	return 0;
}
