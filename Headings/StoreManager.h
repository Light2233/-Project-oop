#ifndef STOREMANAGER_H
#define STOREMANAGER_H

#include "Product.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

class StoreManager {
protected:
    std::vector<Product> products; 
public:
    void viewProductList() const;
    void addProduct(Product& product);
    Product* getProductById(std::string& productId);
};

#endif


