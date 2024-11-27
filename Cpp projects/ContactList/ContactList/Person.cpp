#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : name(""), email(""), phone(""), address(""), age(0) {}

Person::Person(string name, string email, string phone, string address, int age)
    : name(name), email(email), phone(phone), address(address), age(age) {
}

//getters
string Person::getName() const { return name; }
string Person::getEmail() const { return email; }
string Person::getPhone() const { return phone; }
string Person::getAddress() const { return address; }
int Person::getAge() const { return age; }

//setters
void Person::setName(string name) { this->name = name; }
void Person::setEmail(string email) { this->email = email; }
void Person::setPhone(string phone) { this->phone = phone; }
void Person::setAddress(string address) { this->address = address; }
void Person::setAge(int age) { this->age = age; }

//details
void Person::display() const {
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Address: " << address << endl;
    cout << "Age: " << age << endl;
}
