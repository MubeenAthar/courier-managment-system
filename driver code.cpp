#include"Header.h"
int main() 
{
int choice;
Person person;
int managerId, employeeId, age;
string personName;
cout << "\t\t\t\t\t\t____________________________" << endl;
cout << "\t\t\t\t\t\t welcome to couring company " << endl;
cout << "\t\t\t\t\t\t____________________________" << endl << endl << endl;
cout << "\t\t\t\t\t\t\t**************" << endl;
cout << "\t\t\t\t\t\t\t* LOGIN PAGE *" << endl;
cout << "\t\t\t\t\t\t\t**************" << endl<<endl<<endl;
cout << "enter your name " << endl;
getline(cin, personName);
cout << "enter your age " << endl;
cin >> age;
person.SetAge(age);
person.SetName(personName);
cout << "press 1 if you are employee and 2 for manager " << endl;
cin >> choice;
if (choice == 1)
{
	Employee e1;
	cout << "enter employee id:" << endl;
	cin >> employeeId;
	e1.SetEmployeeId(employeeId);
	e1.SetPerson(person);
	cout << "\t\t\tWELLCOME EMPLOYEE " << endl;
	cout << e1;
}
else if (choice == 2)
{
	Manager m1;
	cout << " enter manager id " << endl;
	cin >> managerId;
	m1.SetmanagerId(managerId);
	m1.SetPerson(person);
	cout << "\t\t\t WELLCOME MANAGER" << endl;
	cout << m1;
}
else{
	cerr << "invalid option " << endl;
}



Package pkg("mubeen", "Ucp", "lahore", "punjab", "12345", "ali", "uol", "lahore", "punjab", "67890", 10.5, 2.5);
TwoDayPackage twoDayPkg("mubeen", "Ucp", "lahore", "punjab", "12345", "ali", "uol", "lahore", "punjab", "67890", 10.5, 2.5, 5.0);
OverNightPackage overnightPkg("mubeen", "Ucp", "lahore", "punjab", "12345", "ali", "uol", "lahore", "punjab", "67890", 10.5, 2.5, 4.0);
WeekPackage weeknightPkg("mubeen", "Ucp", "lahore", "punjab", "12345", "ali", "uol", "lahore", "punjab", "67890", 10.5, 2.5, 5.5);
cout << "\t\t\t\t____________________" << endl;
cout << "\t\t\t\tPackage Information:" << endl;
cout << "\t\t\t\t____________________" << endl;
cout << pkg << "Shipping Cost      : $" << pkg.calculateCost() << endl << endl << endl;
cout << "\t\t\t\t____________________________" << endl;
cout << "\t\t\t\tTwo-Day Package Information:" << endl;
cout << "\t\t\t\t____________________________" << endl;
cout << twoDayPkg << "Shipping Cost      : $" << twoDayPkg.calculateCost() << endl << endl << endl;
cout << "\t\t\t\t______________________________" << endl;
cout << "\t\t\t\tOvernight Package Information:" << endl;
cout << "\t\t\t\t______________________________" << endl;
cout << overnightPkg << "Shipping Cost           : $" << overnightPkg.calculateCost() << endl;
cout << "\t\t\t______________________________" << endl;
cout << "\t\t\t\  week Package Information:" << endl;
cout << "\t\t\t______________________________" << endl;
cout << weeknightPkg << " Shipping Cost          :$" << weeknightPkg.calculateCost() << endl;

system("pause");
return 0;
}