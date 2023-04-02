#include "Programmer.h"
#include <iostream>

using namespace std;

int main()
{
    Employee e;
    Programmer p("Ivan", 1689);
    cout << e << endl;
    cout << p << endl;
    e.set_name("Petyr");
    cout << e.get_name() << endl;
    cout << p.get_name() << endl;
    e = p;
    cout << e;


    return 0;
}
