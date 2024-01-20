#include<iostream>
#include<string>
using namespace std;
class Package{
protected:
	string SenderName, SenderAddress, SenderCity, SenderState, SenderZipCode;
	string RecipientName, RecipientAddress, RecipientCity, RecipientState, RecipientZipCode;
	float Weight, Cost;
public:
	Package();
	Package(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
		string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost);
	void SetRecipientAdress(string RecipientAddress);
	void SetRecipientCity(string RecipientCity);
	void SetRecipientName(string RecipientName);
	void SetRecipientState(string RecipientState);
	void SetRecipientZipCode(string RecipientZipCode);
	void SetSenderAdress(string SenderAddress);
	void SetSenderCity(string SenderCity);
	void SetSenderName(string SenderName);
	void SetSenderState(string SenderState);
	void SetSenderZipCode(string SenderZipCode);
	void SetWeight(float Weight);
	void SetCost(float Cost);
	string GetRecipientAdress();
	string GetRecipientCity();
	string GetRecipientName();
	string GetRecipientState();
	string GetRecipientZipCode();
	string GetSenderAdress();
	string GetSenderCity();
	string GetSenderName();
	string GetSenderState();
	string GetSenderZipCode();
	float GetWeight();
	float GetCost();
	float calculateCost();
	friend ostream& operator<<(ostream& os, const Package& pkg);
	friend istream& operator>>(istream& is, Package& pkg);
};



class TwoDayPackage : public Package{
private:
	float FlatFee;
public:
	TwoDayPackage();
	TwoDayPackage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
		string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost, float FlatFee); 
	void SetFlatFee(float FlatFee);
	float GetFlatFee();
	float calculateCost();
	friend ostream& operator<<(ostream& os, TwoDayPackage& pkg);
	friend istream& operator>>(istream& is, TwoDayPackage& pkg);
};





class OverNightPackage : public Package{
private:
	float AdditionalFee;
public:
	OverNightPackage();
	OverNightPackage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
		string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost, float AdditionalFee);
	void SetAdditionalFee(float AdditionalFee);
	float GetAdditionalFee();
	float calculateCost();
	friend ostream& operator<<(ostream& os, OverNightPackage& pkg);
	friend istream& operator>>(istream& is, OverNightPackage& pkg);
};




class WeekPackage : public Package{
private:
	float AdditionalFlatFee;
public:
	WeekPackage();
	WeekPackage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
		string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost, float AAdditionalFlatFee);
	void SetAdditionalFlatFee(float AdditionalFlatFee);
	float GetAdditionalFlatFee();
	float calculateCost();
	friend ostream& operator<<(ostream& os, WeekPackage& pkg);
	friend istream& operator>>(istream& is, WeekPackage& pkg);
};


// classes for login
class Person{
private:
	string personName;
	int age;
public:
	Person();
	Person(string personName, int age);
	void SetName(string personName);
	void SetAge(int age);
	string GetName();
	int GetAge();
	friend ostream& operator<<(ostream& o, Person& P);
	friend istream& operator>>(istream& i, Person& P);
};
class Manager{
private:
	int managerId;
	Person person;
public:
	Manager();
	Manager(int managerId, Person person);
	void SetmanagerId(int managerId);
	int GetId();
	void SetPerson(Person person);
	Person GetPerson();
	friend ostream& operator<<(ostream& o, Manager& M);
	friend istream& operator>>(istream& i, Manager& M);
};
class Employee{
private:
	int employeeId;
	Person person;
public:
	Employee();
	Employee(int employeeId, Person person);
	void SetEmployeeId(int employeeId);
	int GetId();
	void SetPerson(Person person);
	Person GetPerson();
	friend ostream& operator<<(ostream& o, Employee& e);
	friend istream& operator>>(istream& i, Employee& e);
};
