//Multiple Choice User Calculator using function orogram




#include<stdio.h>
void add(int a,int b)
{
    int total;
    total=a+b;
    printf("addition of %d and %d is : %d\n",a,b,total);
}
void sub(int a,int b)
{
    int total;
    total=a-b;
    printf("subtraction of %d and %d is : %d\n",a,b,total);
}
void multip(int a,int b)
{
    int total;
    total=a*b;
    printf("multiplication of %d and %d is : %d\n",a,b,total);
}
void divi(int a,int b)
{
    int total;
    total=a/b;
    printf("division of %d and %d is : %d\n",a,b,total);
}
    
    int main()
    
    {
        int ch;
        char option='y';
	    for(;option=='y'||option=='Y';)
	    {
	        
        printf("Enter Your Choice:\n");
        printf("\n📍Please Note:\nA=Addition\nS=Subtraction\nM=Multiplication\nD=Division\n");
        printf("1.A\n2.S\n3.AS\n4.M\n5.AM\n6.MS\n7.ASM\n8.D\n9.DA\n10.DS\n11.DSA\n12.DM\n13.DMA\n14.DMS\n15.ASMD\n");
    scanf("%d",&ch);
	switch(ch)
   {
		case 1:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            break;
		}
		case 2:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            sub(num1,num2);
            break;
		}
		case 3:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            sub(num1,num2);
			break;
		}
		case 4:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            multip(num1,num2);
			break;
		}
		case 5:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            multip(num1,num2);
			break;
		}
		case 6:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            sub(num1,num2);
            multip(num1,num2);
			break;
		}
		case 7:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            sub(num1,num2);
            multip(num1,num2);
			break;
		}
		case 8:
		{
           int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            divi(num1,num2);
			break;
		}
        case 9:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            divi(num1,num2);
			break;
		}
		case 10:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            sub(num1,num2);
            divi(num1,num2);
			break;
		}
		case 11:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            sub(num1,num2);
            divi(num1,num2);
			break;
		}
		case 12:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            multip(num1,num2);
            divi(num1,num2);
			break;
		}
        case 13:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            multip(num1,num2);
            divi(num1,num2);
			break;
		}
		case 14:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            sub(num1,num2);
            multip(num1,num2);
            divi(num1,num2);
            
			break;
		}
		case 15:
		{
            int num1,num2;
            printf("Enter Two Number\n");
            scanf("%d%d",&num1,&num2);
            add(num1,num2);
            sub(num1,num2);
            multip(num1,num2);
            divi(num1,num2);
			break;
		}
		default:
		printf("wrong input");
	printf("\n⚠️⚠️⚠️wrong input⚠️⚠️⚠️\n");
		break;
	}
	printf("do you want to continue?\n");
	printf("prees Y for Continue Or N for Exit\n");
	scanf(" %c",&option);
    }
    }
