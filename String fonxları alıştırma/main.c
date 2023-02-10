#include <stdio.h>
#include <stdlib.h>

void Fmetinuzunlugu();
void Fbuyukkucuk();
void Fkelimesayisi();
void Ftersmetin();
void Fkelimebasharf();
void Fmetinfrekansi();
void Faranacakifade();

//String fonksiyonlari uygulamalari

int main()
{
    //Soru 1: Girilen metnin karakter uzunlugunu bulma

    	Fmetinuzunlugu();

    //Soru 2: Klavyeden girilen cumlende buyuk kucuk sayisi bulma
	
   		Fbuyukkucuk();

    //Soru 3: Klavyeden girilen metinde kelime sayisini bulma

    	Fkelimesayisi();

    //Soru 4: Klavyeden girilen metni tersten ekrana yazdiran C programi

    	Ftersmetin();

    //Soru 5: Klavyeden girilen metnin her kelimelerinin bas harflerini buyuk yazdiran C programi

    	Fkelimebasharf();

    //Soru 6: Klavyeden girilen metnin frekansini bulan C programi

    	Fmetinfrekansi();

    //Soru 7: Klavyeden girilen metin icerisinde,klavyeden girilen metnin olup olmadigini bulan C Programi

    	Faranacakifade();

    return 0;
}

void Fmetinuzunlugu(){

    char metin1[100];
    int sayac=0;

    printf("***Girilen metnin sayac ve strlen fonx ile uzunlugunun bulunmasi***\n\n");
        printf("Metin giriniz:");

    gets(metin1);
    //fflush(stdin); bazen gets fonx nu calistirir. o da olmadıgı zaman getchar() dene
    printf("%s",metin1);

    while(metin1[sayac]!='\0'){
        sayac++;
    }

    printf("\n\nGirilen metnin uzunlugu:%d\n\n",sayac);

    printf("Girilen metnin strlen fonx ile uzunlugu:%d\n",strlen(metin1));

}

void Fbuyukkucuk(){

    char metin2[100];
    int kharf=0,bharf=0,sayac=0;

    printf("\n****Buyuk kucuk harf sayisi bulma***\n\n");
      printf("Bir metin giriniz:");
        gets(metin2);

    while(metin2[sayac]!='\0'){

      char karakter=metin2[sayac];

      if(karakter>='a' && karakter<='z'){
            kharf++;
      }

      else if(karakter>='A' && karakter<='Z'){
            bharf++;
      }

      sayac++;

    }
    printf("\nGirilen metinde %d tane buyuk, %d tane kucuk harf vardir..\n",bharf,kharf);
}

void Fkelimesayisi(){

    char metin3[100];
    int sayac=0,kelimesayisi=1;

    printf("\n***Metinde kelime sayisi bulma***\n\nBir metin giriniz:");
        gets(metin3);

    while(metin3[sayac]!='\0'){

        // bursa ankara yazalim 1 null gorecek yani 1 kelime.Cunku while dongusu null gorunce iceriye almayacak

        char karakter2=metin3[sayac];

        if(karakter2==' ')
            kelimesayisi++;

        sayac++;
    }

    printf("\nGirilen metinde kelime sayisi:%d\n",kelimesayisi);

}

void Ftersmetin(){

    char metin4[100];

    printf("\n***Metnin tersten yazilis hali***\n");
    printf("\nBir metin giriniz:");
        gets(metin4);
    int x=strlen(metin4);

    printf("\nGirilen metnin tersi:");
    for(int i=x; i>=0; i--)
        printf("%c",metin4[i]);

    printf("\n");
}

void Fkelimebasharf(){

    char metin5[100];
    int sayac=0,kontrol=1;

    printf("\n***Metnin her kelimesinin bas harfini buyuk yazdiran program***\n");
        printf("\nBir metin giriniz:");
            gets(metin5);

    while(metin5[sayac]!='\0'){

        if(kontrol==1){

            if(metin5[sayac]>='a' && metin5[sayac]<='z')
                metin5[sayac]=metin5[sayac]-32; //ASCII tablosunda bir kucuk harfin numarasindan 32 cikarirsak buyuk harfini bulmus oluruz

            kontrol=0;
        }
        else {

            if(metin5[sayac]=='A' && metin5[sayac]<='Z')
                metin5[sayac]+=32; //ASCII tablosunda bir buyuk harfin numarasindan 32 eklersek kucuk harfini buluruz.

            kontrol=0;
        }
        if(metin5[sayac]==' '|| metin5[sayac]=='.')
            kontrol=1;

        sayac++;
    }
        printf("\nYeni metin:%s\n",metin5);
}

void Fmetinfrekansi(){

    char metin6[100],harf;
    int sayac=0,frekans=0;

    printf("\n***Metnin frekansini bulan program***\n");
    printf("\nBir metin giriniz:");
        gets(metin6);
    printf("\nHarfi giriniz:");
        harf=getchar();

    while(metin6[sayac]!='\0'){

        if(metin6[sayac]==harf)
            frekans++;

    sayac++;
    }

    printf("\n%c harfi metninde %d kez geciyor.\n",harf,frekans);


}

void Faranacakifade(){

    char metin7[100],aranacakifade[100];
    int sayac=0,sayac2=0,kontrol=0;
    char harf;

    printf("\n***Klavyeden girilen metnin olup olmadigini bulan C Programi***\n");
    printf("\nBir metin giriniz:");
        getchar();
        gets(metin7);
    printf("\nAranacak ifadeyi giriniz:");
        gets(aranacakifade);

    while(metin7[sayac]!=0){

        sayac2=0;
        if(metin7[sayac]==aranacakifade[sayac2]){

            while(metin7[sayac+sayac2]==aranacakifade[sayac2])
                sayac2++;

            if(aranacakifade[sayac2]=='\0')
                kontrol=1;
        }

        if(kontrol==1) break;

        sayac++;
    }

    if(kontrol)
        printf("\nGirdiginiz ifade metinde mevcuttur!\n");

    else printf("\nGirdiginiz ifade metinde mevcut degildir\n");
}
