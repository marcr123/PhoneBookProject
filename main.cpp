#include<iostream>
#include<fstream>
#include"Person2.h"
#include"PhoneBook.h"
#include<vector>
#include<string>

using namespace std;

void addToPhoneBook(PhoneBook& x) {

	string fn;
	string ln;
	string pn;

	cout << "Insert first name:\n";
	cin >> fn;
	cout << "Insert last name:\n";
	cin >> ln;
	cout << "Insert phone number\n";
	cin >> pn;

	CongressPerson addPerson(fn, ln, pn);

	x.Add(addPerson);

}


int main(int argc, char* argv[]) {

	ifstream inFile("CongressContacts.txt");
	if (!inFile.is_open()) {
		cout << "File not found" << endl;
		exit(1);
	}
	string last_name, first_name, middle_name, suffix,
		nickname, full_name, birthday, gender,
		type, state, district, senate_class, party,
		url, address, phone;
	string header;
	getline(inFile, header);
	while (!inFile.eof()) {
		getline(inFile, last_name, ',');
		getline(inFile, first_name, ',');
		getline(inFile, middle_name, ',');
		getline(inFile, suffix, ',');
		getline(inFile, nickname, ',');
		getline(inFile, full_name, ',');


	}
	string answer;
	PhoneBook P_B;




	P_B.Add(person1);
	P_B.Add(person2);
	P_B.Add(person3);
	P_B.Add(person4);
	P_B.Add(person5);




	while (answer != "Exit") {
		cout << "1.Display  2.Add  3.Search  4.Exit  5.Edit  6.PCC  7.POAO\n";
		cin >> answer;
		if (answer == "1") {
			P_B.Display();
		}
		else if (answer == "2") {
			addToPhoneBook(P_B);
		}
		/*else if (answer == "Search") {
			string searchForPerson;
			cin >> searchForPerson;
			P_B.searchPB(searchForPerson).Display();
		}*/
		else if (answer == "PCC") {
			cout << "making your copy...\n";
			PhoneBook testCopy;
			testCopy = P_B;
			cout << "\nOriginal:\n";
			cout << "\nCopy:\n";
			testCopy.Display();


		}
	}

}