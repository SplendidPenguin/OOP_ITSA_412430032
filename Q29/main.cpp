#include <iostream>
using namespace std;

int main(void)
{
	int step0, step1, step2, num100, num10, total;
    cin >> step0;
	step1 = step0 % 100; //step1為step0 mod 100
    num100 = (step0 - step1)/100; //step0 - step1必能用10整除
    step2 = step1 % 10;//同理
    num10 = (step1 - step2)/10;//同理
	total = num100*num100*num100 + num10*num10*num10 + step2*step2*step2;
    if (total == step0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

	return 0;
}
