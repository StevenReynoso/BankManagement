#include "Headers/Mysql.h"
#include <mysql/jdbc.h>
#include <mysqlx/common.h>
#include <mysqlx/common_constants.h>
#include <mysqlx/version_info.h>
#include <mysqlx/xapi.h>
#include <mysqlx/xdevapi.h>


class Database {
private:
    MYSQL* connection;
public:
    Database(const char* host, const char* user, const char* password, const char* database);
    ~Database();
    bool addAccount(const std::string& name, const std::string& address, int acc, const std::string& password, int balance);
};

// Define the constructor and destructor for the Database class
Database::Database(const char* host, const char* user, const char* password, const char* database) {
    connection = mysql_init(NULL);
    mysql_real_connect(connection, host, user, password, database, 0, NULL, 0);
}

Database::~Database() {
    mysql_close(connection);
}

// Define the addAccount function for the Database class
bool Database::addAccount(const std::string& name, const std::string& address, int acc, const std::string& password, int balance) {
    std::string query = "INSERT INTO accounts VALUES ('" + name + "', '" + address + "', " + std::to_string(acc) + ", '" + password + "', " + std::to_string(balance) + ")";
    int status = mysql_query(connection, query.c_str());
    return (status == 0);
}
