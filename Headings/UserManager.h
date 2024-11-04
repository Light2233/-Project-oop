#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "StoreManager.h"
#include "Product.h"
#include <iostream>
#include <vector>
#include <string>

class UserManager : public StoreManager {
public:
    void addToCart(Product& product);
    void viewCart() const;

private:
    std::vector<Product> cart;
};

#endif 
