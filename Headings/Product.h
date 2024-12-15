#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>
#include <algorithm>
#include "IObserver.h"
#include <iostream>

class Product {
private:
    std::string id;
    std::string name;
    float price;
    float discount;
    std::string description;
    std::vector<IObserver*> observers;
public:
    Product(const std::string& id, const std::string& name, float price, const std::string& description, float discount);
    void addObserver(IObserver* observer);
    void removeObserver(IObserver* observer);
    void notifyObservers();
    void setPrice(float newPrice);
    void setDiscount(float newDiscount); 
    void setDescription(std::string& newDescription);
    
    const std::string& getId() const;
    const std::string& getName() const;
    float getPrice() const;
    const std::string& getDescription() const;
    void print() const;
};

#endif
