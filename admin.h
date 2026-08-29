#ifndef ADMIN_H
#define ADMIN_H

#include <string>

class Admin {
private:
    std::string adminId;
    std::string username;
    std::string password;

public:
    Admin();
    Admin(std::string adminId, std::string username, std::string password);

    std::string getAdminId() const;
    std::string getUsername() const;
    std::string getPassword() const;

    void setUsername(const std::string &v);
    void setPassword(const std::string &v);

    std::string toLine() const;
    static Admin fromLine(const std::string &line);
};

#endif
