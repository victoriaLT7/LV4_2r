// Victoria Levačić Tkalec, 2. B
// LV4 - 3 ZADATAK 

#include <iostream>
using namespace std;

int brojIznadPraga(int temp[][6], int redak, int P)
{
    int veca = 0;
    for (int i = 0;i < 6;i++)
    {
        if (temp[redak][i] > P) veca++;
    }
    return veca;
}

int main()
{
    int redak, P; cin >> P >>redak;
    int temp[4][6];
    for (int i = 0;i < 4;i++) 
    {
        for (int j = 0;j < 6;j++) cin >> temp[i][j];
    }
    cout << brojIznadPraga(temp,redak,P) << endl;
}


