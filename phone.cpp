#include <iostream>
using namespace std;
struct phone
{
	int area_code,exchange,number;
};
int main()
{
	phone a,b;
	a.area_code=212;
	a.exchange=767;
	a.number=8900;
	cout<<"Enter your areacode,exchange, and number ";
	cin>>b.area_code>>b.exchange>>b.number;
	cout<<"My Number is ("<<a.area_code<<") "<<a.exchange<<"-"<<a.number<<"\n";
	cout<<"Your Number is ("<<b.area_code<<") "<<b.exchange<<"-"<<b.number;
	return 0;	
}
