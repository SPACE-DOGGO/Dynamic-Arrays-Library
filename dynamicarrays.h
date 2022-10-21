#pragma once
#include <iostream>
using namespace std;

void AllocateMemory(int*& ar, int& count)
{
    setlocale(0, "UKR");

    cout << "Пожалуйста, укажите количество элементов: ";
    cin >> count;

    if (count < 5) count = 5;
    if (count > 10000) count = 10000;

    ar = new int[count];
}

void FillArray(int* ar, int count)
{
    for (int i = 0; i < count; i++)
    {
        ar[i] = 100;
    }
}

void RandomFillArray(int* ar, int count, int min, int max)
{
    srand(time(NULL));

    for (int i = 0; i < count; i++)
    {
        int num = min + (rand() % (max - min + 1));

        ar[i] = num;
    }
}

void UserFillArray(int* ar, int count)
{

    setlocale(0, "UKR");

    for (int i = 0; i < count; i++)
    {
        int num;

        cout << "Введите элемент: ";
        cin >> num;

        ar[i] = num;
    }
}

void ShowArray(int* ar, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << ar[i] << ", ";
    }
    cout << "\n";
}

void FreeMemory(int* ar)
{
    delete[] ar;
}

void AddElementToTheEndOfArray(int*& ar, int& count, int number)
{
    int* temp = new int[count + 1];

    for (int i = 0; i < count; i++) temp[i] = ar[i];

    temp[count] = number;

    delete[] ar;

    ar = temp;

    count++;
}

void AddElementToTheBeginningOfArray(int*& ar, int& count, int number)
{
    int* temp = new int[count + 1];

    temp[0] = number;

    for (int i = 1; i < count + 1; i++) temp[i] = ar[i - 1];

    delete[] ar;

    ar = temp;

    count++;
}

void AddElementToTheMiddleOfArray(int*& ar, int& count, int number)
{
    int* temp = new int[count + 1];

    for (int i = 0; i < (count / 2); i++) temp[i] = ar[i];

    temp[count / 2] = 456;

    for (int i = (count / 2) + 1; i <= count; i++) temp[i] = ar[i - 1];

    delete[] ar;

    ar = temp;

    count++;
}

void DeleteElementFromTheEndOfArray(int*& ar, int& count)
{
    int* temp = new int[count - 1];

    for (int i = 0; i < count - 1; i++) temp[i] = ar[i];

    delete[] ar;

    ar = temp;

    count--;
}

void DeleteElementFromTheStartOfArray(int*& ar, int& count)
{
    int* temp = new int[count - 1];

    for (int i = 0; i < count - 1; i++) temp[i] = ar[i + 1];

    delete[] ar;

    ar = temp;

    count--;
}

void DeleteElementFromTheMiddleOfArray(int*& ar, int& count, int number)
{
    int* temp = new int[count - 1];

    for (int i = 0; i < (number); i++) temp[i] = ar[i];

    for (int i = number; i <= count; i++) temp[i] = ar[i + 1];

    delete[] ar;

    ar = temp;

    count--;
}