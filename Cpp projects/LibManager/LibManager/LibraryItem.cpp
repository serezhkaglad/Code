#include "LibraryItem.h"

LibraryItem::LibraryItem(const string& id) : id(id), availability(true) {}

string LibraryItem::getId() const { return id; }

bool LibraryItem::isAvailable() const { return availability; }

void LibraryItem::returnItem() {
    availability = true;
}

chrono::system_clock::time_point LibraryItem::getDueToDate() const {
    return dueToDate;
}
