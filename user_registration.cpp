#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <limits>

class User {
public:
    int idNo;
    std::string firstName;
    std::string lastName;
    int age;
    int pin;
    std::string phone;
    std::string address;

    User(int id, const std::string &first, const std::string &last, int a, const std::string &p, const std::string &addr, int _pin)
        : idNo(id), firstName(first), lastName(last), age(a), phone(p), address(addr), pin(_pin) {}
};

void insertUserData(sql::Connection *con, const User &user) {
    try {
        sql::PreparedStatement *prep_stmt;
        prep_stmt = con->prepareStatement("INSERT INTO personalinfo (idNo, first_name, last_name, age, phone, address, pin) VALUES (?, ?, ?, ?, ?, ?, ?)");
        prep_stmt->setInt(1, user.idNo);
        prep_stmt->setString(2, user.firstName);
        prep_stmt->setString(3, user.lastName);
        prep_stmt->setInt(4, user.age);
        prep_stmt->setString(5, user.phone);
        prep_stmt->setString(6, user.address);
        prep_stmt->setInt(7, user.pin);
        prep_stmt->execute();
        delete prep_stmt;
    } catch (sql::SQLException &e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
    }
}

User captureUserInput() {
  int idNo;
  int age;
  int pin;
  std::string phone;
  std::string address;

  std::string first_name;
  std::string last_name;

  std::cout << "=================================" << std::endl;
  std::cout << "NEW USER REGISTRATION" << std::endl;
  std::cout << "=================================" << std::endl;
  std::cout << "Enter id: ";
  std::cin >> idNo;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "Enter first name: ";
  std::getline(std::cin, first_name);

  std::cout << "Enter last name: ";
  std::getline(std::cin, last_name);

  std::cout << "Enter age: ";
  std::cin >> age;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Consume the newline character

  std::cout << "Enter phone number: ";
  std::getline(std::cin, phone);

  std::cout << "Enter Address: ";
  std::getline(std::cin, address);

  std::cout << "Enter new PIN: ";
  std::cin >> pin;

  std::cout << "\nYour details have been recorded successfully!" << std::endl;
  std::cout << "Exiting registration window..." << std::endl;

  return User(idNo, first_name, last_name, age, phone, address, pin);
}




void registerNewUser() {
    User newUser = captureUserInput();

    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    std::string hostname = "localhost";
    std::string username = "mike";
    std::string password = "mikemike";

    std::string database = "safaricom";

    try {
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://" + hostname + ":3306", username, password);
        con->setSchema(database);

        insertUserData(con, newUser);

        delete con;
    } catch (sql::SQLException &e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
    }
}


