//Code for calculating time for sound to travel through a medium 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    //declaring constants
    
    const double CONVERTED_WOOD = 12631.23;
    const double CONVERTED_STEEL = 10614.81;
    const double CONVERTED_WATER = 4714.57;
    const double CONVERTED_AIR = 1125.33;
    
    //initializing variables

    unsigned int medium;
    double distance;
    double result;
    
    //seting up contents
    
    cout << "\tTime for Sound to Travel through a Medium given Distance";
    cout << endl << endl;
    cout << "1 - Wood" << endl;
    cout << "2 - Steel" << endl;
    cout << "3 - Water" << endl;
    cout << "4 - Air" << endl;
    cout << endl;
    
    // asking type of medium
    
    cout << "Enter the number of the medium: ";
    cin >> medium;
    
    //test case for out of bound
    
    if (medium > 4 || medium < 1)
    {
        cout << endl << "Error, invalid entry!" << endl << "Please run the program again." << endl;
        return 0;
    }
    cout << endl;
    
    //asking distance
    
    cout << "Enter the distance to travel (in feet): ";
    cin >> distance;
    
    //test case for out of bound
    
    if (distance <= 0)
    {
        cout << endl << "Error, the distance must be greater than zero." << endl;
        return 0;
    }
    cout << endl;
    
    //switch statement based on medium type
    
    switch (medium) 
    {
    case 1:
        result = distance / CONVERTED_WOOD;
        cout << "In wood it will take " << fixed << setprecision(4) << result;
        cout << " seconds to travel " << fixed << setprecision(2) << distance << " feet." << endl;
        break;
    case 2:
        result = distance / CONVERTED_STEEL;
        cout << "In steel it will take " << fixed << setprecision(4) << result;
        cout << " seconds to travel " << fixed << setprecision(2) << distance << " feet." << endl;
        break;
    case 3:
        result = distance / CONVERTED_WATER;
        cout << "In water it will take " << fixed << setprecision(4) << result;
        cout << " seconds to travel " << fixed << setprecision(2) << distance << " feet." << endl;
        break;
     case 4:
        result = distance / CONVERTED_AIR;
        cout << "In air it will take " << fixed << setprecision(4) << result;
        cout << " seconds to travel " << fixed << setprecision(2) << distance << " feet." << endl;
        break;
    }
    return 0;
}
