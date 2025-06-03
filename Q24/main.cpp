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
//キ:琌100ぃ琌400计┪セぃ琌4计
//秥:琌4ぃ琌100计┪琌400计
