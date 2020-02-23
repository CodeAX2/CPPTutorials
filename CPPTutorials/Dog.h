#ifndef __DOG__
#define __DOG__

#include <iostream>
using namespace std;

class Dog {

private:
	int age;
	string name;

public:

	Dog(int age, string name);

	void bark();
	void setAge(int newAge);
	void setName(string newName);

	~Dog();

};


#endif // !__DOG__