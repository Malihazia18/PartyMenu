#include"Dessert.h"
#include<iostream>

Dessert:: Dessert(const std:: string& name,const std:: string& temp, bool sugarFree)
:MenuItem(name, temp), isSugarFree(sugarFree) {}

void Dessert::display() const {
    MenuItem::display();
    std::cout << "Sugar Free: " << (isSugarFree ? "Yes" : "No") << std::endl;
}
