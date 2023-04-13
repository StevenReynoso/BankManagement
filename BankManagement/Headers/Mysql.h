#pragma once
#include <iostream>

class Sql
{
public:
	void mySqlConnect();
	void sqladdAcc(std::string name,std::string address, std::string pasW, int acc, int bal);
	void sqldeleteAcc();
	void sqlcheckAcc();
	void sqleditAcc();
	void sqlcheckHistory();
	void sqltransfer();
	void sqlwithdrawal();
	void sqldeposit();

	void sqladdEmployee();
	void sqldeleteEmployee();
	void sqlcheckEmployee();
};

