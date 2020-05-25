#include <iostream>

using namespace std;

int testCNP(char cnp[]);

int main()
{
    char nume[20], prenume[20], cnp[20];

    cout << "Introduceti numele: "; cin >> nume;
    cout << "Introduceti prenumele: "; cin >> prenume;
    cout << "Introduceti CNP-ul: "; cin >> cnp;

    while (!testCNP(cnp))
    {
        cout << "CNP Incorect!" << endl;
        cout << "Introduceti numele: "; cin >> nume;
        cout << "Introduceti prenumele: "; cin >> prenume;
        cout << "Introduceti CNP-ul: "; cin >> cnp;
        if ( testCNP(cnp) )
            break;
    }
    return 0;
}

int testCNP(char cnp[])
{
    int i, car_control, suma = 0;

    char cheie[] = "279146358279";

    for (i = 0; i < 12; i++)
    {
        suma += (cheie[i] - '0') * (cnp[i] - '0');
    }
    car_control = suma % 11;

    if (car_control == 10)
        car_control = 1;
    if (car_control == cnp[12] - '0')
        return 1;
    else
        return 0;
}
