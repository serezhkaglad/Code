#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"

class Book : public LibraryItem {
private:
    string title;

public:
    Book(const string& id, const string& title);
    string getTitle() const;
    void borrowItem() override;
};

#endif