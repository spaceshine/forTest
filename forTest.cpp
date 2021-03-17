#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

vector<int> fillVector(vector<int> forFill)
{
    srand(time(0));

    for (int i=0; i < forFill.size(); i++)
    {
        forFill[i] = rand();
        cout << forFill[i] << endl;
    }
    return forFill;
}

int main()
{
    vector<int> vectOfInt(10);

    fillVector(vectOfInt);

    return 0;
}
