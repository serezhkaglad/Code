#include "ContactList.h"
#include <iostream>
using namespace std;

int main() {
    ContactList contactList;
    int choice;

    while (true) {
        cout << "1. Add Contact" << endl;
        cout << "2. Display All Contacts" << endl;
        cout << "3. Search Contact by Name" << endl;
        cout << "4. Save Contacts to File" << endl;
        cout << "5. Load Contacts from File" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            string name, email, phone, address;
            int age;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Email: ";
            getline(cin, email);
            cout << "Enter Phone: ";
            getline(cin, phone);
            cout << "Enter Address: ";
            getline(cin, address);
            cout << "Enter Age: ";
            cin >> age;

            Person person(name, email, phone, address, age);
            contactList.addContact(person);
            cout << "Contact added!" << endl;

        }
        else if (choice == 2) {
            contactList.displayContacts();

        }
        else if (choice == 3) {
            string name;
            cout << "Enter the name to search: ";
            cin.ignore();
            getline(cin, name);
            contactList.searchByName(name);

        }
        else if (choice == 4) {
            string filename;
            cout << "Enter the filename to save contacts: ";
            cin >> filename;
            contactList.saveToFile(filename);

        }
        else if (choice == 5) {
            string filename;
            cout << "Enter the filename to load contacts: ";
            cin >> filename;
            contactList.loadFromFile(filename);

        }
        else if (choice == 6) {
            cout << "Exiting." << endl;
            break;

        }
        else {
            cout << "Invalid option. Try again." << endl;
        }
    }

    return 0;
}
