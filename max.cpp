#include<iostream>
using namespace std;
int main()
{
	int a[5]={25,45,14,63,95};
	int max=a[0];
	int min=a[0];
	for(int i=1;i<5;i++)
	{					
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	cout<<max<<endl<<min;
}
