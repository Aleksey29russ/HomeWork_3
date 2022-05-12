// HomeWork_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "HomeTask#1.1\n\n";


    cout << "Введите время в секундах:\n";
    int time_sec, time_min, time_hour;
    cin >> time_sec;

    time_min = time_sec / 60;
    time_sec = time_sec % 60;
    time_hour = time_min / 60;
    time_min = time_min % 60;

    cout << "Время равно:\n" << time_hour << "\tЧасов\n"
        << time_min << "\tМинут\n" << time_sec << "\tСекунд\n ";



    cout << "HomeTask#1.2\n\n";

    float number;
    int dollar, cent;
    cout << "Введите число:\n";
    cin >> number;
    dollar = number;
    cent = (number - dollar) * 100;
    cout << dollar << "\tДолларов\n" << cent << "\tЦентов\n";


    cout << "HomeTask#1.3\n\n";

    int  days, weeks;
    cout << "Введите колличество дней:\n";
    cin >> days;
    weeks = days / 7;
    days = days % 7;
    cout << weeks << "\tНедель\n" << days << "\tДней\n";


    cout << "Hometask#1.4\n\n";

    cout << "Вычисление скорости бега\n";
    float time,speed,distance;
    int min, sec;
    cout << "Введите дистанцию:\n";
    cin >> distance;
    cout << "Введите время (мин.сек)\n";
    cin >> time;
    min = time;
    sec = (time - min) * 100;
    time = min * 60 + sec;
    speed = (distance / time)*3.6;
    cout << "Дистанция:  " << distance << " м\n"
        << "Время:  " << min << " мин " << sec << " сек = " << time
        << " сек\n" << "Вы бежали со скоростью " << speed << " км/ч\n";


    cout << "HomeTask#1.5\n\n";

    float summa_eur, procent_godov, summa;
    cout << "Введите сумму в евро:\n";
        cin >> summa_eur;
        cout << "Введите процент годовых:\n";
        cin >> procent_godov;
        summa = (summa_eur / 100 * procent_godov) / 12;
        cout << "Сумма выплачиваемая в месяц равна:  " << summa;




}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
