#include<iostream>
#include"Person2.h"
#include"PhoneBook.h"

using namespace std;

CongressPerson::CongressPerson() 
{
	firstName = "n/a";
	lastName = "n/a";
	phoneNumber = "xxx-xxx-xxxx";
	middleName = "na";
	suffix = "na";
	nickname = "na";
	fullName = "na";
	birthday = "na;";
	gender = "na";
	type = "na";
	state = "na";
	district = "na";
	senateClass = "na";
	party = "na";
	url = "n";
	address="n";
}

CongressPerson::CongressPerson(string lastName, string firstName, string middleName,
	string suffix, string nickname, string fullName, string birthday, string gender,
	string type, string state, string district, string senateClass, string party,
	string url, string address, string phoneNumber)
{
	this -> lastName = lastName;
	this -> firstName = firstName;
	this -> middleName = middleName;
	this -> suffix = suffix;
	this -> nickname = nickname;
	this -> birthday = birthday;
	this -> fullName = fullName;;
	this -> gender = gender;
	this -> type = type;
	this -> state = state;
	this -> district = district;
	this -> senateClass = senateClass;
	this -> party = party;
	this -> url = url;
	this -> address = address;
	this -> phoneNumber = phoneNumber;
}

void CongressPerson::Display()const 
{
	cout << "\nLast Name: " << lastName << "\n";;
	cout << "First Name: " << firstName << "\n";;
	cout << "Middle Name: " << middleName << "\n";;
	cout << "Suffix: " << suffix << "\n";;
	cout << "Nickname: "<< nickname  << "\n";;
	cout << "Birthday: " << birthday<< "\n";
	cout << "Fullname: " << fullName<<"\n";
	cout << "Gender: " << gender<<"\n";
	cout << "Type: " << type<<"\n";
	cout << "State: " << state<<"\n";
	cout << "District: " << district<<"\n";
	cout << "Senate Class: " << senateClass<<"\n";
	cout << "Party: " << party<<"\n";
	cout << "URL: " << url << "\n";
	cout << "Address: " << address << "\n";
	cout << "Phone Number: " << phoneNumber<< "\n";
}

string CongressPerson::getFirstName()const { return firstName; }
string CongressPerson::getLastName()const { return lastName; }
string CongressPerson::getMiddleName()const { return middleName; }
string CongressPerson::getSuffix()const { return suffix; };
string CongressPerson::getNickname()const { return nickname; }
string CongressPerson::getFullName()const { return fullName; }
string CongressPerson::getBirthday()const { return birthday; }
string CongressPerson::getGender()const { return gender; }
string CongressPerson::getType()const { return type; }
string CongressPerson::getState()const { return state; }
string CongressPerson::getDistrict()const { return district; }
string CongressPerson::getSenateClass()const { return senateClass; }
string CongressPerson::getParty()const { return party; }
string CongressPerson::getURL()const { return url; }
string CongressPerson::getAddress()const { return address; }
string CongressPerson::getPhoneNumber()const { return phoneNumber; }

void CongressPerson::setFirstName(string firstName) { this->firstName = firstName; }
void CongressPerson::setLastName(string lastName) { this->lastName = lastName; }
void CongressPerson::setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }
void CongressPerson::setMiddleName(string middleName) { this->middleName = middleName; }
void CongressPerson::setSuffix(string suffix) { this->suffix = suffix; }
void CongressPerson::setNickname(string nickname) { this->nickname = nickname; }
void CongressPerson::setFullName(string fullName) { this->fullName = fullName; }
void CongressPerson::setBirthday(string birthday) { this->birthday = birthday; }
void CongressPerson::setGender(string gender) { this->gender = gender; }
void CongressPerson::setType(string type) { this->type = type; }
void CongressPerson::setState(string state) { this->state = state; }
void CongressPerson::setDistrict(string district) { this->district = district; }
void CongressPerson::setSenateClass(string senateClass) { this -> senateClass = senateClass; }
void CongressPerson::setParty(string party) { this-> party = party; }
void CongressPerson::setURL(string url) { this-> url = url; }
void CongressPerson::setAddress(string address) { this-> address = address; }


CongressPerson& CongressPerson::operator = (const CongressPerson& rhs) 
{
	this -> setLastName(rhs.getLastName());
	this -> setFirstName(rhs.getFirstName());
	this -> setMiddleName(rhs.getMiddleName());
	this -> setSuffix(rhs.getSuffix());
	this -> setNickname(rhs.getNickname());
	this -> setFullName(rhs.getFullName());
	this -> setBirthday(rhs.getBirthday());
	this -> setGender(rhs.getGender());
	this -> setType(rhs.getType());
	this -> setState(rhs.getState());
	this -> setDistrict(rhs.getDistrict());
	this -> setSenateClass(rhs.getSenateClass());
	this -> setParty(rhs.getParty());
	this -> setURL(rhs.getURL());
	this -> setAddress(rhs.getAddress());
	this->setPhoneNumber(rhs.getPhoneNumber());

	return *this;	
}
bool CongressPerson::operator < (CongressPerson& rhs)const {return this->getPhoneNumber() < rhs.getPhoneNumber();}

bool CongressPerson::operator == (CongressPerson& rhs) {return this->getPhoneNumber() == rhs.getPhoneNumber();}

bool CongressPerson::operator >= (const CongressPerson& rhs) {return !(this->getPhoneNumber() <rhs.getPhoneNumber());}

bool CongressPerson::operator>(const CongressPerson& rhs){ return rhs.getPhoneNumber() < this -> getPhoneNumber(); }

//void CongressPerson::operator << (ostream& COUT,CongressPerson& rhs){ }
