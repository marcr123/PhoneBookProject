#pragma once
#pragma once
#include<vector>

using namespace std;

class CongressPerson	 {
public:
	CongressPerson();
	CongressPerson(string firstName, string lastName, string phoneNumber);
	void Display();
	string getFirstName()const;
	string getLastName()const;
	string getPhoneNumber()const;
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setPhoneNumber(string phoneNumber);
private:
	string firstName;
	string lastName;
	string phoneNumber;
	string middleName, suffix,
		nickname, fullName, birthday, gender,
		type, state, district, senateClass, party,
		url, address;

};
