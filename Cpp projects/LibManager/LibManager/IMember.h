#ifndef IMEMBER_H
#define IMEMBER_H

#include <string>
#include <vector>
#include <memory>
#include "LibraryItem.h"
using namespace std;

class IMember {
public:
    virtual ~IMember() = default;
    virtual string getId() const = 0;
    virtual string getInfo() const = 0;
    virtual bool borrowItem(shared_ptr<LibraryItem> item) = 0;
    virtual void returnItem(shared_ptr<LibraryItem> item) = 0;
};

#endif