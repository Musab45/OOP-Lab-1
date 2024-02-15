#include<iostream>
#include<string>
using namespace std;

class Dog
{
public:
	string name;
	string breed;
	int age;
	void bark()
	{
		cout << name << " says Woof!" << endl;
	}
};

class Person
{
public:
	string name;
	Dog pet;
	void introduce_pet()
	{
		cout << "My Dog's name is " << pet.name << ". He is a " << pet.breed << " and is " << pet.age << " years old." << endl;
		pet.bark();
	}
};

int main()
{
	Person person1;
	person1.name = "John";
	person1.pet.name = "Buddy";
	person1.pet.breed = "Husky";
	person1.pet.age = 3;
	person1.introduce_pet();
	return 0;
}