/****************************************
 * Языки программирования. Программа 1  *
 * (с) ИБСТ                             *
 * Исправь синтаксические ошибки        *
 ****************************************/
#include <climits>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    char* path = new char[PATH_MAX];
    const char* id[] = { "Фамилия\t\t", "Имя\t\t", "Отчество\t", "Группа\t\t" };
    realpath(argv[0], path);
    cout << "Путь к исполняемому файлу: ";
    cout << path << endl;
    delete[] path;
    //cout << argc <<endl;
    for(int i = 1; i < argc; ++i) {
        if(i - 1 < 4) cout << id[i - 1];
        //cout << i << endl;
        cout << string(argv[i]) << endl;
    }
    return 0;
}