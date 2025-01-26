#include "userClasses.h"

namespace Users {

    bool User::checkPassword(const std::string& reenterPassword) const {
        return password == reenterPassword; // This should work now
    }

    void User::generateTempId() {
        // to be finished once database is created
    }

    void User::createId() {
        // to be finished once database is created
    }

    char User::checkAuthority() {
        // to be finished once database is created
    }

    std::string User::getReenterPassword() const {
        return reenterPassword;
    }

    int User::getTempId() const {
        return tempId;
    }

    int User::getCourseKey() const {
        return courseKey;
    }
}