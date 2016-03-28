#include <string>
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
		return	Name;
	}
	string does()
	{
		return Does;
	}
private:
	string Name;
	string Does;

};



