#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H

#include "StoreManager.h"
#include "Product.h"
#include <vector>
#include <fstream>
#include <iostream>

class AdminManager : public StoreManager {
private:
    std::string password = "admin"; 

public:
    AdminManager(std::string& adminPassword);
    void addProduct(Product& product);
    void removeProduct(std::string& productId);
    void updateProductPrice(Product& product, float newPrice);
    void setProductPromotion(Product& product, float discount);
};

#endif
