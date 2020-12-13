// programing by vikash parashar
#include <stdio.h>

     int main()
     {
         int a,b,choice;
         printf("please enter two ineger value\n");
            
            scanf("%d%d",&a,&b);
            printf("enter your choice:\n");
            printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.division\n");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:printf("%d+%d=%d",a,b,(a+b));
            break;
            case 2: printf("%d-%d=%d",a,b,(a-b));
            break;
            case 3: printf("%d*%d=%d",a,b,(a*b));
            break;
            case 4:printf("%d/%d=%d",a,b,(a/b));
            break;
            }
            return 0;
     }
            
             
