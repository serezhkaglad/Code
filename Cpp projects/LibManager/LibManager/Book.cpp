#include "Book.h"

Book::Book(const string& id, const string& title) : LibraryItem(id), title(title) {}

string Book::getTitle() const {
    return title;
}

void Book::borrowItem() {
    if (availability) {
        availability = false;
        auto now = chrono::system_clock::now();
        dueToDate = now + chrono::duration<int, ratio<60 * 60 * 24>>(28);
    }
}
