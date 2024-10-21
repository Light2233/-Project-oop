#include <iostream>
#include <string>
using namespace std;

class IProduct {
    public:
        virtual string getId() const = 0;
        virtual string getName() const = 0;
        virtual float getPrice() const = 0;
        virtual string getDescription() const = 0;
        virtual string getCategory() const = 0;
    protected:
        virtual void setId(const string& id) = 0;
        virtual void setName(const string& name) = 0;
        virtual void setPrice(const float& price) = 0;
        virtual void setDescription(const string& description) = 0;
        virtual void setCategory(const string& category) = 0;
};


class Product  {
    public:
        string id;
        string name;
        float price;
        string description;
        string category;

        void print() {
            cout << "Name: " << this->name << "\tId: " << this->id << "\tPrice: " << this->price << "\tDescription: " << this->description << endl;
        };

        Product(string id, string name , float price, string description) {
            this->id = id;
            this->name = name;
            this->price = price;
            this->description = description;
        };

        string getId() {
           return this->id; 
        };
        string getName() {
            return this->name;
        };
        string getDescription() {
            return this->description;
        };
        string getCategory() {
            return this->category;
        };
        float getPrice() {
            return this->price;
        };

        void setId(string id) {
            this->id = id;
        };
        void setName(string name) {
            this->name = name;
        };
        void setCategory(string category) {
            this->category = category;
        };
        void setPrice(float price) {
            this->price = price;
        };
        void setDescription(string description) {
            this->description = description;
        };
    
    
};

int main() {
    Product shit{"1","shit",12000,"govnoedus"};
    shit.print();
    string name = shit.getName();
    cout<<"\n"<<name<<endl;
    shit.setPrice(12);
    shit.print();
    return 0;
}