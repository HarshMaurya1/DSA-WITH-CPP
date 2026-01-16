#include <iostream>
#include <string>
#include <windows.h>   // Sleep()

using namespace std;

// Slow print function
void slowPrint(string text, int delay)
{
    for (char c : text)
    {
        cout << c << flush;
        Sleep(delay);   // delay in milliseconds
    }
    cout << endl;
}

int main()
{
    slowPrint(" Tum hi ho, ab tum hi ho...", 80);
    Sleep(700);

    slowPrint("Zindagi ab tum hi ho...", 80);
    Sleep(700);

    slowPrint("Chain bhi, mera dard bhi...", 80);
    Sleep(700);

    slowPrint("Meri aashiqui ab tum hi ho ", 80);

    return 0;
}
