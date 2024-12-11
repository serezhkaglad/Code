#include "Magazine.h"

Magazine::Magazine(const string& id, const string& issue) : LibraryItem(id), issue(issue) {}

string Magazine::getIssue() const {
    return issue;
}

void Magazine::borrowItem() {
    if (availability) {
        availability = false;
        auto now = chrono::system_clock::now();
        dueToDate = now + chrono::duration<int, ratio<60 * 60 * 24>>(14);
    }
}
