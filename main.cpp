#include<iostream>
#include<fstream>
#include"Person2.h"
#include"PhoneBook.h"
#include<string>

using namespace std;

int main(int argc, char* argv[]) {
	PhoneBook Contacts;
	

	ifstream inFile("CongressContacts.txt");
	if (!inFile.is_open()) {
		cout << "File not found" << endl;
		exit(1);
	}

	string last_name, first_name, middle_name, sfx,
		nickname, full_name, bty, gd,
		tp, st, dst, senate_class, pt,
		URL, adds, ph;
	string header;

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

		//Creates a person and sets vals
		CongressPerson y(last_name, first_name,middle_name, sfx, nickname, full_name,
		bty, gd, tp, st, dst, senate_class, pt, URL, adds,ph);

		//adding person to PhoneBook
		Contacts.Add(y);
	}	
	
	string answer;
	while (answer != "4") {
		cout << "1.Display  2.Add  3.Search  4.Exit  5.Edit  6.PCC  7.POAO\n";
		cin >> answer;
		if (answer == "1") {
			Contacts.Display();
		}
		else if (answer == "2") {
			//addToPhoneBook(P_B);
		}
		else if (answer == "3") {
			//string ph;
			//cin >> ph;
			Contacts.searchPB(ph);
			Contacts.Display();
		}
		else if (answer == "5") {
			//Contacts.edit();
		}
		else if (answer == "6") {
			cout << "making your copy...\n";
			PhoneBook testCopy(Contacts);			
			cout << "\nOriginal:\n";
			Contacts.Display();
			cout << "\nCopy:\n";
			testCopy.Display();
		}
		
	}
	

}
