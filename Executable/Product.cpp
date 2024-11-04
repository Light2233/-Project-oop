#include "../Headings/Product.h"
using namespace std;

Product::Product() {

}

Product::Product(string id, string name, float price, string description)
    : id(id), name(name), price(price), description(description) {}

void Product::print() const {
    cout << "Name: " << name << "\tId: " << id << "\tPrice: " << price << "\tDescription: " << description << endl;
}

string Product::getId() const {
    return id;
}

string Product::getName() const {
    return name;
}

string Product::getDescription() const {
    return description;
}

string Product::getCategory() const {
    return category;
}

float Product::getPrice() const {
    return price;
}

void Product::setId(const string& newId) {
    id = newId;
}

void Product::setName(const string& newName) {
    name = newName;
}

void Product::setCategory(const string& newCategory) {
    category = newCategory;
}

void Product::setPrice(float newPrice) {
    price = newPrice;
}

void Product::setDescription(const string& newDescription) {
    description = newDescription;
}
