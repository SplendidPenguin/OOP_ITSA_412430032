#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int t;
    double cost;
    cin >> t;
    cost = t*0.9;
    cout.setf(ios::fixed);      //���n����
    cout.setf(ios::showpoint);  //�n�p���I
    cout.precision(1);          //�p���I���1��
	if(t <= 800) {
        cout << round(cost*10)/10 << endl;
    } else if (800 < t && t < 1500) {
        cost = cost*0.9;
        cout << round(cost*10)/10 << endl;
    } else {
        cost = cost*0.79;
        cout << round(cost*10)/10 << endl;
    }

	return 0;
}
