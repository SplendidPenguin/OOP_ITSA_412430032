#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double c, f;
    cin >> c;
	f = ((c*9)/5) + 32;
    cout.setf(ios::fixed);      //不要指數
    cout.setf(ios::showpoint);  //要小數點
    cout.precision(1);          //小數點後第1位
	cout << round(10*f)/10 << endl;
	return 0;
}
