#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    double W, area;
    cin >> n;
	for (int i = 0; i < n; i++) {
        cin >> W;
        area = W*W;
        double rounded = round(area * 10) / 10.0;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << rounded << endl;
    }


	return 0;
}
