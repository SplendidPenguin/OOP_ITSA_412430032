#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int t;
    double cost;
    cin >> t;
    cost = t*0.9;
    cout.setf(ios::fixed);      //不要指數
    cout.setf(ios::showpoint);  //要小數點
    cout.precision(1);          //小數點後第1位
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
