#include <iostream>
using namespace std;

int main(void)
{
	int step0, step1, step2, num100, num10, total;
    cin >> step0;
	step1 = step0 % 100; //step1��step0 mod 100
    num100 = (step0 - step1)/100; //step0 - step1�����10�㰣
    step2 = step1 % 10;//�P�z
    num10 = (step1 - step2)/10;//�P�z
	total = num100*num100*num100 + num10*num10*num10 + step2*step2*step2;
    if (total == step0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

	return 0;
}
