#include "../Headings/StoreManager.h"

using namespace std;

void StoreManager::viewProductList() const {
    cout << "\nСписок всех товаров:\n";
    for (const auto& product : products) {
        product.print();
    }
}

void StoreManager::addProduct(Product& product) {
    products.push_back(product);
    cout << "\nДобавлен товар: " << product.getName() << endl;
}

Product* StoreManager::getProductById(string& productId) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            return &product;
        }
    }
    cout << "Товар с таким ID не найден." << endl;
    return nullptr;
}
