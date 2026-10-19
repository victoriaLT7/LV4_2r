// Victoria Levacic Tkalec, 2.B
// LV4 - 2 ZADATAK 

#include <iostream>
using namespace std;

void ispraviMjerenja(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        if (a[i] < 0) cout <<  0 << " ";
        else cout << a[i] << " ";
    }
}

int main()
{
    double brojevi;
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> brojevi;
        a[i] = brojevi;
    }
    ispraviMjerenja(a, n);
}
