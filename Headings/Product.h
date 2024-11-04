#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product {
public:
    Product();
    Product(std::string id, std::string name, float price, std::string description);
    void print() const;

    std::string getId() const;
    std::string getName() const;
    std::string getDescription() const;
    std::string getCategory() const;
    float getPrice() const;

    std::string id;
    std::string name;
    float price;
    std::string description;
    std::string category;

    void setId(const std::string& id);
    void setName(const std::string& name);
    void setCategory(const std::string& category);
    void setPrice(float price);
    void setDescription(const std::string& description);
};

#endif
