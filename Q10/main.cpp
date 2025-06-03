#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int x;
    double y;
    cin >> x;
    y = (double)x * 1.6;
    y = round(y*10)/10;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "km=" << y << endl;


	return 0;
}
