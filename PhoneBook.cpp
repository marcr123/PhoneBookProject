#include<iostream>
#include"Person2.h"
#include"PhoneBook.h"
#include<vector>
using namespace std;

PhoneBook::PhoneBook()
{
	numContacts = 0;
	capacity = 20;
	personArr = new Person[capacity];

}

PhoneBook::~PhoneBook() {
	cout << "Delete cont here";
	delete[] personArr;
}

PhoneBook::PhoneBook(const PhoneBook& orgCopy)
{
	cout << "Copy const here...";
	numContacts = orgCopy.numContacts;
	capacity = orgCopy.capacity;
	numContacts = orgCopy.numContacts;

	personArr = new Person[capacity];

	for (int i = 0; i < numContacts; i++) {
		personArr[i] = orgCopy.personArr[i];
	}
}

void PhoneBook::Add(Person personToAdd)
{
	numContacts++;
	if (numContacts == capacity) {
		capacity += 20;
	}
	for (int i = numContacts - 1; i < numContacts; i++) {
		personArr[i] = personToAdd;
	}

}

void PhoneBook::Display()
{

	for (int i = 0; i < numContacts; i++) {
		personArr[i].Display();
	}
}

PhoneBook& PhoneBook::operator = (const PhoneBook& objToCopy)
{
	cout << "OAO here";
	numContacts = objToCopy.numContacts;
	capacity = objToCopy.capacity;
	numContacts = objToCopy.numContacts;
	for (int i = 0; i < numContacts; i++) {
		personArr[i] = objToCopy.personArr[i];
	}
	return *this;
}

/*Person PhoneBook::searchPB(string search)
{
	cout << "Searching...\n" ;


}

template<typename TYPE>
TYPE searchHelp(TYPE arrSearch, int lowVal, int highVal, string itemMatch)
{
		int midVal;        // Midpoint of low and high values
		int itemPos;       // Position where item found, -1 if not found
		int rangeSize;     // Remaining range of values to search for match

		rangeSize = (highVal - lowVal) + 1;
		midVal = (highVal + lowVal) / 2;

		if (itemMatch == stringsList.at(midVal)) {   // Base case 1: item found at midVal position
			itemPos = midVal;
		}
		else if (rangeSize == 1) {                   // Base case 2: match not found
			itemPos = -1;
		}
		else {                                       // Recursive case: search lower or upper half
			if (itemMatch < stringsList.at(midVal)) { // Search lower half, recursive call
				itemPos = FindMatch(stringsList, itemMatch, lowVal, midVal);
			}
			else {                                    // Search upper half, recursive call
				itemPos = FindMatch(stringsList, itemMatch, midVal + 1, highVal);
			}
		}

		//return itemPos;
}

template<typename TYPE>
void bubbleSort(TYPE values, int size)
{
	TYPE i, j, temp;
	int countComparisons = 0;
	bool continueSorting = true;
	for (i = 0; i < size - 1 && continueSorting; i++) {
		//continueSorting=false;

		for (j = 0; j < size - i - 1; j++) {
			if (values[j].getPhoneNumber() > values[j + 1].getPhoneNumber) {
				temp = values[j];
				values[j] = values[j + 1];
				values[j + 1] = temp;
				continueSorting = true;

			}
			countComparisons++;
		}
		cout << i << ": ";
		printArray(values, size);
	}
	cout << countComparisons << endl;
}
*/