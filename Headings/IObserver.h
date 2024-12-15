#ifndef IOBSERVER_H
#define IOBSERVER_H

#include "Product.h"

class Product;

class IObserver {
public:
    virtual void update(Product& product) = 0;
    virtual ~IObserver() = default;
};

#endif
