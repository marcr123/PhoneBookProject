#pragma once
#pragma once
#include"Person2.h"

class PhoneBook {
public:
	PhoneBook();
	PhoneBook(const PhoneBook& orgCopy);
	~PhoneBook();
	void Display();
	void Add(Person personToAdd);
	PhoneBook& operator = (const PhoneBook& objToCopy);
	Person searchPB(string search);
	void bubbleSort(Person* values, int size);
private:
	void searchHelp(Person* arrSearch, int lowVal, int highVal, string itemMatch);
	Person* personArr;
	int numContacts;
	int capacity;
};