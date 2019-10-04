 #include <stdio.h>
#include<stdlib.h>
#include<string.h>
	int g1=1923838;
	char *g2="32131232";
    int hcf(int n1, int n2,int i)
    {
        if (n2 != 0)
        {
            printf("address of variable n1 & n2 of recursive function %d  %p  %p\n",i,&n1,&n2);
            i++;
           return hcf(n2, n1%n2,i);
        }
        else 
           return n1;
    }
   
    int main()
    {
       int n1, n2;
       int a=34,b=56;
       n1=hcf(a,b,0);
       printf("G.C.D of %d and %d is %d.", a, b,n1);
       printf("\n");
       char *p=(char*)malloc(50*sizeof(char*));
       strcpy(p,g2);
       printf("p = %s\n",p); 
       printf("Address of n1&n2   %p   %p  \n",&n1,&n2);
       printf("Address of function hcf   %p ",&hcf);
       return 0;

}