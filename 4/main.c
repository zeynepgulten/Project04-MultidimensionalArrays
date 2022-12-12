#include<stdio.h> 

int main()
 {
   int matris[3][5];
   int j,i,toplam;
   
   for(j=0;j<3;j++)
   {
   	 for(i=0;i<5;i++)
   	 {
   	 	printf("%d.satir %d.sayiyi girin:",j,i);
		scanf("%d",&matris[j][i]);
	}}
	
	for(j=0;j<5;j++)
	{
		for(i=0;i<3;i++)
		{
		 toplam+=matris[i][j];	
		}
	printf("%d.sutunun toplami:%d \n",j,toplam);
	toplam=0;	
	}
 	
 	
 	
 	return 0;
 }
