#include "../Headings/Product.h"
#include <iostream>
using namespace std;

Product::Product(const string& id, const string& name, float price, const string& description, float discount)
    : id(id), name(name), price(price), description(description), discount(discount) {}

void Product::addObserver(IObserver* observer) {
    observers.push_back(observer);
}

void Product::removeObserver(IObserver* observer) {
    observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
}

void Product::notifyObservers() {
    for (IObserver* observer : observers) {
        observer->update(*this);
    }
}

void Product::setPrice(float newPrice) {
    price = newPrice;
    notifyObservers(); 
}

void Product::setDiscount(float newdiscount) { 
    discount = newdiscount;
    notifyObservers();
}

void Product::setDescription(string& newDescription) {
    description = newDescription;
}

const string& Product::getId() const { return id; }
const string& Product::getName() const { return name; }
float Product::getPrice() const {
    if(discount != 0){
        return price * (1 - discount / 100);
    }
    return price; 
}
const string& Product::getDescription() const { return description; }

void Product::print() const {
    cout << "ID: " << id << "\nName: " << name << "\nPrice: " << price << "\nDescription: " << description << endl;
}
