#include "../Headings/StoreManager.h"
using namespace std;

void StoreManager::viewProducts() const {
    cout << "\nСписок всех товаров:\n";
    for (const auto& product : products) {
        product.print();
    }

}