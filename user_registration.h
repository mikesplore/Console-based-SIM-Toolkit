#ifndef USER_REGISTRATION_H
#define USER_REGISTRATION_H

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <limits>
#include <iostream>

void insertUserData(sql::Connection *con, int idNo, const std::string &first_name, const std::string &last_name, int age, const std::string &phone, const std::string &address);
void registerNewUser();

#endif
