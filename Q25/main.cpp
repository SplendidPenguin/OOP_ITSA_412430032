#include <iostream>
using namespace std;

int main(void)
{
	int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if ((37 < x && x <= 70) || (150 < x)){ //測資好像會給61~69
            cout << "避免外出" << endl;
        } else {
             cout << "可依需要待在戶外" << endl;
        }
    }


	return 0;
}
