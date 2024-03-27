#include<iostream>
using namespace std;
int addition(int a,int b)
{
	cout<<a+b;
}
int main()
{
	int x,y,result;
	cout<<"\n Enter value for x:";
	cin>>x;
	cout<<"\n Enter value for y:";
	cin>>y;
	addition(x,y);
}
