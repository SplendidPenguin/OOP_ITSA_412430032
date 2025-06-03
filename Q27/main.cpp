#include <iostream>
using namespace std;

int main(void)
{
	int step0, step1, step2, num100, num10;
    cin >> step0;
	step1 = step0 % 100; //step1為step0 mod 100
    num100 = (step0 - step1)/100; //step0 - step1必能用10整除
    step2 = step1 % 10;//同理
    num10 = (step1 - step2)/10;//同理
    cout << "百元 " << num100 << endl;
    cout << "十元 " << num10 << endl;
    cout << "壹元 " << step2 << endl;
	return 0;
}
