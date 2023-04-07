#pragma once

//#ifndef MYSQLDB_H
//#define MYSQLDB_H

#include <string>

class MySQLDB {
public:
    MySQLDB();
    ~MySQLDB();
    void connect();
    void close();
    bool insertAccount(const std::string& name, const std::string& address, int acc, const std::string& pasW, int bal);
    bool deleteAccount(int acc);
    // add more functions for handling accounts and employees
};

//#endif // MYSQLDB_H
