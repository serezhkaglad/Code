#ifndef GUESTMEMBER_H
#define GUESTMEMBER_H

#include "Member.h"

class GuestMember : public Member {
private:
    static const int BORROW_LIMIT = 1;

public:
    GuestMember(const string& name);
    bool borrowItem(shared_ptr<LibraryItem> item) override;
};

#endif