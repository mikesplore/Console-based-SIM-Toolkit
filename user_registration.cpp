#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <limits> 

// Function to insert user data into the database
void insertUserData(sql::Connection *con, int idNo, const std::string &first_name, const std::string &last_name, int age, const std::string &phone, const std::string &address) {
    try {
        sql::PreparedStatement *prep_stmt;
        prep_stmt = con->prepareStatement("INSERT INTO personalinfo (idNo, first_name, last_name, age, phone, address) VALUES (?, ?, ?, ?, ?, ?)");
        prep_stmt->setInt(1, idNo);
        prep_stmt->setString(2, first_name);
        prep_stmt->setString(3, last_name);
        prep_stmt->setInt(4, age);
        prep_stmt->setString(5, phone);
        prep_stmt->setString(6, address);
        prep_stmt->execute();
        delete prep_stmt;
    } catch (sql::SQLException &e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
    }
}


int main() {
    int idNo;
    int age;
    std::string phone;
    std::string first_name;
    std::string last_name;
    std::string address;
   

    std::cout << "\n=====================\n";
    std::cout << "USER REGISTRATION\n";
    std::cout << "=====================\n";

    std::cout << "Enter id: ";
    std::cin >> idNo;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Consume the newline character

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);

    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);

    std::cout << "Enter age: ";
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::cout << "Enter phone: ";
    while (!(std::cin >> phone)) {
        std::cin.clear();  
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Invalid input. Please enter a valid integer for phone: ";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::cout << "Enter Address: ";
    std::getline(std::cin, address);

    std::cout<<"\nDetails captured successfully!" <<std::endl;
    std::cout <<"Closing registration form..."<<std::endl;




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

        // Call the insertUserData function to insert data
        insertUserData(con, idNo, first_name, last_name, age , phone, address );

        delete con;
    } catch (sql::SQLException &e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
    }

    return 0;
}
