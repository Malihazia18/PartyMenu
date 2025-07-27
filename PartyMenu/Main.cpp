#include"Appetizer.h"
#include"Dessert.h"
#include"MainCourse.h"
#include<iostream>

using namespace std;
int main()
{
Appetizer app("kabab","Hot",true);
app.display();
MainCourse maincourse("Briyani","Hot","Raita");
maincourse.display();
Dessert dess("Fruit Custard","Cold",false);
dess.display();
cout << "\n--- Appetizer ---\n";
    app.display();

cout << "\n--- Main Course ---\n";
    maincourse.display();

cout << "\n--- Dessert ---\n";
    dess.display();

    return 0;

}

