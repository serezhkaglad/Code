#ifndef MEMBER_H
#define MEMBER_H

#include "IMember.h"
#include <random>
#include <sstream>
#include <iomanip>
#include <ctime>

class Member : public IMember {
protected:
    string id;
    string name;
    vector<shared_ptr<LibraryItem>> borrowedItems;

public:
    Member(const string& name);
    string getId() const override;
    string getInfo() const override;
    virtual bool borrowItem(shared_ptr<LibraryItem> item) = 0;
    void returnItem(shared_ptr<LibraryItem> item) override;

private:
    static string generateUniqueId();
};

#endif
