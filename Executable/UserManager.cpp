#include "../Headings/UserManager.h"
#include "../Headings/Product.h"
#include "../Headings/IObserver.h" 
using namespace std;

void UserManager::addToCart(Product& product) {
    cart.push_back(product);
    product.addObserver(this); 
    cout << "\nДобавлено в корзину: " << product.getName() << endl;
}

void UserManager::removeFromCart(string& productId) {
    for (auto it = cart.begin(); it != cart.end(); ) {
        if (it->getId() == productId) {
            it->removeObserver(this);  
            it = cart.erase(it);
            cout << "\nТовар удален из корзины: " << productId << endl;
        } else {
            ++it;
        }
    }
}

void UserManager::update(Product& product) {
    cout << "\nУведомление: Товар " << product.getName() << " обновлен! Новая цена: " << product.getPrice() << endl;
}

void UserManager::viewCart() const {
    if (cart.empty()) {
        cout << "Корзина пуста" << endl;
        return;
    }
    cout << "\nСодержимое корзины:\n";
    for (const auto& product : cart) {
        product.print();
    }
}

