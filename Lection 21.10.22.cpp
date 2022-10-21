//#include <iostream>
//#include <time.h>
//#include <windows.h>
//using namespace std;
//
//int main();
//void RandomFillArray(int* ar, int count, int max, int min);
//void ShowArray(int* ar, int count);
//void FreeMemory(int* ar);
//
//int main()
//{
//    setlocale(0, "UKR");
//
//    int count = 0;
//
//    cout << "Please, enter count of elements: ";
//    cin >> count; // просим пользователя ввести количество элементов
//    // нормализация количества элеметов массива
//    if (count < 5) count = 5;
//    if (count > 10000) count = 10000;
//    // пример создания одномерного динамического массива
//
//    int *ar = new int[count];
//
//    int max = 0;
//    int min = 0;
//
//    cout << "Укажите начало диапазона: ";
//    cin >> min;
//
//    cout << "Укажите конец диапазона: ";
//    cin >> max;
// 
//    // функция выделения памяти под одномерный массив
//     // жизненный цикл ресурса в программировании:
//    RandomFillArray(ar, count, max, min); // 2) инициализируем память (заполняем массив)
//    ShowArray(ar, count); // 3) используем ресурс (показываем массив)
//    FreeMemory(ar); // 4) очистка памяти
//}
//
//void RandomFillArray(int* ar, int count, int max, int min)
//{
//    srand(time(NULL));
//
//    for (int i = 0; i < count; i++)
//    {
//        int num = min + (rand() % (max - min + 1));
//
//        ar[i] = num;
//    }
//}
//
////void UserFillArray(int* ar, int count)
////{
////
////    setlocale(0, "UKR");
////
////    for (int i = 0; i < count; i++)
////    {
////        int num;
////
////        cout << "Введите элемент: ";
////        cin >> num;
////
////        ar[i] = num;
////    }
////}
//
//void ShowArray(int* ar, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        cout << ar[i] << ", ";
//    }
//    cout << "\n";
//}
//
//
//void FreeMemory(int* ar)
//{
//    delete[] ar;
//}

#include <iostream>
#include "dynamicarrays.h"
using namespace std;



int main()
{
    int count = 0;
    int* ar = nullptr;

    AllocateMemory(ar, count);
    FillArray(ar, count);
    ShowArray(ar, count);

    // функция добавляет одно число в конец массива
    // передаём указатель на массив
    // говорим, сколько было элементов в массиве (станет больше на 1 элемент)
    // 123 - это число для добавления в массив
    AddElementToTheEndOfArray(ar, count, 123);
    ShowArray(ar, count);
    AddElementToTheEndOfArray(ar, count, 234);
    ShowArray(ar, count);
    DeleteElementFromTheEndOfArray(ar, count);
    ShowArray(ar, count);
    AddElementToTheBeginningOfArray(ar, count, 345);
    ShowArray(ar, count);
    AddElementToTheMiddleOfArray(ar, count, 456);
    ShowArray(ar, count);
    DeleteElementFromTheStartOfArray(ar, count);
    ShowArray(ar, count);
    DeleteElementFromTheMiddleOfArray(ar, count, 4);
    ShowArray(ar, count);

    FreeMemory(ar);
}