#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H

#include "Book.h"
#include "Magazine.h"
#include "FacultyMember.h"
#include "StudentMember.h"
#include "GuestMember.h"
#include <vector>
#include <algorithm>
using namespace std;

class LibraryManager {
private:
    vector<shared_ptr<LibraryItem>> libraryItems;
    vector<shared_ptr<IMember>> members;

public:
    void addLibraryItem(shared_ptr<LibraryItem> item);
    void removeLibraryItem(shared_ptr<LibraryItem> item);
    void addMember(shared_ptr<IMember> member);
    void removeMember(shared_ptr<IMember> member);
    bool borrowItem(shared_ptr<IMember> member, shared_ptr<LibraryItem> item);
    void returnItem(shared_ptr<LibraryItem> item);
};

#endif