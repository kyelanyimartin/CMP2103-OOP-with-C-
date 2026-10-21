#include <iostream>
#include <string>
#include <vector>

// Class 1: Base Class (Grandparent)
class MenuItem {
public: // Using public for complete simplicity
    std::string itemName;
    double basePrice;

    MenuItem(const std::string& name, double price) 
        : itemName(name), basePrice(price) {}

    void displayReceiptHeader() {
        std::cout << "[" << itemName << "] Processing order entry..." << std::endl;
    }
};

// Class 2: Intermediate Class (Parent - Inherits from MenuItem)
class FoodItem : public MenuItem {
public:
    int prepTimeMinutes;

    FoodItem(const std::string& name, double price, int prepTime) 
        : MenuItem(name, price), prepTimeMinutes(prepTime) {}

    void sendToKitchen() {
        std::cout << "Kitchen Alert: Start cooking " << itemName 
                  << ". Estimated prep time: " << prepTimeMinutes << " mins." << std::endl;
    }
};

// Class 3: Ultimate Derived Class (Child - Inherits from FoodItem)
class Pizza : public FoodItem {
public:
    std::string pizzaSize;
    int toppingCount;

    Pizza(const std::string& name, double price, int prepTime, const std::string& size, int toppings) 
        : FoodItem(name, price, prepTime), pizzaSize(size), toppingCount(toppings) {}

    void showOrderDetails() {
        std::cout << "\n--- Ticket Order Summary ---" << std::endl;
        std::cout << "Item Type: " << pizzaSize << " Pizza" << std::endl;
        std::cout << "Toppings: " << toppingCount << " items added" << std::endl;
        std::cout << "Base Price: $" << basePrice << " (Inherited from MenuItem)" << std::endl;
        std::cout << "Kitchen ETA: " << prepTimeMinutes << " mins (Inherited from FoodItem)" << std::endl;
    }
};

int main() {
    // Instantiating the ultimate child class item
    Pizza myOrder("Pepperoni Feast", 14.99, 15, "Large", 3);

    // 1. Calling grandparent function
    myOrder.displayReceiptHeader();

    // 2. Calling parent function
    myOrder.sendToKitchen();

    // 3. Calling local function
    myOrder.showOrderDetails();

    return 0;
}
