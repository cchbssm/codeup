#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    char ope;
    cin >> n1 >> ope >> n2;
    
    switch(ope){
        case 42: // *
            cout << n1*n2;
            break;
        case 43: // +
            cout << n1+n2;
            break;
        case 45: // -
            cout << n1-n2;
            break;
        case 47: // /
            cout << fixed;
            cout.precision(2);
            cout << (float)n1/n2;
            break;
    }
    
    return 0;
}
