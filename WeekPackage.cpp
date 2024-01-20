#include"Header.h"
WeekPackage::WeekPackage(){};
WeekPackage::WeekPackage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderZipCode, string RecipientName,
	string RecipientAddress, string RecipientCity, string RecipientState, string RecipientZipCode, float Weight, float Cost, float AdditionalFlatFee) : Package(
	SenderName, SenderAddress, SenderCity, SenderState, SenderZipCode, RecipientName, RecipientAddress, RecipientCity, RecipientState, RecipientZipCode,
	Weight, AdditionalFlatFee)
{
	this->AdditionalFlatFee = AdditionalFlatFee;
}
void WeekPackage::SetAdditionalFlatFee(float AdditionalFee)
{
	if (AdditionalFee > 0)
		this->AdditionalFlatFee = AdditionalFlatFee;
	else
		cerr << "invalid input" << endl;
}
float WeekPackage::GetAdditionalFlatFee(){ return AdditionalFlatFee; }
float WeekPackage::calculateCost()  {
	return (Package::calculateCost() + AdditionalFlatFee)-40;
}
ostream& operator<<(ostream& os, WeekPackage& pkg) {
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
	return os;
}
istream& operator>>(istream& is, WeekPackage& pkg) {
	cout << "Enter Overnight Package details:" << endl;
	cout << "Discount on Week Package $";
	is >> pkg.AdditionalFlatFee;
	return is;
}