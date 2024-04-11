#include<iostream>
#include"Person2.h"
#include"PhoneBook.h"

using namespace std;

CongressPerson::CongressPerson()
{
	firstName = "n/a";
	lastName = "n/a";
	phoneNumber = "xxx-xxx-xxxx";
	middleName =	
	suffix,
	nickname, 
	fullName, 
	birthday, 
	gender,
	type, 
	state, 
	district, 
	senateClass,
	party,
	url, 
	address;
}

CongressPerson::CongressPerson(string firstName, string lastName, string phoneNumber)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = phoneNumber;
}

void CongressPerson::Display()
{
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Phone Number: " << phoneNumber << endl;
}

string CongressPerson::getFirstName()const
{
	return firstName;
}

string CongressPerson::getLastName()const {
	return lastName;
}

string CongressPerson::getPhoneNumber()const {
	return phoneNumber;
}

void CongressPerson::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void CongressPerson::setLastName(string lastName)
{
	this->lastName = lastName;
}

void CongressPerson::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
