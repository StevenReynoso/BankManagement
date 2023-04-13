#include "Headers/Mysql.h"
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>


const std::string server = "tcp://localhost:3306";
const std::string username = "root";
const std::string password = "Whatisup123456789";

sql::Driver* driver;
sql::Connection* con;
sql::Statement* stmt;
sql::PreparedStatement* pstmt;
sql::ResultSet* result;

void Sql::mySqlConnect() {

	try
	{
		driver = get_driver_instance();
		//for demonstration only. never save password in the code!
		con = driver->connect(server, username, password);
	}
	catch (sql::SQLException e)
	{
		std::cout << "Could not connect to server. Error message: " << e.what() << std::endl;
		system("pause");
		exit(1);
	}

	con->setSchema("bankmanagerdb");
}

//Name
//Address
//Account
//Balance

//drop table for testing purposes
void Sql::sqladdAcc(std::string name, std::string address, std::string hashed_pasW, int acc, int bal) {
    stmt = con->createStatement();
    /*stmt->execute("DROP TABLE IF EXISTS accounts");
    std::cout << "Finished dropping table (if existed)" << std::endl;*/
    stmt->execute("CREATE TABLE IF NOT EXISTS accounts (name VARCHAR(50), address VARCHAR(50), password VARCHAR(128), accountNo serial PRIMARY KEY, balance INTEGER);");
    std::cout << "Finished creating table" << std::endl;
    delete stmt;

    pstmt = con->prepareStatement("INSERT INTO accounts(name, address, password, accountNo, balance) VALUES(?,?,?,?,?)");
    pstmt->setString(1, name);
    pstmt->setString(2, address);
    pstmt->setString(3, hashed_pasW);
    pstmt->setInt(4, acc);
    pstmt->setInt(5, bal);
    pstmt->execute();
    std::cout << "Customer Account Added";

    exit(0);
}