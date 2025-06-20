#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n, score, num900up = 0, num600to700 = 0, maxima = 0;
    double total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score;
        total += score;
        if (score >= 900) num900up++;
        if (600 <= score && score <= 700) num600to700++;
        if(maxima < score) maxima = score; //找max
    }
	cout << maxima << endl;
	cout << num900up << endl;
    cout << num600to700 << endl;
    cout.setf(ios::fixed); //不要指數
    cout.setf(ios::showpoint); //要小數點
    cout.precision(1); //小數點第1位
    cout << round((total/n)*10)/10 << endl; //四捨五入到小數點第1位
	return 0;
}
