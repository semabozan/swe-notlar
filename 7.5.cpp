// SINAVDA CIKABİLİR
// toplamları 100 ü geçmeyecek şekilde alınan sayıların toplnamsaı

/* kullanıcı klavyeden sayı gireek girilen bu sayıların
(kullanıcı sadece 1-10 arası sayı girebilsin)
toplamı 100 olana kadar sayı alacak ve toplam 100 olunca program duracak*/
/*DİKKAT ETMEN GEREKENLER while ve if ile yaparsam
--while kullanırsan en başta kontrol edldi ve o zman toplam 95 ti diyelim
koşul saglandıgı için döngü devam eder ama 8 eklenirse 100 ü geçer
döngü ancak sonraki kontrol sırasında durur. yani toplamın 100ü
geçmesini engellemez.

--? sayıyı eklemeden önce IF ile kontrol etmeliyiz.
if ( toplam + sayi <= 100)
{  toplam += sayi;}*/

/* continue : döngünün geri kalanını atlar. ve başa sarar
break : direkt döngüyü bitirir ve çıkar.*/

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

// COUNTER
/* bir döngünün kaç kez çalıştıgını kaydeder .
ilk degeri 0 girilir genelde.
*/

// buyuk harfler 65 ten kucuk harfler 97den baslar

// do yazıp tüm koşulları ifler içine koyup
/*continue breaklarla kontrol edersen en sonda while (true) diyebilirsin.
çünkü zaten kontrol ediyorsun. ama while içine koşul yaparak da halledebilirdin.*/