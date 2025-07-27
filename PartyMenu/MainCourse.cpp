#include "MainCourse.h"
#include <iostream>

MainCourse::MainCourse(const std::string& name, const std::string& temp, const std::string& side)
    : MenuItem(name, temp), sideDish(side) {}

void MainCourse::display() const {
    MenuItem::display();
    std::cout << "Side Dish: " << sideDish << std::endl;
}

