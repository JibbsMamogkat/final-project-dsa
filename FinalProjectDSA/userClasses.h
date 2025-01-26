#ifndef USER_CLASSES_H
#define USER_CLASSES_H

#include <string>

namespace Users {

    class User {
    private:
        std::string id;
        std::string username;
        std::string password;
        std::string reenterPassword;
        int tempId;
        int courseKey;

    public:
        // Constructor with const reference parameters
        User(const std::string& Id, const std::string& Username, const std::string& Password)
            : id(Id), username(Username), password(Password), tempId(0), courseKey(0) {
        }

        ~User() = default;

        bool checkPassword(const std::string& reenterPassword) const;
        void generateTempId();
        void createId();
        char checkAuthority();

        // Renamed member functions to avoid conflicts
        std::string getId() const { return id; }
        std::string getUsername() const { return username; }
        std::string getPassword() const { return password; }
        std::string getReenterPassword() const { return reenterPassword; }
        int getTempId() const { return tempId; }
        int getCourseKey() const { return courseKey; }
    };

} // namespace Users

#endif // USER_CLASSES_H