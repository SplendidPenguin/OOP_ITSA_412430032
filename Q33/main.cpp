#include <iostream>
using namespace std;

int main(void)
{
	int n, input;
    cin >> n;
    int arr[n], brr[n];
	for (int i = 0; i < n; i++) {
        cin >> input;
        arr[i] = input;
        int total = 0; //brr為目前為止的累加
        for (int j = 0; j <= i; j++) {
            total += arr[j];
         }
        brr[i] = total;

    }
    for (int i = 0; i < n; i++) {
        cout << brr[i];
        if (i != n-1) { //最後不用印空格
            cout << " ";
        }
    }
    cout << endl;
	return 0;
}
