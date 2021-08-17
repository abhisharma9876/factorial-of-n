#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"enter the n";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		cout<<"fact is "<<fact<<endl;
		
	}
	return 0;
}
