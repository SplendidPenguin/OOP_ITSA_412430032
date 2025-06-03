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
        if(maxima < v[i]){ //如果v[i]比之前最大的數還大，代表v[i]是目前最大的
            maxima = v[i];
        }
    }
	cout << maxima << endl;
	return 0;
}
