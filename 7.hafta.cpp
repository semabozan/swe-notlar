#include <iostream>
using namespace std;

// 100E KADAR OLAN ASAL SAYILARI SIRASIYLA YAZDIRSIN İSTİYORUZ.
// bir main fonksiyonu oluşturup içinde for döngüsü kuracağız

int main()
{
    for (int number = 2; number <= 100; number++)
    {
        bool isPrime = true; // default deger olarak asal sayıymış gibi kabul ettik.

        // burada üstte 2 den başlayan 1 number degeri için devam ediyor ve
        // for döngüsünü kuruyoruz. tüm sayılar içinn süreç tek tekve sırayla ilerleyecek
        // bu sayının true false degeri bulunduktan sonra diğerine geçilecek.
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        // içerdeki döngü bitti ve boola karar verdik.buraya kadar kontrol etmiş olduk.

        if (isPrime == true)                         // çift esittir koymaya dikkat et. tek olursa direkt ATAMA yapar ve hata verir. ÇİFT OLURSA KONTROL ETTİRİR.
            cout << number << "is a prime number\n"; // << bu işaretleri ne zaman kullanıyoruz.

        else
        {
            cout << number << "is NOT a prime number\n"; // bu cout else bloğunun içinde olmalı.
        }
    }

    cin.get();
}

// if there is less than two statements it is not necessary to use curly brackets

/* BU İŞLEMDE YAPTIĞIM HATALAR
1- if döngüsünün içine tek = işareti koyarsam bu atama yapar ve hata olur.
eger cift == koyarsam kontrol etmek anlamına gelir ve hata olmaz.

2- elsein yapmasını istediğim şeyi onun içine yazmalıyım. 1 den fazla statement varsa
süslü parantez şart.

*/