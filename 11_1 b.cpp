#include <iostream>
using namespace std;

int main()
{
    char nazva;
    cout << "\n Enter the first letter of the country from the list: Ukraine, America, Poland, Turkey, Sweden: ";
    cin >> nazva;
    if (nazva == 'U')
    {
        cout << "\n Ukraine: population - 44 million, number of cities - 272";
    }
    if (nazva == 'A')
    {
        cout << "\n America: population - 332 million, number of cities - 30000";
    }
    if (nazva == 'P')
    {
        cout << "\n Poland: population - 38 million, number of cities - 964";
    }
    if (nazva == 'T')
    {
        cout << "\n Turkey: population - 85 million, number of cities - 200";
    }
    if (nazva == 'S')
    {
        cout << "\n Sweden: population - 10.5 million, number of cities - 96";
    }
    if (nazva == 'G')
    {
        cout << "\n Germany: population - 83 million, number of cities - 2054";
    }
    if (nazva == 'B')
    {
        cout << "\n Bulgaria: population - 7 million, number of cities - 96";
    }
    
    else
    {
        cout << "\n You entered an incorrect letter, please enter a capital letter U, A, P, T, S, G, or B!";
    }
    
    

}

