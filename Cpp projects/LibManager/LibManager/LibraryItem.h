#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>
#include <chrono>
using namespace std;

class LibraryItem {
protected:
    string id;
    bool availability;
    chrono::system_clock::time_point dueToDate;

public:
    LibraryItem(const string& id);
    virtual ~LibraryItem() = default;

    string getId() const;
    bool isAvailable() const;
    virtual void borrowItem() = 0;
    virtual void returnItem();
    chrono::system_clock::time_point getDueToDate() const;
};

#endif