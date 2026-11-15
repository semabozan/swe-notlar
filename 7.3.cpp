#include <iostream>
using namespace std;

// #  ++NUMBER ÖNCE VE SONRA KULLANIMI VE
// FLOAT KULLANIMI

int main()
{
    float radius;
    const float pi = 3.14;

    cout << "Input the radius of the circle: ";
    cin >> radius;

    int area = pi * radius * radius;

    cout << "The area of a circle with radius " << radius << " is " << area << endl;
    return 0;
}

// Quizde yapamadıklarım

//  FLOAT result = (float) 17 /4 ve float result = 17/4 farkı nedir----
// 17 / 4        4
// 17.0f / 4     4.25
/* yanına f koyman ondalıklı hesap yapılmasını saglar.
int şeklinde girersen küsurat atılır ve floata değerin
aktarılması küsuratı geri getirmez*/

//  ++ işaretinin number dan önce ve sonra olmasıyla ilgili alıştırma --- yapıldı
// ve cout kısmında tekrar number++ yapılması etkiler mi ---- etkiler burda da işlem yapılır

// int main()
// {
//     int number = 5;
//     int result = number++ + 2; // number++ önce numberin değerini alır ve 2 ekler
//     // sonra numberin değerini 1 arttırır. yani result = 5 + 2 = 7 olur. number ise 6 olur.
//     // işlem yapılsa da önce eski değeri kullan.
//     cout << "number: " << ++number << endl;

//     // ORNEK2
//     int x = 10;
//     cout << x++ << endl; // xin eski degeri yazıldı ama hafızada 11 oldu
//     cout << x << endl;   // artık hafızadaki değer 11 olduğu için 11 yazdırır.

//     // ORNEK3
//     int a = 3;
//     int b = a++;

//     cout << a << endl;
//     cout << b << endl;

//     // ORNEK4
//     int c = 0;
//     int d = ++c; // yani c de değişir sadece d için atanan ve
//     // yapılan bir işlem degil bu. her iki değşken de bundan etkilenir.

//     cout << c << endl;
//     cout << d << endl;

//     // ORNEK4
//     int n = 7;
//     cout << n++ << endl;
//     cout << ++n << endl;
//     cout << n << endl;

//     // FLOAT ÖRNEK
//     float result3 = 17 / 4;        // 4
//     float result4 = (float)17 / 4; // 4.25

//     cout << result3 << endl;
//     cout << result4 << endl;

//     system("pause");
// }

/* ++ önce veya sonra kullanıp bu sayıyı direkt yazdırırsan
sonuç her türlü bir artmış olur. bunun olayı çoklu işlemlerde eski
ve yeni değerlerin ne zaman ve nasıl kullanılacagı */

/*COUTTA NUMBER++ ve ++NUMBER YAZSAK
++number önce arttırdı sonra da bu degeri atadı ve 5 + 1 oldu
number++ sonra ise number değeri yazılır sonra +1 eklenir ama
program artık bitmiştir sadece hafızada en son 6 kalır
----yanii coutta da işlem yapılabiliyorr*/

/* BİR DEĞİŞKENE ATAYINCA farklı görünür.
+++number önce arttırır ve number değeriyle işlem yapacaksan +1 eklenmiş
haliyle yaparsın.
number++ ise numberin eski değerini atar ama 2. kez kullanacagında hafızaya atılan
+1 ekli hali devreye girer.

C++ ta ondalıklı sayı için nokta kullanmalısın. virgül koyarsan hata olur.
*/

//
