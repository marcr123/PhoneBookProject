#pragma once
#include"Person2.h"

class PhoneBook {
public:
	PhoneBook();
	PhoneBook(const PhoneBook& orgCopy);
	~PhoneBook();
	void Display();
	void Add(CongressPerson& personToAdd);
	PhoneBook& operator = (const PhoneBook& objToCopy);
	void searchPB(string phoneSearch);
	void bubbleSort(CongressPerson values[], int size);
private:
	CongressPerson* personArr;
	int numContacts;
	int capacity;

	//int binarySearch(int lowVal, int highVal, string itemMatch);

};
