#include "ContactList.h"
#include <iostream>
#include <fstream>
using namespace std;

void ContactList::addContact(const Person& person) {
    contacts.push_back(person);
}

void ContactList::displayContacts() const {
    if (contacts.empty()) {
        cout << "Contact list is empty." << endl;
        return;
    }
    for (const auto& contact : contacts) {
        contact.display();
        cout << "---------------------------" << endl;
    }
}

void ContactList::searchByName(const string& name) const {
    bool found = false;
    for (const auto& contact : contacts) {
        if (contact.getName() == name) {
            contact.display();
            found = true;
        }
    }
    if (!found) {
        cout << "No contact found with the name: " << name << endl;
    }
}

void ContactList::saveToFile(const string& filename) const {
    ofstream file(filename);
    if (!file) {
        cout << "Failed to open file for writing." << endl;
        return;
    }

    for (const auto& contact : contacts) {
        file << contact.getName() << ","
            << contact.getEmail() << ","
            << contact.getPhone() << ","
            << contact.getAddress() << ","
            << contact.getAge() << endl;
    }
    file.close();
    cout << "Contacts saved to " << filename << endl;
}

void ContactList::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Failed to open file for reading." << endl;
        return;
    }

    contacts.clear();
    string name, email, phone, address, age_str;
    while (getline(file, name, ',') &&
        getline(file, email, ',') &&
        getline(file, phone, ',') &&
        getline(file, address, ',') &&
        getline(file, age_str)) {
        int age = stoi(age_str);
        contacts.push_back(Person(name, email, phone, address, age));
    }
    file.close();
    cout << "Contacts loaded from " << filename << endl;
}
