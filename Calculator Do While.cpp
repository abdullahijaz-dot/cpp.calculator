#include <iostream>
using namespace std;

int add(int a, int b);
int mul(int a, int b);
float divs(float a, float b);
int sub(int a,int b);
int fact(int a);
int mod(int a,int b);
int square(int a);
int cube(int a);

int main()
{
	
cout<<endl;
cout<<"=============================\n";
cout<<"Enter '+' for Addition       \n";
cout<<"Enter '-' for Subtraction    \n";
cout<<"Enter '*' for Multiplication \n";
cout<<"Enter '/' for Division       \n";
cout<<"Enter '%' for Modulus        \n";
cout<<"Enter 'F' for Factorial      \n";
cout<<"Enter 'S' for Square         \n";
cout<<"Enter 'C' for Cube           \n";
cout<<"=============================\n";

char n;
do
{
cout<<endl;
char choice;
cout<<"Enter the choice: \t";
cin>>choice;



switch (choice)
{

case '+':
	int a;
	int b;
	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<"Enter 2nd Number:\t";
	cin>>b;
	cout<<endl;
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<add(a,b);
	cout<<endl;
	break;
	
case '-':
	
	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<"Enter 2nd Number:\t";
	cin>>b;
	cout<<endl;
	cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<sub(a,b);
	cout<<endl;
	break;
	
case '*':

	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<"Enter 2nd Number:\t";
	cin>>b;
	cout<<endl;
	cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<mul(a,b);
	cout<<endl;
	break;
	
case '/':

	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<"Enter 2nd Number:\t";
	cin>>b;
	cout<<endl;
	cout<<"The division of "<<a<<" and "<<b<<" is "<<divs(a,b);
	cout<<endl;
	break;
	
case 'F':
	
	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<endl;
	cout<<"The Factorial of "<<a<<" is "<<fact(a);
	cout<<endl;
	break;
	
case 'S':
	
	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<endl;
	cout<<"The Square of "<<a<<" is "<<square(a);
	cout<<endl;
	break;
	
case 'C':
	
	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<endl;
	cout<<"The Cube of "<<a<<" is "<<cube(a);
	cout<<endl;
	break;
	
case '%':
	
	cout<<"Enter 1st Number: \t";
	cin>>a;
	cout<<"Enter 2nd Number:\t";
	cin>>b;
	cout<<endl;
	cout<<"The modulus of "<<a<<" and "<<b<<" is "<<mod(a,b);
	cout<<endl;
	break;

default:
	cout<<endl;
	cout<<"Invalid Choice. Please Try Again.\n";
	break;

}

cout<<endl;
cout<<"Do you want another calculation? (y/n)\t";
cin>>n;

}

while (n != 'n');

return 0;
}
int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int mul(int a, int b)
{
	int c;
	c=a*b;
	return c;
}
float divs(float a, float b)
{
	float c;
	c=a/b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int fact(int a)
{
	int fact=1;
	for (int i=a; i>=1; i--)
	fact=fact*i;
	return fact;
}
int mod(int a,int b)
{
	int c;
	c=a%b;
	return c;
}
int square(int a)
{
	int b;
	b=a*a;
	return b;
	
}
int cube(int a)
{
	int b;
	b=a*a*a;
	return b;
	
}
