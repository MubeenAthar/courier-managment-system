#include"Header.h"
Person::Person(){};
Person::Person(string personName, int age)
{
	this->personName = personName;
	this->age = age;
}
void Person::SetName(string personName)
{
	this->personName = personName;
}
void Person::SetAge(int age)
{
	if (age > 0)
		this->age = age;
	else if (age < 0)
		cerr << "invalid age entered" << endl;
}
string Person::GetName()
{
	return personName;
}
int Person::GetAge()
{
	return age;
}
 ostream& operator<<(ostream& o, Person& P)
{
	 o << P.personName << endl;
	 o << P.age;
	 return o;
}
 istream& operator>>(istream& i, Person& P){
	 getline(i, P.personName);
	 i >> P.age;
	 return i;
 }