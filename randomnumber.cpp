/* RASTGELE SAYI ÜRETME */

/*-- gerekli kütüphaneler--
rand() => tek başına cagrıldıgında aynı sayı dizinini üretir

srand(seed) rand() ın hangi noktadan sayı üretmeye baslayacagını söyler
her çalıştırmaa farklı sayı dizisi isteniyorsa tohumun hep değişmesi lazım
onun için bilgisayarın anlık saati kullanılır. time(0) bunnu kullanmak
için #include <ctime> eklenir

--- srand(time(0)) döngünün içine asla yazılmz. main() fonksiyonunun en
başında sadece bir kez çağrılır.

SAYIYI BELLİ ARALIĞA SIKIŞTIRMA FORMÜLÜ



*/
