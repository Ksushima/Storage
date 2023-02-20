#include <stdio.h>

int main(void) {

  // int = %d
  // char = %c
  // float = %f

  int(x);
  int(y);
  char(islem);
  float(sonuc);

  printf("Yapacağınız işlemi seçiniz (+,-,*,/)\n");
  scanf("%c", &islem);

  if (islem == '+') {
    printf("Toplamayı seçtiniz");
  } else if (islem == '-') {
    printf("Çıkarmayı seçtiniz");
  } else if (islem == '*') {
    printf("Çarpmayı seçtiniz");
  } else if (islem == '/') {
    printf("Bölmeyi seçtiniz");
  }

  printf("\nX ve Y'ye birer değer veriniz.\n");
  printf("X : ");
  scanf("%d", &x);
  printf("Y : ");
  scanf("%d", &y);

  switch (islem)

  {
  case '+':
    sonuc = x + y;
    printf("%d ve %d 'nin toplamı : %.2f", x, y, sonuc);
    break;

  case '-':
    sonuc = x - y;
    printf("%d 'den %d çıkarsa : %.2f", x, y, sonuc);
    break;

  case '*':
    sonuc = x * y;
    printf("%d ve %d nin çarpımı : %.2f", x, y, sonuc);
    break;

  case '/':
    if (y == 0) {
      printf("Bölen 0 olamaz, lütfen başka bir değer giriniz");
      scanf("%d", &y);
    }
    sonuc = x / y;
    printf("%d 'nin %d 'ye bölümü : %.2f", x, y, sonuc);
    break;

  default:
    printf("Bir şey yanlış, lütfen işleminizi kontrol ediniz.");
  }

  return 0;
}