#include"Header.h"
Package::Package(){};
Package::Package(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
		string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost)
	{
		this->Cost = Cost;
		this->Weight = Weight;
		this->RecipientAddress = RecipientAddress;
		this->RecipientCity = RecipientCity;
		this->RecipientName = RecipientName;
		this->RecipientState = RecipientState;
		this->RecipientZipCode = RecipientZipCode;
		this->SenderAddress = SenderAddress;
		this->SenderCity = SenderCity;
		this->SenderName = SenderName;
		this->SenderState = SenderState;
		this->SenderZipCode = SenderZipCode;
	}
	void Package::SetRecipientAdress(string RecipientAddress)
	{ 
		this->RecipientAddress = RecipientAddress;
	}
	void Package::SetRecipientCity(string RecipientCity)
	{
		this->RecipientCity = RecipientCity;
	}
	void Package::SetRecipientName(string RecipientName)
	{
		this->RecipientName = RecipientName;
	}
	void Package::SetRecipientState(string RecipientState)
	{
		this->RecipientState = RecipientState;
	}
	void Package::SetRecipientZipCode(string RecipientZipCode)
	{
		this->RecipientZipCode = RecipientZipCode;
	}
	void Package::SetSenderAdress(string SenderAddress)
	{
		this->SenderAddress = SenderAddress;
	}
	void Package::SetSenderCity(string SenderCity)
	{
		this->SenderCity = SenderCity;
	}
	void Package::SetSenderName(string SenderName)
	{
		this->SenderName = SenderName;
	}
	void Package::SetSenderState(string SenderState)
	{
		this->SenderState = SenderState;
	}
	void Package::SetSenderZipCode(string SenderZipCode)
	{
		this->SenderZipCode = SenderZipCode;
	}
	void Package:: SetWeight(float Weight)
	{
		if (Weight>0)
			this->Weight = Weight;
		else
			cerr << "invalid input" << endl;
	}
	void Package::SetCost(float Cost)
	{
		if (Cost > 0)
			this->Cost = Cost;
		else
			cerr << "invalid input" << endl;
	}
	string Package:: GetRecipientAdress()
	{
		return RecipientAddress;
	}
	string Package::GetRecipientCity()
	{
		return RecipientCity;
	}
	string  Package::GetRecipientName(){
		return RecipientName;
	}
	string Package::GetRecipientState()
	{
		return RecipientState; 
	}
	string Package::GetRecipientZipCode()
	{
		return RecipientZipCode;
	}
	string  Package::GetSenderAdress()
	{
		return SenderAddress;
	}
	string Package::GetSenderCity()
	{ 
		return SenderCity;
	}
	string  Package::GetSenderName()
	{
		return SenderName;
	}
	string  Package::GetSenderState()
	{
		return SenderState;
	}
	string  Package::GetSenderZipCode()
	{
		return SenderZipCode;
	}
	float  Package::GetWeight(){
		return Weight; 
	}
	float  Package::GetCost()
	{ 
		return Cost;
	}
	float  Package::calculateCost(){
		return Weight * Cost;
	}
    ostream& operator<<(ostream& os, const Package& pkg)
{
	os << "\t~~~ SENDER IMFORMATION ~~~" << endl;
	os << "Sender name        :" << pkg.SenderName << endl;
	os << "Sender Adress      :" << pkg.SenderAddress << endl;
	os << "Sender city        :" << pkg.SenderCity << endl;
	os << "Sender state       :" << pkg.SenderState << endl;
	os << "Sender Zip Code    :" << pkg.SenderZipCode << endl;
	os << "\t ~~~RECIEPIENT IMFORMATION~~~" << endl;
	os << "Recipient Name     :" << pkg.RecipientName << endl;
	os << "Recipient Adress   :" << pkg.RecipientAddress << endl;
	os << "Recipient City     :" << pkg.RecipientCity << endl;
	os << "Recipient State    :" << pkg.RecipientState << endl;
	os << "Recipient Zip Code :" << pkg.RecipientZipCode << endl;
	cout << "__________________" << endl;
	os << "Weight             :" << pkg.Weight << " ounces" << endl;;
	os << "Cost per ounce     : $" << pkg.Cost << endl;
	return os;
}
istream& operator>>(istream& is, Package& pkg) {
	cout << "Enter sender information:" << endl;
	cout << "Name: ";
	getline(is, pkg.SenderName);
	cout << "Address: ";
	getline(is, pkg.SenderAddress);
	cout << "City: ";
	getline(is, pkg.SenderCity);
	cout << "State: ";
	getline(is, pkg.SenderState);
	cout << "ZIP Code: ";
	getline(is, pkg.SenderZipCode);
	cout << "Enter recipient information:" << endl;
	cout << "Name: ";
	getline(is, pkg.RecipientName);
	cout << "Address: ";
	getline(is, pkg.RecipientAddress);
	cout << "City: ";
	getline(is, pkg.RecipientCity);
	cout << "State: ";
	getline(is, pkg.RecipientState);
	cout << "ZIP Code: ";
	getline(is, pkg.RecipientZipCode);
	cout << "Enter package details:\n";
	cout << "Weight (ounces): ";
	is >> pkg.Weight;
	cout << "Cost per ounce: $";
	is >> pkg.Cost;
	return is;
}
