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

    

    cout<< "Добавление товаров в общий массив товаров и вывод общей таблицы товаров" << endl;

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

        // Добавим админа для симуляции изменения цены
        adminPassword = "admin";
        AdminManager admin(adminPassword);
        Product product1("1", "Товар 1", 100.0, "Описание товара 1",0);
        Product product2("2", "Товар 2", 1000.0, "Описание товара 2",0);

        admin.addProduct(product1);
        admin.addProduct(product2);

        cout<< "Вывод товаров в корзине" << endl;
        user.viewCart();

        cout<< "Добавим товары в корзину" << endl;
        user.addToCart(product1);
        user.addToCart(product2);

        cout<< "Вывод товаров в корзине" << endl;
        user.viewCart();


        cout<< "Добавим скидку на товар через админа" << endl;
        admin.setProductPromotion(product1,30);

    } else {
        AdminManager* admin = nullptr;
        try {
            cout << "Введите пароль: ";
            cin >> adminPassword;
            admin = new AdminManager(adminPassword);
        } catch (const exception& e) {
            cerr << e.what() << endl;
        }
        if(admin){
            Product product3("3", "Товар 3", 10000.0, "Описание товара 3",0);
            admin->addProduct(product3);
            admin->viewProductList();
            admin->updateProductPrice(product3,22222);
            cout<< "Удалим товар с ID 3" << endl;
            string cnt = "3";
            admin->removeProduct(cnt);
            admin->viewProductList();
        }
    }

    return 0;
}