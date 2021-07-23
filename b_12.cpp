#include <iostream>
using namespace std;
int main(){
	int x,n;
	cout<<"Enter n : ";
	cin>>n;
	long long unsigned a = 0;
	long long unsigned b = 1;
	
	int dem = 2;
	
	if (n == 2)
	{
		cout<<a<<" "<<b<<"\n";
	}
	else if (n == 1)
		cout<<a<<"\n";
	else
	{
		cout<<a<<" "<<b<<" ";
		while (dem <= (n - 1))
		{
			x = b;
			b = b + a;
			a = x;
			dem = dem + 1;
			cout<<b<<" ";	
		
		}
	}
	system("pause");
	return 0;
}
