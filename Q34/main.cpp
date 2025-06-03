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
        if(i == 0) { //brr[0]為arr[0]
            brr[i] = arr[i];
        } else { //其他為目前-前一項
            brr[i] = arr[i] - arr[i-1];
        }
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
