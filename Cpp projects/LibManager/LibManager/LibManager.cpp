#include "LibraryManager.h"

void LibraryManager::addLibraryItem(shared_ptr<LibraryItem> item) {
    libraryItems.push_back(item);
}

void LibraryManager::removeLibraryItem(shared_ptr<LibraryItem> item) {
    libraryItems.erase(remove(libraryItems.begin(), libraryItems.end(), item), libraryItems.end());
}

void LibraryManager::addMember(shared_ptr<IMember> member) {
    members.push_back(member);
}

void LibraryManager::removeMember(shared_ptr<IMember> member) {
    members.erase(remove(members.begin(), members.end(), member), members.end());
}

bool LibraryManager::borrowItem(shared_ptr<IMember> member, shared_ptr<LibraryItem> item) {
    return member->borrowItem(item);
}

void LibraryManager::returnItem(shared_ptr<LibraryItem> item) {
    item->returnItem();
}