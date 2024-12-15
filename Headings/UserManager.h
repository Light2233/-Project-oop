#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "StoreManager.h"
#include "IObserver.h"
#include <vector>
#include <iostream>

class UserManager : public StoreManager, public IObserver {
private:
    std::vector<Product> cart;

public:
    void addToCart(Product& product);

    void removeFromCart(std::string& productId);

    void update(Product& product);

    void viewCart() const;
    
};

#endif 
