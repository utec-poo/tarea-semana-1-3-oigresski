#include <iostream>
using namespace std;
typedef int entero;
entero zona = 0;
char claro;
int main() {
    cout << "Ingrese la zona: ";
    cin >> zona;
    switch (zona)
    {
        case 1:
            cout << "Zona super VIP, 212 soles";
            break;
        case 2:
            cout << " VIP, 170 soles";
            break;
        case 3:
            cout << "Preferencial, 136 soles";
            break;
        case 4:
            cout << "General, 59 soles";
            break;

    }
    cout << "\nClaro: ";
    cin >> claro;
if (claro == 'Y')
    cout << "20% de descuento mas ";
else
    cout << "no hay descuento";

// ToDO

    return 0;
}
