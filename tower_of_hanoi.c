#include<stdio.h>
int count=0;
void main()
{
    char a='A',b='B',c='C';
    int x;
    printf("Please enter the number of discs...\n");
    scanf("%d",&x);
    toh(a,b,c,x);
    printf("Number of moves=%d\n",count);
}
void toh(char a,char b,char c,int d)
{
    if(d==1)
    {
        printf("%c -> %c\n",a,c);
        count++;
    }
    else
    {
        toh(a,c,b,(d-1));
        toh(a,b,c,1);
        toh(b,a,c,(d-1));
    }
}
