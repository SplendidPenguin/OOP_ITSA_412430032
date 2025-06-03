#include <iostream>
using namespace std;

int main(void)
{
	int des, t;
    cin >> des;
	t = (double)des/(1-(0.0254*30)); //V我*t = V他*t + 距離差距
	cout << t+1 << endl; //t是int會無條件捨去，所以要+1
	return 0;
}
