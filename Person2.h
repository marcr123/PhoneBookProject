#pragma once
#include<iostream>

using namespace std;

class CongressPerson {
public:	 
	CongressPerson();
	CongressPerson(string lastName, string firstName, string middleName, string suffix,
		string nickname, string fullName, string birthday, string gender,
		string type, string state, string district, string senateClass, string party,
		string url, string address, string phoneNumber);

	void Display()const;

	string getFirstName()const;
	string getLastName()const;
	string getMiddleName()const;
	string getSuffix()const;
	string getNickname()const;
	string getFullName()const;
	string getBirthday()const;
	string getGender()const;
	string getType()const;
	string getState()const;
	string getDistrict()const;
	string getSenateClass()const;
	string getParty()const;
	string getURL()const;
	string getAddress()const;
	string getPhoneNumber()const;

	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setMiddleName(string middleName);
	void setSuffix(string suffix);
	void setNickname(string nickname);
	void setFullName(string fullName);
	void setBirthday(string birthday);
	void setGender(string gender);
	void setType(string type);
	void setState(string state);
	void setDistrict(string district);
	void setSenateClass(string senateClass);
	void setParty(string party);
	void setURL(string url);
	void setAddress(string address);
	void setPhoneNumber(string phoneNumber);
	
	bool operator < (CongressPerson& rhs )const; //compares phone number
	bool operator == (CongressPerson& rhs);
	bool operator >= (const CongressPerson& rhs);
	CongressPerson& operator = (const CongressPerson& rhs); //copies CongressPerson vals to another CongressPerson
	bool operator>(const CongressPerson& rhs);	
private:
	string lastName, firstName, middleName, suffix , nickname, fullName , birthday , gender,
	type , state , district , senateClass , party , url , address, phoneNumber;
};

