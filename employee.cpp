#include"Header.h"
Employee::Employee(){}
Employee::Employee(int employeeId, Person person)
{
	this->employeeId = employeeId;
	this->person = person;
}
void Employee::SetEmployeeId(int employeeId)
{
	if (employeeId > 0)
		this->employeeId = employeeId;
	else if (employeeId < 0)
		cerr << "invalid age entered" << endl;
}
int Employee::GetId()
{
	return employeeId;
}
void Employee::SetPerson(Person person)
{
	this->person = person;
}
Person Employee::GetPerson()
{
	return person;
}
ostream& operator<<(ostream& o, Employee& e)
{
	o << "name & age:" << endl;
	o<< e.person << endl;
	o << "Id: " << e.employeeId << endl;
	return o;
}
istream& operator>>(istream& i, Employee& e)
{
	cout << "enter name and age " << endl;
	i >> e.person;
	cout << "enter Employee id " << endl;
	i >> e.employeeId;
	return i;
}