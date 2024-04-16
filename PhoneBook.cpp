#include<iostream>
#include"Person2.h"
#include"PhoneBook.h"

using namespace std;

PhoneBook::PhoneBook() 
{
	numContacts = 0;
	capacity = 20;
	personArr = new CongressPerson[capacity];
	
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

	personArr = new CongressPerson[capacity];

	for (int i = 0; i < capacity; i++){
		personArr[i] = orgCopy.personArr[i];
	}
}

void PhoneBook::Add(CongressPerson& personToAdd) 
{
	numContacts++;

	if (numContacts >= capacity) {
		CongressPerson* temp = new CongressPerson[capacity+1];
		for (int i = 0; i < capacity; i++) {
			temp[i] = personArr[i];
		}
		delete[] personArr;
		personArr = temp;
		capacity++;
		for (int i = numContacts - 1; i < capacity; i++) {
			personArr[i] = personToAdd;
		}
	}
	else {

		for (int i = numContacts - 1; i < capacity; i++) {
			personArr[i] = personToAdd;
		}
	}
	
	

}

void PhoneBook::Display() 
{
	
	for (int i = 0; i < numContacts; i++) {
		personArr[i].Display();
	} 
}

void PhoneBook::searchPB(string phoneSearch) 
{
	//sort first in order to search for a person
	cout << "Searching...\n" ;
	bubbleSort(this->personArr,numContacts);

	//search
	//binarySearch(numContacts, 0, phoneSearch);
	
				
}


/*int PhoneBook::binarySearch(int lowVal, int highVal, string itemMatch)
{
		int midVal;        // Midpoint of low and high values
		int itemPos;       // Position where item found, -1 if not found
		int rangeSize;     // Remaining range of values to search for match

		rangeSize = (highVal - lowVal) + 1;
		midVal = (highVal + lowVal) / 2;

		if (itemMatch == personArr[midVal].getPhoneNumber()) {   // Base case 1: item found at midVal position
			itemPos = midVal;
		}
		else if (rangeSize == 1) {                   // Base case 2: match not found
			itemPos = -1;
		}
		else {                                       // Recursive case: search lower or upper half
			if (itemMatch < personArr[midVal].getPhoneNumber()) { // Search lower half, recursive call
				itemPos = binarySearch(lowVal, midVal, itemMatch);
			}
			else {                                    // Search upper half, recursive call
				itemPos = binarySearch(midVal + 1, highVal, itemMatch);
			}
		}

		return itemPos;
}*/

//sorting by phone number
void PhoneBook::bubbleSort(CongressPerson values[], int size)
{
	int i, j;
	CongressPerson temp;
	int countComparisons = 0;
	bool continueSorting = true;
	for (i = 0; i < size - 1 && continueSorting; i++) {
		//continueSorting=false;     		
  

		for (j = 0; j < size - i - 1; j++) {
			if (values[j] > values[j + 1]) { //comparing phone numbers
				//swaps congressPersons
				temp = values[j];
				values[j] = values[j + 1];
				values[j + 1] = temp;
				continueSorting = true;

			}
			countComparisons++;
		}
	}
}

PhoneBook& PhoneBook::operator = (const PhoneBook& objToCopy)
{
	cout << "OAO here";

	delete[] personArr;

	numContacts = objToCopy.numContacts;
	capacity = objToCopy.capacity;

	personArr = new CongressPerson[capacity];

	numContacts = objToCopy.numContacts;
	for (int i = 0; i < numContacts; i++) {
		personArr[i] = objToCopy.personArr[i];
	}
	return *this;
}



