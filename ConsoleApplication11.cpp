#include <iostream>

class Overcoat {
private:
    std::string type;
    double price;

public:
    Overcoat() : type(""), price(0.0) {}

    Overcoat(const std::string& _type, double _price) : type(_type), price(_price) {}

    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        return price > other.price;
    }

    void displayInfo() const {
        std::cout << "Type: " << type << ", Price: " << price << std::endl;
    }
};

int main() {
    Overcoat coat1("Winter", 150.0);
    Overcoat coat2("Spring", 120.0);
    Overcoat coat3("Winter", 180.0);

    if (coat1 == coat3) {
        std::cout << "Coat 1 and Coat 3 have the same type." << std::endl;
    }
    else {
        std::cout << "Coat 1 and Coat 3 have different types." << std::endl;
    }

    coat2 = coat1;
    std::cout << "Coat 2 after assignment: ";
    coat2.displayInfo();

    if (coat1 > coat2) {
        std::cout << "Coat 1 is more expensive than Coat 2." << std::endl;
    }
    else {
        std::cout << "Coat 1 is not more expensive than Coat 2." << std::endl;
    }

    return 0;
}
