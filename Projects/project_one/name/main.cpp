/* 
    File: main.cpp 
    Description: Make a list of pizzas with size, name and sort it by name and print the sort
    Author: Jose Gonzalez
    Email: joseg7211@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 5/29/2025
*/
#include <iostream>
#include <vector>
#include <algorithm>

struct PizzaOrder {
    std::string name;
    int size;
};

int main() {
    std::vector<PizzaOrder> orders = {
        {"Alice", 12}, {"Bob", 16}, {"Charlie", 10}
    };

    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
       auto temp = a.name < b.name;
        return temp;
    });

    for (const auto& order : orders)
        std::cout << order.name << "\n";

    return 0;
}
