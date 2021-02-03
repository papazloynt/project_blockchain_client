//
// Created by chastikov on 03.02.2021.
//

#ifndef SUGGESTCLIENT_CLIENT_HPP
#define SUGGESTCLIENT_CLIENT_HPP

// c++ headers
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <random>

// SQLite3
#include <sqlite3.h>

// PicoSHA2
#include <picosha2.h>

int callback(void* NotUsed, int args, char** argv, char** azColName){
    return 1;
}

class BlockChainClient {
public:
    BlockChainClient(){
        std::cout << "Press 1 to enter the system.\n"
        << "Press 2 to register in the system." << std::endl;

        short p;
        std::cin >> p;
        switch (p){
            case 1:
                Authorization();
                break;
            case 2:
                Registration();
                break;
            default:
                //мб тут к верху вернуться?
                std::cout << "Unknown command!";
                exit (1);
        }

        while (true) {
            std::cout << "Функционал сервиса:\n"
                         "Введите 1 чтобы сделать транзакцию.\n"
                         "Введите 2 чтобы пополнит баланс.\n"
                         "Введите 3 чтобы получить данные о балансе.\n"
                         "Введите 4 чтобы выйти из системы." << std::endl;
            std::cin >> p;

            switch (p) {
                case 1:
                    Transaction();
                    break;
                case 2:
                    AddSum();
                    break;
                case 3:
                    GetInfo();
                    break;
                case 4:
                    std::cout << "Goodbye :)" << std::endl;
                    exit(2);
                default:
                    std::cout << "Unknown command!";
                    break;
            }
        }
    }

    std::string name;
    std::string status;
    sqlite3* db;

private:
    void Authorization(){
        //Путь до БД
        sqlite3_open(/*path*/, &db);
        while (true) {
            std::cout << "Input your login:" << std::endl;
            std::cin >> name;

            std::string hash;
            std::cout << "Input your password hash:" << std::endl;
            std::cin >> hash;

            //Shared_mutex для чтения!!
            //Костыль
            std::string sql_request = "SELECT name, sum FROM information WHERE "
                                      "name='" + name + "' and "
                                                        "password='" + hash + "'";

            int rc = sqlite3_exec(db, sql_request.c_str(), callback, NULL, NULL);
            if (rc == 0) {
                std::cout << "Wrong login or password! Please try again." << std::endl;
            } else {
                std::cout << "Welcome to the system " << name << std::endl;
                sqlite3_close(db);
                break;
            }
            std::this_thread::sleep_for(std::chrono::minutes(5));
        }
    }

    void Registration(){
        sqlite3_open(/*path*/, &db);
        std::cout << "Please input your login: " << std::endl;
        std::cin >> name;

        thread_local std::mt19937 gen(std::random_device{}());
        std::string randomString = std::to_string(gen());
        //Добавить Пикошу
        std::string password =
                picosha2::hash256_hex_string(randomString + name);

        char* err;
        //unique lock
        std::string sql_request = "INSERT INTO information (name, password, sum) "
                                  "VALUES ("
                                  "'" + name + "',"
                                  " '" + password + "',"
                                  " 0);";
        int rc = sqlite3_exec(db, sql_request.c_str(),
                              NULL, NULL, &err);

        if ( rc != SQLITE_OK) {
            std::cout << "error:" << err << std::endl;
        }
        sqlite3_close(db);
        std::cout << "Your password: " << password << std::endl
        << "Please do not lose it, otherwise you will lose access to the wallet."
        << std::endl << std::endl << std::endl;
        std::cout << "Welcome to the system " << name << std::endl;
    }
    //Не работает из-за того, что не связано с прошлым проектом
    void Transaction(){

    }
    //Добавление в прото
    void AddSum();
    void GetInfo();
};






#endif //SUGGESTCLIENT_CLIENT_HPP
