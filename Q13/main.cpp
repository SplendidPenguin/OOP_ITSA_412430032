#include <iostream>
using namespace std;

int main(void)
{
	int des, t;
    cin >> des;
	t = (double)des/(1-(0.0254*30)); //V��*t = V�L*t + �Z���t�Z
	cout << t+1 << endl; //t�Oint�|�L����˥h�A�ҥH�n+1
	return 0;
}
