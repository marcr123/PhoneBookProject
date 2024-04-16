#include<iostream>
#include<fstream>
#include"Person2.h"
#include"PhoneBook.h"
#include<vector>
#include<string>

using namespace std;

PhoneBook Contacts;

ifstream inFile("CongressContacts.txt");
if (!inFile.is_open()) {
	cout << "File not found" << endl;
	exit(1);
}

string last_name, first_name, middle_name, sfx,
	nickname, full_name, bty, gd,
	tp, st, dst, senate_class, pt,
	URL, adds, ph,header;

getline(inFile, header);
cout << header;

//reads data into CongressPerson but does not 
while (!inFile.eof()) {
	getline(inFile, last_name, ',');
	getline(inFile, first_name, ',');
	getline(inFile, middle_name, ',');
	getline(inFile, sfx, ',');
	getline(inFile, nickname, ',');
	getline(inFile, full_name, ',');
	getline(inFile, bty, ',');
	getline(inFile, gd, ',');
	getline(inFile, tp, ',');
	getline(inFile, st, ',');
	getline(inFile, dst, ',');
	getline(inFile, senate_class, ',');
	getline(inFile, pt, ',');
	getline(inFile, URL, ',');
	getline(inFile, adds, ',');
	getline(inFile, ph);
	
	CongressPerson y(last_name, first_name,middle_name, sfx, nickname, full_name,
	bty, gd, tp, st, dst, senate_class, pt, URL, adds,ph);
	
	Contacts.Add(y);
}

	while (answer != "4") {
		cout << "1.Display  2.Add  3.Search  4.Exit  5.Edit  6.PCC  7.POAO\n";
		cin >> answer;
		if (answer == "1") {
			P_B.Display();
		}
		else if (answer == "2") {
			//addToPhoneBook(P_B);
		}
		/*else if (answer == "3") {
			string searchForPerson;
			cin >> searchForPerson;
			P_B.searchPB(searchForPerson).Display();
		}*/
		else if (answer == "7") {
			cout << "making your copy...\n";
			PhoneBook testCopy;
			testCopy = Contacts;
			cout << "\nOriginal:\n";
			cout << "\nCopy:\n";
			testCopy.Display();


		}
	}

}
