#include <iostream>
#include <string>
using namespace std;

bool displayCalc = false;

int recursivecheck(int start)
{
    if (displayCalc){cout << start << " ";}

    int check = start;
    if (check == 1){return check;}
    else if (check % 2 == 0){recursivecheck(check / 2);}
    else{recursivecheck( (check * 3) + 1);}
    return 0;
}

int main()
{
    string maxtocheck;
    int highestvalue = 1;
    cout << "This is a stupid piece of code and is going to be very inefficient\nUse it if you want to warm up your thermal paste...\n";
    cout << "Up to what numbers do you want to check: ";
    getline(cin, maxtocheck);

    while (highestvalue <= std::stoi(maxtocheck) )
    {
        cout << endl << highestvalue << ": ";
        recursivecheck(highestvalue);        
        highestvalue++;
    }
    cout << endl;
   return 0;
}