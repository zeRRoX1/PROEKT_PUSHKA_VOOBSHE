#include <iostream>
#include <string> 
#include <string.h> 
#include <fstream> 
#include <algorithm>
#include <conio.h>

using namespace std;

struct MUSIKA {
    char text[255];
    char name_music[255];
    char avtor[255];
    char year[255];
};
MUSIKA mus;

//дабавление музыки //НЕ РАБОТАЕТ
/*
void add_musika(MUSIKA* mus, int size) {
    char arr[255];
    for (int i = 0; i > size; i++) {
        cout << "Add text: " << endl;
            cin >> arr;
        strcpy_s(mus[0].text, arr);
        cout << "Add name music: " << endl;
            cin >> arr;
        strcpy_s(mus[0].name_music, arr);
        cout << "Add avtor: " << endl;
            cin >> arr;
        strcpy_s(mus[0].avtor, arr);
        cout << "Add year: " << endl;
        cin >> mus->year;

    }
}*/


void one_cout_music(MUSIKA mus) {
    cout << mus.text << endl << mus.name_music << endl << mus.avtor << endl << mus.year << endl;
}

void izminenie(string str) {
    //изменение строки
    int i = 0;
    string leks(str);
    cout << endl << "Vedite stroky ->";
    getline(cin, str);
    while (i = str.find_first_of(leks, i))
    {
        str.erase(i, 6);
        cout << endl << str;
        //getch();
        break;
    }
}

void faili() {
    FILE* out;
    const char* path = "musica.txt"
        if (fopen)
}
void poisk_po_avtory1(MUSIKA* arr, int d = 4) {
    char* str = new char[255];

    cout << "ВВедите по какому автору искать: ";
    cin >> str;
    for (int i = 0; i < d; i++) {
        if (!strcmp(str, arr[i].avtor)) {
            one_cout_music(arr[i]);
        }
    }

}

void poisk_po_slovy(MUSIKA* arr, int d = 4) {
    char* str = new char[255];

    cout << "ВВедите по какому слову искать: ";
    cin >> str;
    for (int i = 0; i < d; i++) {
        if (!strcmp(str, arr[i].text)) {
            one_cout_music(arr[i]);
 
        }
    }

}


int main()
{
    setlocale(LC_ALL, "Russian");
    int ab = 4;
    MUSIKA arr[4];
    //1
    strcpy_s(arr[0].text, " Du Du hast ");
    strcpy_s(arr[0].name_music, "Du hast");
    strcpy_s(arr[0].avtor, "Rammstein");
    strcpy_s(arr[0].year, "1997");
    //2
    strcpy_s(arr[1].text, "And all I am is a man");
    strcpy_s(arr[1].name_music, "Sweater Weather");
    strcpy_s(arr[1].avtor, "The Neighbourhood");
    strcpy_s(arr[1].year, "2012");
    //3
    strcpy_s(arr[2].text, "Будешь со мной? Не буду");
    strcpy_s(arr[2].name_music, "Психую");
    strcpy_s(arr[2].avtor, "POLUGHOUL ft. Амане Миса");
    strcpy_s(arr[2].year, "2022");
    //4
    strcpy_s(arr[3].text, "Ты не такая, ты не такая,");

    strcpy_s(arr[3].name_music, "ты не такая");
    strcpy_s(arr[3].avtor, "Валентик Стрыкало");
    strcpy_s(arr[3].year, "2013");

  
     
cout << "Каталог текстов песен" << endl;
int a = 1;
    cout << "Выберите что хотите сделать" << endl;
    cout << "Вывести текст песни(1)" << endl;
    cout << "Найти песню по автору(2)" << endl;
    cout << "Найти песню по слову(3)" << endl;
    cout << "Изменить строку(4)" << endl;
    cout << "Добавление музыки(5)" << endl;
    cout << "Сохранение текста песни в файл(6)" << endl;
    cout << "Удаление текста песни(7)" << endl;
    cout << "Выход(0)" << endl;

    cin >> a;
    if (a < 0 or a > 7) {
        cout << "Неверное значение";
        
    }
    int t;
    switch (a)
    {
    case(0):
        cout << "ВЫХОД";
    case(1):
           cout << "MUSIKA 1" << endl; 
            cout << arr[0].text << endl << arr[0].name_music << endl << arr[0].avtor << endl << arr[0].year << endl;
            cout << "MUSIKA 2" << endl;
            cout << arr[1].text << endl << arr[1].name_music << endl << arr[1].avtor << endl <<  arr[1].year << endl;
            cout << "MUSIKA 3" << endl;
            cout << arr[2].text << endl << arr[2].name_music << endl << arr[2].avtor << endl <<  arr[2].year << endl;
            cout << "MUSIKA 4" << endl;
            cout << arr[3].text << endl << arr[3].name_music << endl << arr[3].avtor << endl << arr[3].year << endl;        
     case(2):
        poisk_po_avtory1(arr);  
     case(3):
        poisk_po_slovy(arr);
     case(4):
         izminenie(mus.text);
     case(5):
        
     case(7):
         cout << "Какой текст хотите удалить?";
             cin >> t;
         //delete arr[t];
        default:
        break;
     }
    

}
