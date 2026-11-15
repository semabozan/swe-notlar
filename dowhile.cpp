/*WHİLE İF DO WHİLE



IF ise
-bir koşula göre tek seferlik karar verir.
-kendi başına tekrar etmez

WHİLE
-koşul dogru kaldıkca tekrar eder.
-*koşulu döngü gövdesinden önce kontrol eder bu
yüzden koşul başta yanlışsa gövde hiç çalışmayabilir.

while ve if beraber kullanılabilir.
*/

#include <iostream>
using namespace std;

int main()
{
    int toplam = 0;
    int sayi;

    do
    {
        cout << "1-20 arasinda bir sayi girin: ";
        cin >> sayi;

        if (sayi < 1 || sayi > 20)
        {
            cout << "Sayi 1 ile 20 arasinda olmali!" << endl;
            continue;
        }

        if (toplam + sayi > 100)
        {
            cout << "Toplam 100'u gecti! Onceki toplam: " << toplam << endl;
        }
        else
        {
            toplam = toplam + sayi;
            cout << "Girilen sayi: " << sayi << " | Guncel toplam: " << toplam << endl;
        }

    } while (toplam + sayi <= 100);

    return 0;
}