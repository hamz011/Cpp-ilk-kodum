#include<iostream>
#include <string>
using namespace std;
void HelloWorld(string a)
{
    string pp;
    if (a == "print") {
        pp = "Hello World";
        cout << pp << endl;
    }



}
int main()
{
   // HelloWorld("print");
    int a = 11;
    a = a + 10;
    kare();
   // cout << "A" + a << endl;
    return 0;
}
void kare()
{

    int sayi1,sayi2,sayi3,toplam,ss;
    std::cout << "1. sayıyı giriniz: ";
    std::cin >> sayi1;
    std::cout << "2. sayıyı giriniz: ";
    std::cin >> sayi2 ;
    std::cout << "3. sayıyı giriniz: ";
    std::cin >> sayi3 ;

    toplam=sayi1+sayi2+sayi3;
    ss=toplam;
    toplam *= toplam;

    cout <<ss<<", karesi: "<<toplam;
    system("PAUSE");

}
