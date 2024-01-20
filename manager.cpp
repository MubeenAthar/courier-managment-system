#include"Header.h"
Manager::Manager(){}
Manager::Manager(int managerId, Person person)
{
	SetmanagerId(managerId);
	SetPerson(person);
}
void Manager::SetmanagerId(int managerId)
{
		this-> managerId = managerId;
}
int Manager::GetId()
{
	return managerId;
}
void Manager::SetPerson(Person person)
{
	this->person = person;
}
Person Manager::GetPerson()
{
	return person;
}
ostream& operator<<(ostream& o, Manager& M)
{
	o << "name & age:" << endl;
	o<< M.person << endl;
	o<<"Id: "<< M.managerId << endl;
	return o;
}
istream& operator>>(istream& i, Manager& M)
{
	cout << "enter name and age " << endl;
	i >> M.person;
	cout << "enter Manager id " << endl;
	i >> M.managerId;
	return i;
}