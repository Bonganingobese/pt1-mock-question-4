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
	virtual string name() = 0;
	virtual string does() = 0;
private:
	string Name;
	string Does;

};

