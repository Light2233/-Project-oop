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

Product AdminManager::getProduct(string& productId) {
    for (const auto& product : products) {
        if (product.getId() == productId) {
            return product;
        }
    }
    cout << "\nТовара с таким id не найдено\n" << endl;
    return Product();
}

void AdminManager::removeProduct(string& productId) {
    for (auto it = products.begin(); it != products.end(); ) {
        if (it->getId() == productId) {
            it = products.erase(it); 
        } else {
            ++it; 
        }
    }
}

void AdminManager::updateProductPrice(Product& product, float newPrice) {
    product.setPrice(newPrice);
    cout << "\nЦена на продукт " << product.getName() << " обновлена до " << newPrice << endl;
    return;
}

void AdminManager::addPromotion(Product& product, float discount) {
    float newPrice = product.getPrice() * (1 - discount / 100);
    product.setPrice(newPrice);
    cout << "\nНа товар: " << product.getName() << " действует " << discount << "% скидка" << endl;
    return;
}
