#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i{};
    int counter = 0;
    for (int i = 1; i <= 500; i++)
    {
        if ((i % 4 == 0) && (i % 3 == 0))
        {
            cout << i << " ";
            counter++;
            if (counter % 5 == 0)
            {
                cout << " \n";
            }
        }
    }
    return 0;
}
