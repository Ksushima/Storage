#include <stdio.h>

int main(void) {
  
  //int = %d
  //char = %c
  //float = %f
  
  int(x);
  int(y);
  char(islem);
  float(sonuc);

  printf("Yapacağınız işlemi seçiniz (+,-,*,/)\n");
  scanf("%c",&islem);
  
  if (islem=='+')
    {
    printf("Toplamayı seçtiniz");
    }
  else if (islem=='-')
    {
    printf("Çıkarmayı seçtiniz");
    }
  else if (islem=='*')
    {
    printf("Çarpmayı seçtiniz");
    }
  else if (islem=='/')
    {
    printf("Bölmeyi seçtiniz");
    }

  printf("\nX ve Y'ye birer değer veriniz.\n");
  printf("X : ");
  scanf("%d",&x);
  printf("Y : ");
  scanf("%d",&y);


  
  return 0;
}