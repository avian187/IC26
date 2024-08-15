#include <iostream>
#include <vector>
#include "Coffee.h"

using namespace std;

int main() {

    int choice = 0, bevType = 0, calories = 0, caffeine = 0;
    string name, roast;
    char size;

    vector<Beverage*> orders;
    do {
        cout << endl

             << "******************************************************************"
                "*******\n"
             << "**                         Welcome to BevMoMo                     "
                "     **\n"
             << "******************************************************************"
                "*******\n"
             << "** Please enter choice :                                          "
                "     **\n"
             << "** 1) Place a beverage order                                      "
                "     **\n"
             << "** 2) Display all beverage orders                                 "
                "     **\n"
             << "** 3) Quit                                                        "
                "     **\n"
             << "******************************************************************"
                "*******\n>> ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter 1 for Beverage or 2 for Coffee >> ";
                cin >> bevType;
                cout << "Enter beverage name     >> ";
                cin.ignore(INT_MAX, '\n');
                getline(cin, name);
                cout << "Enter calories          >> ";
                cin >> calories;
                cout << "Enter size (S=Small, M=Medium, or L=Large) >> ";
                cin >> size;

                if (bevType == 1) {
                    orders.push_back(new Beverage(name, calories, size));
                } else {
                    cout << "Enter caffeine (in mg)   >> ";
                    cin >> caffeine;
                    cout << "Enter roast type         >> ";
                    cin.ignore(INT_MAX, '\n');
                    getline(cin, roast);
                    orders.push_back(new Coffee(name, calories, size, caffeine, roast));
                }
                break;
            case 2:
                cout << endl
                     << "****************************************************************"
                        "*********\n"
                     << "**                         All Beverage Orders                  "
                        "       **\n"
                     << "****************************************************************"
                        "*********\n"
                     << "| Order # | Name           | Calories | Size | Caffeine (mg) | "
                        "Roast    |\n"
                     << "****************************************************************"
                        "*********\n";
                for (auto order : orders) {
                    cout << *order << endl;
                }
                cout << "****************************************************************"
                        "*********\n";
                break;
            case 3:
                cout << "\nEnjoy your beverages!\n\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    for (auto order : orders) {
        delete order;
    }




}
