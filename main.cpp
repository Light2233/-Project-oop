#include <iostream>
#include <string>
#include <ctype.h>
#include "Headings/Product.h"
#include "Headings/UserManager.h"   
#include "Headings/AdminManager.h"

using namespace std;

int main() {
    int clientStatus;
    string adminPassword;

    cout << "1. Я поукпатель"<<endl;
    cout << "2. Я администратор"<<endl;
    try {
        cin >> clientStatus;
        if (isdigit(clientStatus) || clientStatus <= 0 || clientStatus >= 3) {
            throw(clientStatus);
        }
    }   
    catch(int num){
        cout << "Неверный ввод" << endl;
        return 0;
    }

    if(clientStatus == 1) {
        UserManager user;
    } else {
        try {
            cout << "Введите пароль: ";
            cin >> adminPassword;
            AdminManager admin(adminPassword);
        } catch (const exception& e) {
            cerr << e.what() << endl;
        }
    }




    return 0;
}