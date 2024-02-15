#include<iostream>
#include<string>
using namespace std;

class Dog
{
public:
	string name;
	string breed;
	int age = 0;
	void bark()
	{
		cout << name << " says Woof!" << endl;
		cout << endl;
	}
};

class Person
{
public:
	string name;
	int age = 0;
	Dog pet;
	void introduce_pet()
	{
		cout << "His Dog's name is " << pet.name << ". He is a " << pet.breed << " and is " << pet.age << " years old." << endl;
		pet.bark();
	}

	void introduce_person()
	{
		cout << "This is " << name << ". He is " << age << " years old. He has a dog named " << pet.name << endl;
	}
};

class House
{
public:
	string House_Type;
	Person person1;
	Person person2;
	Person person3;
	void introduce_house()
	{
		cout << "He lives in " << House_Type << endl;
	}
};

int main()
{
	House house1;
	house1.House_Type = "Apartment";
	house1.person1.name = "John";
	house1.person1.age = 30;
	house1.person1.pet.name = "Buddy";
	house1.person1.pet.age = 4;
	house1.person1.pet.breed = "Husky";
	house1.person1.introduce_person();
	house1.introduce_house();
	house1.person1.introduce_pet();

	
	House house2;
	house2.House_Type = "Pent House";
	house2.person2.name = "Dutch";
	house2.person2.age = 50;
	house2.person2.pet.name = "Shire";
	house1.person2.pet.age = 2;
	house1.person2.pet.breed = "PitBull";
	house2.person2.introduce_person();
	house2.introduce_house();
	house2.person2.introduce_pet();

	House house3;
	house3.House_Type = "Villa";
	house3.person3.name = "Aurthur";
	house3.person3.age = 40;
	house3.person3.pet.name = "Bolt";
	house1.person3.pet.age = 6;
	house1.person3.pet.breed = "German Shephard";
	house3.person3.introduce_person();
	house3.introduce_house();
	house3.person3.introduce_pet();

	return 0;
}