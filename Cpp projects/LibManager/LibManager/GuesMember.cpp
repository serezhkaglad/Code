#include "GuestMember.h"

GuestMember::GuestMember(const string& name) : Member(name) {}

bool GuestMember::borrowItem(shared_ptr<LibraryItem> item) {
    if (borrowedItems.size() < BORROW_LIMIT && item->isAvailable()) {
        item->borrowItem();
        borrowedItems.push_back(item);
        return true;
    }
    return false;
}