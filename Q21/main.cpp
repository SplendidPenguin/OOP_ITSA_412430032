#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, input, maxima;
    cin >> n;
    vector<int> v;
    //input
    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }
	maxima = v[0];
    for (int i = 0; i < n; i++) {
        if(maxima < v[i]){ //�p�Gv[i]�񤧫e�̤j�����٤j�A�N��v[i]�O�ثe�̤j��
            maxima = v[i];
        }
    }
	cout << maxima << endl;
	return 0;
}
