#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int aSold, bSold, cSold;
    double aRev, bRev, cRev, tRev;
    const double APRICE=15, BPRICE=12, CPRICE=9;

    cout << "Enter Seat A: ";
    cin >> aSold;
    cout << "Enter Seat B: ";
    cin >> bSold;
    cout << "Enter Seat C: ";
    cin >> cSold;

    aRev = aSold * APRICE;
    bRev = bSold * BPRICE;
    cRev = cSold * CPRICE;
    tRev = aRev + bRev + cRev;


    cout << fixed << showpoint << setprecision(2);

    cout << "A Seats" << setw(37) << "$" << setw(10) << aRev << endl;
    cout << "B Seats" << setw(37) << "$" << setw(10) << bRev << endl;
    cout << "C Seats" << setw(37) << "$" << setw(10) << cRev << endl;
    cout << "Total Revenue" << setw(31) << "$" << setw(10) << tRev << endl;

    return 0;
}
