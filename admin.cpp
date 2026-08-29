#include "Admin.h"
#include "Utils.h"
#include <sstream>

using namespace std;

Admin::Admin() : adminId("A001"), username("admin"), password("admin123") {}

Admin::Admin(string adminId, string username, string password)
    : adminId(adminId), username(username), password(password) {}

string Admin::getAdminId() const { return adminId; }
string Admin::getUsername() const { return username; }
string Admin::getPassword() const { return password; }

void Admin::setUsername(const string &v) { username = v; }
void Admin::setPassword(const string &v) { password = v; }

string Admin::toLine() const {
    ostringstream oss;
    oss << adminId << "|" << username << "|" << password;
    return oss.str();
}

Admin Admin::fromLine(const string &line) {
    vector<string> f = splitLine(line, '|');
    while (f.size() < 3) f.push_back("");
    return Admin(f[0], f[1], f[2]);
}
