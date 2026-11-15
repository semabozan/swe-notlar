
/*CONST VE #DEFINE
const türü koruyarak değişimi engeller, türü vardır kapsam kurallarına uyar.
#define ise metin olarak değiştirir. türü ve değişken kapsamı yoktur.*/

#include <iostream>

using namespace std;

int main()
{
    // write the force values of the number
    /// whose force values are smaller than 10.000

    // int number = 1;
    // int power = 1;
    // do
    // {
    //     cout << number << "-" << power << endl;
    //     number++;
    //     power = pow(number, 4);
    // } while (!(power >= 10000));

    // İŞLEM ÖNCELİĞİ
    int x = 5, y = 2, z = 10;
    bool sonuc = z / y + x * 2 > 12 && y != 2;

    cout << sonuc << endl;

    int a = 4, b = 3, c = 8;
    bool sonuc1 = c / b + a * 2 >= 10 && b != 3;

    cout << sonuc1 << endl;
    /* parantez
    ++ , --
    carpma bolme mod
    artı eksi
    buyuk kucuk işaretleri
    ==, != */
}

// iterasyon sayısını bilmiyorsak do while kullanacagız.
/*İTERASYON :
döngünün bir kez çalışmasıdır.
döngü sayısı belli degilse while veya do while olur.
*/