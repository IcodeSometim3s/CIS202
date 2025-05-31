/* 
    File: main.cpp 
    Description: Make a list of pizzas with size, name, and price and sort it by price, then sort by name, and sort by size and print sorted list each time
    Author: Jose Gonzalez
    Email: joseg7211@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 5/29/2025
*/
#include <iostream>
#include <vector>
#include <algorithm>

struct PizzaOrderWithPrice {
    std::string name;
    int size;
    double price;
};

struct PizzaOrder {
    std::string name;
    int size;
};

int main() {
    std::vector<PizzaOrderWithPrice> ordersPrice = {
        {"Alice", 12, 15.85}, {"Bob", 16, 20.39}, {"Charlie", 10, 12.45}
    };
    std::vector<PizzaOrder> orders = {
        {"Alice", 12}, {"Bob", 16}, {"Charlie", 10}
    };
    
//sorts priced list and prints the results
    std::sort(ordersPrice.begin(), ordersPrice.end(), [](const PizzaOrderWithPrice& a, const PizzaOrderWithPrice& b) {
       auto temp = a.price < b.price;
        return temp;
    });

    std::cout << "Orders sorted by price:" << "\n";
    for (const auto& order : ordersPrice)
        std::cout << "Pizza Price: $" <<order.price << "\n";

    std::cout << "\n";

//sorts the orders list by name and prints the results
    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
       auto temp = a.name < b.name;
        return temp;
    });

    std::cout << "Orders sorted by Name alphabetically:" << "\n";
    for (const auto& order : orders)
        std::cout << order.name << "\n";

    std::cout << "\n";

//sorts the orders list by size and prints the results

    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
       auto temp = a.size < b.size;
        return temp;
    });

    std::cout << "Orders sorted by size:" << "\n";
    for (const auto& order : orders)
        std::cout << order.name << ": " << order.size << " inches\n";

    std::cout << "\n";
        
    return 0;
}
