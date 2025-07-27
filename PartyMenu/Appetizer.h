#ifndef APPETIZER_H
#define APPETIZER_H

#include "MenuItem.h"

class Appetizer : public MenuItem {
private:
    bool dipIncluded;

public:
    Appetizer(const std::string& name, const std::string& temp, bool dip);
    void display() const override;
};

#endif