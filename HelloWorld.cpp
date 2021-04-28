#include <iostream>
#include "ofunc.h"

using namespace std;



int main()

{   int a =0,b =0;

    cout << "Hello Wolrd!" << endl;
   
    cout << "Bi sayı gir: ";
    scanf("%d ",&a);
    
    std::cout << "Bi sayı daha gir: " << endl; // ilk sonraki satırda ki komutu çalışştırıp veri okuyor, sonra bu satırı çalıştırıp ekrana yazıyor nedenini çözemedim.
    
    b= oku(); // cin >> b; ile yapılabilir di ama hatadandolayı fonksiyon oluşturup denedim. hocanın  hatasız sırayla çalıştı benim olmuyor

    cout << endl << "toplam: " << topla(a,b) << endl;
    return 0;
}