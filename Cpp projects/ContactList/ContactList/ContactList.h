#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "Person.h"
#include <vector>
#include <string>
using namespace std;

class ContactList {
private:
    vector<Person> contacts;

public:
    void addContact(const Person& person);

    void displayContacts() const;

    void searchByName(const string& name) const;

    void saveToFile(const string& filename) const;

    void loadFromFile(const string& filename);
};

#endif
