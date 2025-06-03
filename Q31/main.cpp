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
        if(maxima < score) maxima = score; //тmax
    }
	cout << maxima << endl;
	cout << num900up << endl;
    cout << num600to700 << endl;
    cout.setf(ios::fixed); //ぃ璶计
    cout.setf(ios::showpoint); //璶计翴
    cout.precision(1); //计翴材1
    cout << round((total/n)*10)/10 << endl; //彼き计翴材1
	return 0;
}
