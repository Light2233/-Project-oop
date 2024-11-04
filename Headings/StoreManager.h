#ifndef STOREMANAGER_H
#define STOREMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include "Product.h" 

class StoreManager {
public:
    virtual void viewProducts() const;

protected:
    std::vector<Product> products;
};

#endif 