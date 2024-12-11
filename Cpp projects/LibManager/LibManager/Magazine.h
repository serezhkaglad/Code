#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "LibraryItem.h"

class Magazine : public LibraryItem {
private:
    string issue;

public:
    Magazine(const string& id, const string& issue);
    string getIssue() const;
    void borrowItem() override;
};

#endif