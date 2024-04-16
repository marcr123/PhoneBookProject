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
	bool operator < (CongressPerson& rhs )const; //compares phone number
	bool operator == (CongressPerson& rhs);
	bool operator >= (const CongressPerson& rhs);
	CongressPerson& operator = (const CongressPerson& rhs); //copies CongressPerson vals to another CongressPerson
private:
	string firstName;
	string lastName;
	string phoneNumber;
	string middleName, suffix,
		nickname, fullName, birthday, gender,
		type, state, district, senateClass, party,
		url, address;

};
