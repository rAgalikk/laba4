#include <iostream>
#include <math.h>
int main()
{
    std::cout << "1 zad" << ";" << "\n";
    std::cout << "Vvedite chislo" << ";" << "\n";
    int site = 0;
    std::cin >> site;
    std::cout << site * 4 << "\n";


    std::cout << "1,2 zad " << ";" << "\n";
    std::cout << "Vvedite chislo" << ";" << "\n";
    int r = 6350;
    int h = 0;
    std::cin >> h;
    float d = sqrt((r + h) * 2 - r * 2);
    std::cout << d << " km" << "\n";


    std::cout << "2 zad " << ";" << "\n";
    std::cout << "Vvedite chislo" << ";" << "\n";
    std::cin >> site;
    std::cout << pow(site, 3) << "\n";

    std::cout << "3 zad " << ";" << "\n";
    std::cout << "Vvedite chislo" << ";" << "\n";
    const double PI = 3.141592653589793;
    int R = 0;
    std::cin >> R;
    std::cout << "Perimetr" << ";" << "\n";
    std::cout << 2 * PI * R << "\n";
    std::cout << "Ploshad" << ";" << "\n";
    std::cout << PI * pow(R, 2) << "\n";


    std::cout << "4 zad " << ";" << "\n";
    std::cout << "Vvedite pervoe chislo" << ";" << "\n";
    float cel = 0;
    float cel2 = 0;
    std::cin >> cel;
    std::cout << "Vvedite vtoroe chislo" << ";" << "\n";
    std::cin >> cel2;
    std::cout << "Srednee arefmeticheskoe: " << (cel + cel2) / 2 << ";" << "\n";
    std::cout << "Srednee geometricheskoe: " << sqrt(cel * cel2) << ";" << "\n";


    std::cout << "5 zad " << ";" << "\n";
    std::cout << "Vvedite Obiom " << ";" << "\n";
    float V = 0;
    float m = 0;
    std::cin >> V;
    std::cout << "Vvedite massu " << ";" << "\n";
    std::cin >> m;
    std::cout << "Plotnost tela = ";
    std::cout << m / V << ";" << "\n";

    std::cout << "6 zad " << ";" << "\n";
    std::cout << "Vvedite Kolichestvo ludey" << ";" << "\n";
    float people = 0;
    float place = 0;
    std::cin >> people;
    std::cout << "Vvedite Ploshad territorii" << ";" << "\n";
    std::cin >> place;
    std::cout << "Plotnost naseleniya ravna: ";
    std::cout << people / place << "\n";

}
