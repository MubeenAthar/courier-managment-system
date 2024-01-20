#include"Header.h"
OverNightPackage::OverNightPackage(){};
OverNightPackage::OverNightPackage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
	string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost, float AdditionalFee) : Package(
	SenderName, SenderAddress, SenderCity, SenderState, SenderZipCode, RecipientName, RecipientAddress, RecipientCity, RecipientState, RecipientZipCode,
	Weight, AdditionalFee)
{
	this->AdditionalFee = AdditionalFee;
}
void OverNightPackage::SetAdditionalFee(float AdditionalFee)
{
	if (AdditionalFee > 0)
		this->AdditionalFee = AdditionalFee;
	else
		cerr << "invalid input" << endl;
}
float OverNightPackage:: GetAdditionalFee(){ return AdditionalFee; }
float OverNightPackage::calculateCost()  {
	return Package::calculateCost() + AdditionalFee;
}
ostream& operator<<(ostream& os, OverNightPackage& pkg) {
	os << "\t~~~ SENDER IMFORMATION ~~~" << endl;
	os << "Sender name             :" << pkg.SenderName << endl;
	os << "Sender Adress           :" << pkg.SenderAddress << endl;
	os << "Sender city             :" << pkg.SenderCity << endl;
	os << "Sender state            :" << pkg.SenderState << endl;
	os << "Sender Zip Code         :" << pkg.SenderZipCode << endl;
	os << "\t ~~~RECIEPIENT IMFORMATION~~~" << endl;
	os << "Recipient Name          :" << pkg.RecipientName << endl;
	os << "Recipient Adress        :" << pkg.RecipientAddress << endl;
	os << "Recipient City          :" << pkg.RecipientCity << endl;
	os << "Recipient State         :" << pkg.RecipientState << endl;
	os << "Recipient Zip Code      :" << pkg.RecipientZipCode << endl;
	cout << "_______________________" << endl;
	os << "Weight                  :" << pkg.Weight << " ounces" << endl;;
	os << "Cost per ounce          : $" << pkg.Cost << endl;
	os << "Additional Fee per Ounce: $" << pkg.AdditionalFee << endl;
	return os;
}
istream& operator>>(istream& is, OverNightPackage& pkg) {
	cout << "Enter Overnight Package details:" << endl;
	cout << "Additional Fee per Ounce: $";
	is >> pkg.AdditionalFee;
	return is;
}