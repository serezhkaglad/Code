#include "Member.h"

Member::Member(const string& name) : name(name) {
    id = generateUniqueId();
}

string Member::getId() const {
    return id;
}

string Member::getInfo() const {
    stringstream info;
    info << "Name: " << name << ", ID: " << id;
    return info.str();
}

void Member::returnItem(shared_ptr<LibraryItem> item) {
    item->returnItem();
    borrowedItems.erase(remove(borrowedItems.begin(), borrowedItems.end(), item), borrowedItems.end());
}

string Member::generateUniqueId() {
    // Get the current time as a basis for the ID
    auto now = chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = chrono::duration_cast<chrono::milliseconds>(duration).count();

    // Generate a random number
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1000, 9999);

    // Combine the timestamp and random number into a string
    stringstream ss;
    ss << millis << "-" << dis(gen);
    return ss.str();
}
