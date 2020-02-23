#include "Dog.h"


Dog::Dog(int age, string name) {

	this->age = age;
	this->name = name;

}

void Dog::bark() {

	cout << "Woof! My name is " << name << endl;

}

void Dog::setAge(int newAge) {
	age = newAge;
}

void Dog::setName(string newName) {
	name = newName;
}


Dog::~Dog() {

	cout << name << " was destroyed!" << endl;

}