#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    string email;
    string phone;
    string address;
    int age;

public:
    Person();
    Person(string name, string email, string phone, string address, int age);

    //getters
    string getName() const;
    string getEmail() const;
    string getPhone() const;
    string getAddress() const;
    int getAge() const;

    //setters
    void setName(string name);
    void setEmail(string email);
    void setPhone(string phone);
    void setAddress(string address);
    void setAge(int age);

    void display() const;
};

#endif
