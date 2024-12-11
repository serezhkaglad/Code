#ifndef FACULTYMEMBER_H
#define FACULTYMEMBER_H

#include "Member.h"

class FacultyMember : public Member {
private:
    static const int BORROW_LIMIT = 5;

public:
    FacultyMember(const string& name);
    bool borrowItem(shared_ptr<LibraryItem> item) override;
};

#endif