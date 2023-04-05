#include <iostream>
#include "Manager.h"

int main()
{
    Manager m("Ivan", 3569, 4, "Informatika");
    m.print();
    cout << m;

    return 0;
}
