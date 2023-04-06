#include "Car.h"
#include <iostream>
#include "PersonDriver.h"
#include "Owner.h"

using namespace std;

int main()
{
    Car c("BMW", "Red", 270);
    Car c1("BMW", "White", 200);
    c.print();
    c = c + 30;
    c.print();

    PersonDriver person1("John Doe", 30, true); 
    PersonDriver person2("Jane Smith", 65, true); 

    person1.print();
    cout << "Can Drive: " << (person1.canDrive() ? "Yes" : "No") << endl;
    cout << endl;

    // Compare ages
    if (person1 > person2) {
        cout << person1.getName() << " is older than " << person2.getName() << endl;
    }
    else if (person1 < person2) {
        cout << person1.getName() << " is younger than " << person2.getName() << endl;
    }
    else {
        cout << person1.getName() << " and " << person2.getName() << " are of the same age" << endl;
    }

    /*
    Owner person2("Ivan", 30, true, c1);
    person2.print();
    */

    return 0;
}
