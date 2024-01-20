#include"Header.h"
TwoDayPackage::TwoDayPackage(){};
TwoDayPackage::TwoDayPackage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
		string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost, float FlatFee) : Package(
		SenderName, SenderAddress, SenderCity, SenderState, SenderZipCode, RecipientName, RecipientAddress, RecipientCity, RecipientState, RecipientZipCode,
		Weight, Cost)
	{
		this->FlatFee = FlatFee;
	}
void TwoDayPackage:: SetFlatFee(float FlatFee)
	{
		if (FlatFee > 0)
			this->FlatFee = FlatFee;
		else
			cerr << "invalid input" << endl;
	}
float TwoDayPackage::GetFlatFee(){ return FlatFee; }
float TwoDayPackage:: calculateCost()  {
		return Package::calculateCost() + FlatFee;
	}


ostream& operator<<(ostream& os, TwoDayPackage& pkg) {
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
	os << "Flat Fee           : $" << pkg.FlatFee << endl;
	return os;
}
istream& operator>>(istream& is, TwoDayPackage& pkg)
{
	cout << "Enter Two-Day Package details:" << endl;
	cout << "Flat Fee: $";
	is >> pkg.FlatFee;
	return is;
}

