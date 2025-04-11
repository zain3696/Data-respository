// Simple Calculator 
#include<iostream>
using namespace std;
int main()
{
   int a,b;
   char oper;
   cout<<"Enter the first namber u MR :";
   cin>>a;
    cout<<"Enter the second namber u MR :";
   cin>>b;
    cout<<"Select the operator(-,+,*,/)";
   cin>>oper;
   switch (oper)
   {
   	  case ('+'):
   	  cout<<"The sum of "<<a<<"+"<<b<<"is:"<<a+b<<endl;
   	  break;
   	 case ('-'):
   	  cout<<"The subtruction of "<<a<<"-"<<b<<"is:"<<a+b<<endl;
   	  break;
   	 case ('*'):
      cout<<"The multiplycation of "<<a<<"*"<<b<<"is:"<<a+b<<endl;
   	  break;
   	  if (b==0)
   	 {
		case ('/'):
      cout<<"The deivion of "<<a<<"/"<<b<<"is:"<<a+b<<endl;
   	  break;
      } 
   	  default:
   	  	cout<<"Invalid operator"<<endl;
   }
    return 0;
}
