#ifndef STUDENTMEMBER_H
#define STUDENTMEMBER_H

#include "Member.h"

class StudentMember : public Member {
private:
    static const int BORROW_LIMIT = 3;

public:
    StudentMember(const string& name);
    bool borrowItem(shared_ptr<LibraryItem> item) override;
};

#endif