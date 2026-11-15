
// SLAYTTAN ÖRNEKLER VE NOTLAR

#include <iostream>
using namespace std;

int main()
{
    int fTemp, cTemp;
    cout << "Input a temperature as \"Fahrenheit\" \n";
    cin >> fTemp; // bu satır

    cTemp = (fTemp - 32) * 5 / 9;
    cout << fTemp << " Fahrenheit is " << cTemp << " Celsius\n"
         << endl;
}

//  /" bu işaret double quote , text içinde kullanabilmemiz için

// YENİ NOT:
// cin klavyeden veri almak için kullanılır. cin >> değişken; şeklinde.
// aldıgı veriyi de fTemp degişkenine atar.

/* C++ ta constan için iki tanımlama yolu vardır.

1- #define kullanımı : compile işlemi başlamadan preprocessor kısmında çalışır.
RAM de yer kaplamaz.
Veri tipi yoktur. sadece text olarak tanımlar.
Satır sonuna ; gelmez.

2- cons keyword kullanımı: compiler tarafından işlenir.
Ram de yer kaplar.
Veri tipi vardir.
; gelir.


goto statements kısmında forbidden olan bkıma tekrar bak */