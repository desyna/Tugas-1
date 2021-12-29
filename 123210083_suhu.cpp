<<<<<<< HEAD
#include <iostream>

using namespace std;
int main()
{
    float c, f, k, r;
    
    int jumlah;

    cout << "\tKonverter Suhu Celcius ke Fahrenheit, Kelvin, dan Reamur\n";
    
    cout << "\nMasukkan Suhu Celcius : ";
    cin >> c;

    f = (c * 9/5) + 32;
    k = 273 + c;
    r = (c * 4/5);

    cout << "\n" << c << " C = " << f << " F";
    cout << "\n" << c << " C = " << k << " K";
    cout << "\n" << c << " C = " << r << " R";

    cout << "\n\n\tThank You (^_^)";

    return 0;
=======
#include <iostream>

using namespace std;
int main()
{
    float c, f, k, r;
    
    int jumlah;

    cout << "\tKonverter Suhu Celcius ke Fahrenheit, Kelvin, dan Reamur\n";
    
    cout << "\nMasukkan Suhu Celcius : ";
    cin >> c;

    f = (9/5 * c) + 32;
    k = 273 + c;
    r = (4/9 * c) + 32;

    cout << "\n" << c << " C = " << f << " F";
    cout << "\n" << c << " C = " << k << " K";
    cout << "\n" << c << " C = " << r << " R";

    cout << "\n\n\tThank You (^_^)";

    return 0;
>>>>>>> de2367de21d168750dd31d6bd84e52bcb849f88c
}