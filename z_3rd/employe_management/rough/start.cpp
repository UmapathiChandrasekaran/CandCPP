#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    start:
    cout << "\nEnter the option";
    cout << "\n1. Show all records";
    cout << "\n2. Search records";
    cout << "\n3. Reporting manager";
    cout << "\n4. Reporting Tree";
    cout << "\n5. Summary";
    cout << "\n6. Exit\n";
    cin >> n;
    switch(n)
    {
        case 1:
        cout << "record showen";
        goto start;
        break;
         case 2:
        cout << "record searched";
        goto start;
        break;
        case 3:
        cout << "Reported manager";
        goto start;
        break;
        case 4:
        cout << "Reported Tree";
        goto start;
        break;
        case 5:
        cout << "summary shown";
        goto start;
        break;
        case 6:
        cout << "Exited sucessfully";
        break;
        default:cout<<"enter a valid number";
        break;
    }
    return 0;
}
