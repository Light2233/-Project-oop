#include "../Headings/AdminManager.h"
#include "../Headings/Product.h"

#include <vector>

using namespace std;


AdminManager::AdminManager(string& adminPassword) {
    if (adminPassword != password) {
        throw invalid_argument("\nНеверный пароль\n");
    }
    cout << "\nДоступ разрешен\n" << endl;
}

void AdminManager::addProduct(Product& product) {
    products.push_back(product);
    cout << "\nТовар добавлен: " << product.getName() << endl;
}

void AdminManager::removeProduct(string& productId) {
    for (auto it = products.begin(); it != products.end(); ) {
        if (it->getId() == productId) {
            it = products.erase(it);
            cout << "Товар успешно удален" << endl;
            return;
        } else {
            ++it; 
        }
    }
    cout << "Товара с данным ID не существует" << endl;
}

void AdminManager::updateProductPrice(Product& product, float newPrice) {
    product.setPrice(newPrice);
    cout << "\nЦена на продукт " << product.getName() << " обновлена до " << newPrice << endl;
}

void AdminManager::setProductPromotion(Product& product, float discount) {
    product.setDiscount(discount);
    cout << "\nНа товар: " << product.getName() << " действует " << discount << "% скидка" << endl;
    return;
}


