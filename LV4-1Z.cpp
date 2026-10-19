// Victoria Levacic Tkalec, 2. B
// LV4 1 ZADATAK 

#include <iostream>
using namespace std;

int brojPaketa(int mase[], int n, int L, int D)
{
    int brzaTraka = 0;
    for (int i = 0;i < n;i++)
    {
        if (mase[i] >= L && mase[i] <= D) brzaTraka++;
    }
    return brzaTraka;
}

int main()
{
    int brojevi, n; cin >> n;
    int* mase = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> brojevi;
        mase[i] = brojevi;
    }
    int L, D; cin >> L >> D;
    cout << brojPaketa(mase, n, L, D) << endl;
}