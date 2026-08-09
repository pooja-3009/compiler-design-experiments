#include <iostream>
#include <string>
using namespace std;

bool compatible(string type1, string type2) {

    if (type1 == type2)
        return true;

    // Allow integer to float conversion
    if (type1 == "int" && type2 == "float")
        return true;

    return false;
}

int main() {

    string type1, type2;

    cout << "Simple Type Checker" << endl;

    cout << "Enter first data type (int/float/boolean): ";
    cin >> type1;

    cout << "Enter second data type (int/float/boolean): ";
    cin >> type2;

    if (compatible(type1, type2)) {
        cout << "Types are compatible." << endl;

        if (type1 != type2)
            cout << "Automatic type conversion can be performed." << endl;
    }
    else {
        cout << "Type Error: Types are not compatible." << endl;
    }

    return 0;
}