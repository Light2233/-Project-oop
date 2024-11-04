#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H

#include "StoreManager.h"
#include "Product.h"
#include <iostream>
#include <vector>
#include <string>   

class AdminManager : public StoreManager {
private:
    std::string password = "bamcing";
public:
    AdminManager(std::string& adminPassword);
    Product getProduct(std::string& productId);
    void addProduct(Product& product);
    void removeProduct(std::string& productId);
    void updateProductPrice(Product& product, float newPrice);
    void addPromotion(Product& product, float discount);
};

#endif 