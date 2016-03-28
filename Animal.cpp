#include <string>
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(string type, string WhatItDo)
	{
		Name = type;
		Does = WhatItDo;
	}
	~Animal()
	{

	}
	string name()
	{
		return Name;
	}
	string does()
	{
		return Does;
	}
private:
	string Name;
	string Does;

};
class Bird :public virtual Animal      
{

public:

	Bird(string AniName, string job) :Animal(AniName, job)
	{
        
	};
	~Bird()
	{

	};
	void print()
	{
cout <<name() << does() << endl;
	}
	
};
class Dog :public virtual Animal
{

public:

	Dog(string AniName, string job) :Animal(AniName, job)
	{
		
	};
	~Dog()
	{

	};
	void print()
	{
     cout << name() << does() << endl;
	}

};

int main()
{
	Dog a("Dog","Bark");
	Bird b("Bird","Fly");
	
	a.print();
	b.print();



}

