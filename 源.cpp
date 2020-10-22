#include<stdio.h>
#include <string.h>
#define N 50
/*
void main( )
{   int i,j,word=0,num=0;
	char c,sting[80];
	string=putchar();
	while((c=string[i])!='\0')
		if(c= )
	scanf("
	printf("hello word");


}*/
/*
void main( )
{   int x,y,z,a[N],len,t;
	printf("请输选择数据个数（<%d）\n",N);
	scanf_s("%d",&len);
	printf("请输入%d个整数\n",len);
	for(x=0;x<len;x++)
	  scanf_s("%d",&a[x]);
	printf("\n它们为：\n");
	for(x=0;x<len;x++)
	  printf("%4d",a[x]);
	printf("\n选择升序排列（0）还是降序（非0）\n");
	scanf_s("%d",&z);
	if(z==0)
	   for(y=0;y<len-1;y++)
		 for(x=0;x<len-y-1;x++)
		   if(a[x]>a[x+1])
			 {t=a[x];a[x]=a[x+1];a[x+1]=t;}
	if(z!=0)
	  for(y=0;y<len-1;y++)
		for(x=0;x<len-y-1;x++)
		  if(a[x]<a[x+1])
			 {t=a[x];a[x]=a[x+1];a[x+1]=t;}
	 printf("按此排序得：\n");
	 for(x=0;x<len;x++)
	   printf("%4d",a[x]);
	 printf("\n");
	}
*/
/*
int main()
{  int x,y,z;
   printf("  9   8   7   6   5   4   3   2   1\n");
   printf("____________________________________\n9|");
   for(x=9;x>0;x--)
	{  for(y=9;y>0;y--)
		 printf("%-4d",x*y);
	   printf("\n%d|",x-1);
	}

}
*/

/*
void main()
{
	char name[8][6] = { {"wang"},{"li"},{"wu"},{"qi"},{"liu"},{"bai"},{"he"},{"zhang"} };
	int score[8][2] = { {98,1},{77,2},{89,3},{92,4},{60,5},{77,6},{88,7},{92,8} };
	int x, y, z, t;
	char c[10];
	for (y = 0; y < 7; y++)
		for (x = 0; x < 7 - y; x++)
			if (score[x][0] < score[x + 1][0])
			{
				z = score[x][0];
				score[x][0] = score[x + 1][0];
				score[x + 1][0] = z;
				t = score[x][1];
				score[x][1] = score[x + 1][1];
				score[x + 1][1] = t;
				strcpy_s(c, name[x]);
				strcpy_s(name[x], name[x + 1]);
				strcpy_s(name[x + 1], c);
			}

*/