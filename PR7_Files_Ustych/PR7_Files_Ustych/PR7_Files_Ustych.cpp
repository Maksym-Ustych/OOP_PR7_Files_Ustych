/*
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    FILE* f1;
    FILE* f2;

    fopen_s(&f1, "t1.txt", "w");

    int x;
    int k = 0, sum = 0, SA;

    if (!f1)
    {
        cout << "Помилка";
        exit(0);
    }

    cout << "20 випадкових чисел:\n";

    for (int i = 0; i < 20; i++)
    {
        x = rand() % 10;

        cout << x << " ";

        fprintf(f1, "%2d", x);

        k++;
    }

    fclose(f1);

    fopen_s(&f1, "t1.txt", "r");
    fopen_s(&f2, "t2.txt", "w");

    for (int i = 0; i < k; i++)
    {
        fscanf_s(f1, "%2d", &x);

        fprintf(f2, "%2d", x);

        sum += x;
    }

    fclose(f1);
    fclose(f2);

    fopen_s(&f2, "t2.txt", "r");

    cout << "\n\nЧитання з другого файлу:\n";

    for (int i = 0; i < k; i++)
    {
        fscanf_s(f2, "%2d", &x);

        cout << x << " ";
    }

    fclose(f2);

    SA = sum / k;

    cout << "\n\nСума всіх чисел: " << sum;
    cout << "\nКількість чисел: " << k;
    cout << "\nСереднє арифметичне: " << SA << endl;

    return 0;
}
*/