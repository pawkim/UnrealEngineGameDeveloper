// Paweł Kimel
// Obliczanie objętości kuli, na podstawie podanego promienia

#define _USE_MATH_DEFINES

#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    std::locale::global(std::locale("pl_PL.utf8"));

    std::cin.imbue(std::locale());
    std::wcout.imbue(std::locale());

    constexpr double coeff = M_PI * 4 / 3;
    double r;
    std::wcout << L"Podaj długość promienia: ";
    std::cin >> r;

    const auto result = coeff * r * r * r;
    std::wcout << L"Objętość kuli o promieniu " << r << L" wynosi " << result << '\n';

    std::wcout << L"\nNaciśnij dowolny klawisz, aby zakończyć...";
    std::cin.get();
}
