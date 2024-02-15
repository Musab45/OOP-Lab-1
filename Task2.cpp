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
		cout << "My Dog's name is " << pet.name << ". He is a " << pet.breed << " and is " << pet.age << " years old." << endl;
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
	Person person1;
	Person person2;
	Person person3;
};

int main()
{
	House house;
	house.person1.name = "John";
	house.person1.age = 30;
	house.person1.pet.name = "Buddy";
	house.person1.introduce_person();
	
	
	house.person2.name = "Dutch";
	house.person2.age = 50;
	house.person2.pet.name = "Shire";
	house.person2.introduce_person();
	
	house.person3.name = "Aurthur";
	house.person3.age = 40;
	house.person3.pet.name = "Bolt";
	house.person3.introduce_person();
	return 0;
}