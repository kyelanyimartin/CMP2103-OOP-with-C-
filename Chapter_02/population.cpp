// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>
using namespace std;

int main()
{
    long long CurrentPopulation = 312032486;
    int totalSecondsInAYear = 365 * 24 * 60 * 60;
    int births = totalSecondsInAYear / 7;      // Number of births per year
    int deaths = totalSecondsInAYear / 13;     // Number of deaths per year
    int immigrants = totalSecondsInAYear / 45; // Number of immigrants per year

    for (int year = 1; year <= 5; year++)
    {
        CurrentPopulation = CurrentPopulation + births - deaths + immigrants;
        cout << "Population after " << year << " year(s): " << CurrentPopulation << endl;
    }
    return 0;
}
