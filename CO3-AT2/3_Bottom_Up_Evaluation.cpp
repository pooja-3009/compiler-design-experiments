#include <iostream>
using namespace std;

int main() {

    // Expression: 3 + 4 * 2

    int a = 3;
    int b = 4;
    int c = 2;

    // Bottom-up evaluation:
    // First evaluate multiplication
    int multiplication = b * c;

    // Then evaluate addition
    int result = a + multiplication;

    cout << "Expression: 3 + 4 * 2" << endl;

    cout << "Step 1: Evaluate 4 * 2 = "
         << multiplication << endl;

    cout << "Step 2: Evaluate 3 + 8 = "
         << result << endl;

    cout << "Final Result = "
         << result << endl;

    return 0;
}