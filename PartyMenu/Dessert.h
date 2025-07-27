#ifndef DESSERT_H
#define DESSERT_H

#include "MenuItem.h"

class Dessert : public MenuItem {
private:
    bool isSugarFree;

public:
    Dessert(const std::string& name, const std::string& temp, bool sugarFree);
    void display() const override;
};

#endif
