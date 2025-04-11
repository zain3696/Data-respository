#include<iostream>
using namespace std;
int main()
{
	int a=44,b=55;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swaping the value of a :"<<a<<"\n"<<"After swaping the value of b :"<<b;
	a+=b;
	a-=b;
	a*=b;
	a/=b;
	cout<<"\n"<<"The sum is:"<<a+b;
	cout<<"\n"<<"The subtruction is:"<<a-b;
	cout<<"\n"<<"The Multiplycation is:"<<a*b;
	cout<<"\n"<<"The Divion is:"<<a/b;
	return 0;
}
