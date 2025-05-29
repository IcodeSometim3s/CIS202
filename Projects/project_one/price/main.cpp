/* 
    File: main.cpp 
    Description: Make a list of pizzas with size, name, and price and sort it by price and print sorted list
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

int main() {
    std::vector<PizzaOrderWithPrice> orders = {
        {"Alice", 12, 15.85}, {"Bob", 16, 20.39}, {"Charlie", 10, 12.45}
    };

    std::sort(orders.begin(), orders.end(), [](const PizzaOrderWithPrice& a, const PizzaOrderWithPrice& b) {
       auto temp = a.price < b.price;
        return temp;
    });

    for (const auto& order : orders)
        std::cout << "Pizza Price: $" <<order.price << "\n";

    return 0;
}
