#include <stdio.h>
main()
{
      int b,i,godine, mesecno_ulaganje, interest, kraj, trenutno;
      char da;
   start:    printf("\nKoliko ces godina stedeti? ");
      scanf("%d", &godine);
      printf("Koliko je trenutno u nalogu? ");
      scanf("%d", &trenutno);
      printf("Koliko ces ulagati mesecno? ");
      scanf("%d", &mesecno_ulaganje);
      printf("Kolika je kamata? u decimalnim brojevima (10% = 0.1): ");           
      scanf("%d", &interest);
      
      mesecno_ulaganje = mesecno_ulaganje * (12*godine);
      for (i=0;i<=godine;i++)
      kraj=(trenutno+mesecno_ulaganje)*(1+interest);
      
      /*mesecno_ulaganje = mesecno_ulaganje *12;
      for (i=0;i<=godine;i++)
{      if (kraj==0)
      kraj = trenutno;
      kraj = (kraj + mesecno_ulaganje) *(1+interest);
      */
      printf ("ovoliko ces imati novca na kraju %d", kraj);
      printf("\nDa li zelis da racunas ponovo? 1 za da, 0 za ne: ");
      scanf("%d",&b);

if(b==1)
{      goto start;}
      End: ;
      getche();
      return 0;
      
      }
