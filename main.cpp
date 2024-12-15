#include <iostream>
#include <string>
#include <ctype.h>
#include "Headings/Product.h"
#include "Headings/UserManager.h"   
#include "Headings/AdminManager.h"
#include "Headings/StoreManager.h"
#include "Headings/IObserver.h"

using namespace std;

int main() {
    int clientStatus;
    string adminPassword;
    StoreManager store;

    Product product1("001", "Товар 1", 100.0, "Описание товара 1",0);
    Product product2("002", "Товар 2", 1000.0, "Описание товара 2",0);

    store.addProduct(product1);
    store.addProduct(product2);
    store.viewProductList();

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

        user.viewCart();
        user.addToCart(product1);
        user.addToCart(product2);
        user.viewCart();

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