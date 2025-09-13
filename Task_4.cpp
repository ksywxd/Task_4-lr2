#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if (X == Y) {
        X = 0; Y = 0;
    }
    else {
        if (Y < X) {
            Y = 0;
        }
        else {
            X = 0;
        }
            
        
    }
    

        cout << X<< " "<<Y;

    return 0;
}