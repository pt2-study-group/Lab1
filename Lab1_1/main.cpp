/***************************************
 * Языки программирования. Программа 2 *
 * (с) ИБСТ                            *
 * Выполни пошагово под отладчиком     *
 * *************************************/
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int n, N;
    int iRes;
    double fRes;
    // ввод данных 
    // значение N 1813206
    // значение n 3206
    cout << "Введите N: ";
    //cin >> N;
    N = 1813206;
    cout << "Введите n: ";
    n = 3206;
    //cin >> n;
    //  деление
    iRes = N / n;
    fRes = N / n;
    fRes = 1.0 * N / n;
    //  умножение и деление
    iRes = N / 10 * n;
    iRes = N * n / 10;
    // сложение
    iRes = N + 2140000000;
    iRes = N + 2150000000;
    // присваивание
    iRes = fRes;
    // xor
    iRes = iRes ^ iRes;
    return iRes;
}
