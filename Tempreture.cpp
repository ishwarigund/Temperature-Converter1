#include<iostream>
using namespace std;
class Tempreture 
{
	float fahr,cel;
	public:
		void Cel_to_Fahr();
		void Fahr_to_Cel();
};

void Tempreture::Cel_to_Fahr()
{
	cout<<"Enter the tempreture in Celcious:";
	cin>>cel;
	fahr=(1.8*cel)+32.0;
	cout<<"Tempreture in Degree Fahrenheit:"<<fahr<<" F"<<endl;
}

void Tempreture::Fahr_to_Cel()
{
	cout<<"Enter the tempreture in Fahrenheit:";
	cin>>fahr;
	cel=(fahr-32)/1.8;
	cout<<"Tempreture in Degree Celcious:"<<cel<<" C"<<endl;
}


int main()
{
	Tempreture ob;
	int ch;
	while(1)
	{
		cout<<"\nHERE IS THE MENU FOR YOU"<<endl;
		cout<<"\n***********************************"<<endl;
		cout<<"1 Celcious to Fahrenhiet"<<endl;
		cout<<"2 Fahrenhiet to celcious"<<endl;
		cout<<"\n***********************************"<<endl;
		cout<<"Enter your choice:"<<endl;
	  cin>>ch;
	   switch(ch)
	   {
	   	   case 1:ob.Cel_to_Fahr();
	   	           break;
	   	           
	   	   case 2:ob.Fahr_to_Cel();
	   	           break;
	   	
	   }
	}
	
}
