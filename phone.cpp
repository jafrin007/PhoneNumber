#include <iostream>
using namespace std;
struct Phone
{
	int area_code,exchange,number;
};
int main()
{
	Phone a,b;
	a.area_code=212;
	a.exchange=767;
	a.number=8900;
	cout<<"Enter your Areacode,Exchange, and Number ";
	cin>>b.area_code>>b.exchange>>b.number;
	cout<<"My number is ("<<a.area_code<<") "<<a.exchange<<"-"<<a.number<<"\n";
	cout<<"Your number is ("<<b.area_code<<") "<<b.exchange<<"-"<<b.number;
	return 0;	
}
