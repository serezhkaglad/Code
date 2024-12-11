#include "StudentMember.h"

StudentMember::StudentMember(const string& name) : Member(name) {}

bool StudentMember::borrowItem(shared_ptr<LibraryItem> item) {
    if (borrowedItems.size() < BORROW_LIMIT && item->isAvailable()) {
        item->borrowItem();
        borrowedItems.push_back(item);
        return true;
    }
    return false;
}