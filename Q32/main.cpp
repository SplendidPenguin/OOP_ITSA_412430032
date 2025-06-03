#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int input, total = 0;
    vector<int> v;
    for (int i = 0; i < 6; i++) {
        cin >> input;
        v.push_back(input);
    }
	for (int i = 0; i < 6; i++) {
        total += v[i]*v[i];
    }
	cout << total << endl;
	return 0;
}
