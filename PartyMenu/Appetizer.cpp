#include "Appetizer.h"
#include <iostream>

Appetizer::Appetizer(const std::string& name, const std::string& temp, bool dip)
    : MenuItem(name, temp), dipIncluded(dip) {}

void Appetizer::display() const {
    MenuItem::display();
    std::cout << "Dip Included: " << (dipIncluded ? "Yes" : "No") << std::endl;
}