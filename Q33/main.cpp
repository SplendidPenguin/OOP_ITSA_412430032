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
        int total = 0; //brr���ثe����֥[
        for (int j = 0; j <= i; j++) {
            total += arr[j];
         }
        brr[i] = total;

    }
    for (int i = 0; i < n; i++) {
        cout << brr[i];
        if (i != n-1) { //�̫ᤣ�ΦL�Ů�
            cout << " ";
        }
    }
    cout << endl;
	return 0;
}
