#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn() {
	//username & password from user, usr & pw from text file
	string username, password, usr, pw;

	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;

	//read username and password from text file
	ifstream read(username + ".txt");
	getline(read, usr);
	getline(read, pw);

	if (usr == username && pw == password) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int choice;

	cout << "1: Register\n2: Login\nEnter choice: ";
	cin >> choice;

	if (choice == 1) {
		string username, password;

		cout << "Enter a username: ";
		cin >> username;
		cout << "Enter a password: ";
		cin >> password;

		//create file and write username and password
		ofstream file;
		file.open(username + ".txt");
		file << username << endl << password;
		file.close();

		//recursion
		main();
	}
	else if (choice == 2) {
		//get bool value to check whether or not logged in
		bool status = IsLoggedIn();

		if (!status) {
			cout << "False Login" << endl;
			system("Pause");
			return 0;
		}
		else {
			cout << "Successfully logged in" << endl;
			system("Pause");
			return 1;
		}
	}


}