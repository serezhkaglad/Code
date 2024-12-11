#include "LibraryManager.h"
#include <iostream>
using namespace std;

int main() {
    LibraryManager libraryManager;

    auto book = make_shared<Book>("B001", "The Great Gatsby");
    auto magazine = make_shared<Magazine>("M001", "Amazin river, 2012");

    libraryManager.addLibraryItem(book);
    libraryManager.addLibraryItem(magazine);

    auto faculty = make_shared<FacultyMember>("Dr.Matti");
    auto student = make_shared<StudentMember>("Alex");
    auto guest = make_shared<GuestMember>("Serjio");

    libraryManager.addMember(faculty);
    libraryManager.addMember(student);
    libraryManager.addMember(guest);

    if (libraryManager.borrowItem(faculty, book)) {
        cout << "Dr.Matti borrowed The Great Gatsby." << endl;
    }

    if (libraryManager.borrowItem(student, magazine)) {
        cout << "Alex borrowed Amazon river." << endl;
    }

    if (!libraryManager.borrowItem(guest, book)) {
        cout << "Serjio could not borrow The Great Gatsby as it is already borrowed." << endl;
    }

    return 0;
}