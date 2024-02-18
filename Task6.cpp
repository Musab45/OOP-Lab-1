#include<iostream>
using namespace std;

class vehicle
{
private:
	string make;
	string model;
	int year;
public:
	vehicle(string mk,string mdl,int yr):make(mk),model(mdl),year(yr){}
	void setMake(string mk)
	{
		make = mk;
	}
	void setModel(string mdl)
	{
		model = mdl;
	}
	void setYear(int yr)
	{
		year = yr;
	}
	void displayinfo()
	{
		cout << "Make: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
	}
};

int main()
{
	vehicle myVehicle("Porsche", "911", 2023);
	myVehicle.displayinfo();
    return 0;
}