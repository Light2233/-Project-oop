#include "../Headings/UserManager.h"
#include "../Headings/Product.h"
using namespace std;

void UserManager::addToCart(Product& product) {
    cart.push_back(product);
    cout << "\nДобавлено в корзину: " << product.getName() << endl;
}

void UserManager::viewCart() const {
    if (cart.empty()) {
        cout << "Корзина пуста" << endl;
        return;
    }
    cout << "\nСодержимое корзины: " << endl;
    for (const auto& product : cart) {
        product.print();
    }
}