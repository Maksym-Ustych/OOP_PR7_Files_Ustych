#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    FILE* f;

    fopen_s(&f, "t1.dat", "wb");

    cout << "Масив для запису у файл:\t";

    int mas[10];

    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 30;

        cout << setw(3) << mas[i];
    }

    fwrite(mas, sizeof(int), 10, f);

    fclose(f);

    fopen_s(&f, "t1.dat", "r+b");

    int mas2[10];

    int x;

    int max = 0, imax = 0;

    for (int i = 0; i < 10; i++)
    {
        fread(&mas2[i], sizeof(int), 1, f);

        if (mas2[i] > max)
        {
            max = mas2[i];
            imax = i;
        }
    }

    fseek(f, imax * sizeof(int), SEEK_SET);

    fread(&x, sizeof(int), 1, f);

    cout << "\nМаксимальний елемент = " << x;

    int nn = 0;

    fseek(f, imax * sizeof(int), SEEK_SET);

    fwrite(&nn, sizeof(int), 1, f);

    fclose(f);

    fopen_s(&f, "t1.dat", "rb");

    int mas3[10];

    cout << "\nМасив після читання з файлу:\t";

    for (int i = 0; i < 10; i++)
    {
        fread(&mas3[i], sizeof(int), 1, f);

        cout << setw(3) << mas3[i];
    }

    fclose(f);

    return 0;
}