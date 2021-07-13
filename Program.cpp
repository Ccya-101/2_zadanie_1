#include <iostream>
#include <cmath>
#include "Koren_3_stepeni.h"
#include "Koren_4_stepeni.h"
#include "Koren_5_stepeni.h"
#include "Koren_6_stepeni.h"
using namespace std;
int main()
{

    int Chislo, Stepen;
    double Result = 0;

    cout << "Enter chislo:\n";
    cin >> Chislo;

    int command;
    while (1) {
        cout << "Enter command:\n";
        cout << "1) Calculating the root of the 3th degree using the differential.\n";
        cout << "2) Calculating the root of the 4th degree using the differential.\n";
        cout << "3) Calculating the root of the 5th degree using the differential.\n";
        cout << "4) Calculating the root of the 6th degree using the differential.\n";
        cout << "5) Exit.\n";
        cin >> command;
        switch (command) {
        case 1:
            Result = VichWithDifff(Chislo, 3);
            cout << "\nresult = " << Result;
            break;
        case 2:
            Result = VichWithDiffff(Chislo, 4);
            cout << "\nresult = " << Result;
            break;
        case 3:
            Result = VichWithDifffff(Chislo, 5);
            cout << "\nresult = " << Result;
            break;
        case 4:
            Result = VichWithDiffffff(Chislo, 6);
            cout << "\nresult = " << Result;
            break;
        case 5:
            return 0;
        default:
            cout << "Unknown command\n";
            break;
        }
        return 0;
    }
}
