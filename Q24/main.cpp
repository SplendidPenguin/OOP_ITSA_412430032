#include <iostream>
using namespace std;

int main(void)
{
	int year, flag1 = 0, flag2 = 0, flag3 = 0;
    cin >> year;
    if(year%4 == 0) flag1++;
	if(year%100 == 0) flag2++;
	if(year%400 == 0) flag3++;
    if ((flag1 && !flag2) || flag3) cout << "Bissextile Year" << endl;
    if ((flag2 && !flag3) || !flag1) cout << "Common Year" << endl;
	return 0;
}
//平年:是100但不是400的倍數或根本不是4的倍數
//閏年:是4但不是100的倍數或是400的倍數
