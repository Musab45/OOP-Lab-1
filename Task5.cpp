#include<iostream>
using namespace std;

class pet
{
public:
	string name;
	string breed;
	int age;
};

class person
{
public:
	string name;
	int age;
	pet dog;
};

class house
{
public:
	string house_type;
	person man;
};

class neighbourhood
{
public:
	string name;
	house house1;
	house house2;

	void introduce()
	{
		cout << "In " << name << " is a " << house1.house_type << " and  a " << house2.house_type << "." << endl;
		cout << "In " << house1.house_type << " lives " << house1.man.name << " who is " << house1.man.age << " years old." << endl;
		cout << house1.man.name << " has a " << house1.man.dog.breed << " named " << house1.man.dog.name << ". It is " << house1.man.dog.age << " years old." << endl;
		cout << "In " << house2.house_type << " lives " << house2.man.name << " who is " << house2.man.age << " years old." << endl;
		cout << house2.man.name << " has a " << house2.man.dog.breed << " named " << house2.man.dog.name << ". It is " << house2.man.dog.age << " years old." << endl;
	}
};

int main()
{
	//Object Creation
	neighbourhood neighbourhood1;
	//Neighbourhood Data
	neighbourhood1.name = "Block 1";
	//House Data
	neighbourhood1.house1.house_type = "FarmHouse ";

	neighbourhood1.house2.house_type = "Penthouse ";
	//Person Data
	neighbourhood1.house1.man.name = "Peter";
	neighbourhood1.house1.man.age = 35;

	neighbourhood1.house2.man.name = "John";
	neighbourhood1.house2.man.age = 23;
	//Dog Data
	neighbourhood1.house1.man.dog.name = "Cupcake";
	neighbourhood1.house1.man.dog.breed = "Husky";
	neighbourhood1.house1.man.dog.age = 3;

	neighbourhood1.house2.man.dog.name = "Princess";
	neighbourhood1.house2.man.dog.breed = "German Shephard";
	neighbourhood1.house2.man.dog.age = 7;

	neighbourhood1.introduce();
}