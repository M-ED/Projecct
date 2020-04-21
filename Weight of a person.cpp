#include<iostream>
using namespace std;
main()
{
	int feet,inch;
	cout<<"Enter Height of person in feet and inches."<<endl;
	cout<<"Feet : ";
	cin >>feet;
	cout<<"Inches : ";
	cin >>inch;
	int weight=110;
	
	
	if(feet==5)
	{
		for(int i=1;i<=inch;i++)
		{
			weight=weight + 5;
		}
		
		cout<<"Weight in Pounds : "<<weight;
	}
	else if(feet>5)
	{
		int ex=feet-5;
		for(int i=1;i<=ex;i++)
		{
			weight=weight + 60;
		}
		for(int i=1;i<=inch;i++)
		{
			weight=weight + 5;
		}
		
		cout<<"Weight in Pounds : "<<weight;
	}
	else
	{
		cout<<"Error! Person is less than 5 feet.";
	}
}
