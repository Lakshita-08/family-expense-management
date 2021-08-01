#include<stdio.h>

void main()
{
  int a1[12],b1[12],c1[12],d1[12];      //these arrays are for salaries
  int a2[12],b2[12],c2[12],d2[12];       //these arrays are for expenses
//  a1[]=b1[]=c1[]=d1[]=a2[]=b2[]=c2[]=d2[]={0,0,0,0,0,0,0,0,0,0,0,0};
  for(int j = 0; j < 12 ; j++)           //initially null
  {
      a1[j]=b1[j]=c1[j]=d1[j]=a2[j]=b2[j]=c2[j]=d2[j]=0;
   }
 char mother[20],father[20],daughter[20],son[20];         //taking input for 4 members
  printf("\n***********Welcome to family budgeting*************\n\n");
  printf("There are 4 members in the family\n");
  printf("Enter the name of Father - ");
  gets(father);
  printf("Enter the name of mother - ");
  gets(mother);
  printf("Enter the name of daughter - ");
  gets(daughter);
  printf("Enter the name of son - ");
  gets(son);
                                    //menu driven program
while(1){
        int choice;
        printf("Enter :\n1 -To add salary\n2 -To add expense\n3 - To print the salaries of all months\n4 -To print expenses of all the months\n5 -To print max and min savings\n6 -To print the annual income\n7 -To print the annnual expenditure\n0 -EXIT\n");
        scanf("%d",&choice);
        if(choice==1)         //taking salaries of all months from user
        {
        for (int i = 0; i < 12;i++)

       {   printf("\n");
      printf("Enter the salary of family members in %d month  \n",i+1);

      printf("by %s is \t",father);
      scanf("%d",&a1[i]);
      printf("by %s is \t",mother);
      scanf("%d",&b1[i]);
      printf("by %s is \t",daughter);
      scanf("%d",&c1[i]);
      printf("by %s is \t",son);
      scanf("%d",&d1[i]);
      printf("\n");}}
       else if(choice==2)          //taking expenses of all the months
       {
           for (int i = 0; i < 12;i++){
       printf("Enter the expenses made by the family members in %d month\n",i+1);
      printf("by %s is \t",father);

      scanf("%d",&a2[i]);
      printf("by %s is \t",mother);
      scanf("%d",&b2[i]);
      printf("by %s is \t",daughter);
      scanf("%d",&c2[i]);
      printf("by %s is \t",son);
      scanf("%d",&d2[i]);
      printf("\n");}}

    else if(choice==3)                  //printing salaries of all the months
     {  printf("SALARIES---->\n");
        printf(" by %s is \n",father);
        for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",a1[i],i+1);}
        printf(" by %s is \n",mother);
        for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",b1[i],i+1);}
                printf(" by %s is \n",daughter);
        for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",c1[i],i+1);}
                printf(" by %s is \n",son);
               for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",d1[i],i+1);}
     }

    else if(choice==4)                   //printing expenses
     { printf("EXPENSES---->\n");
        printf(" by %s is \n",father);
        for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",a2[i],i+1);}
        printf(" by %s is \n",mother);
        for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",b2[i],i+1);}
                printf(" by %s is \n",daughter);
        for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",c2[i],i+1);}
                printf(" by %s is \n",son);
               for (int i = 0; i < 12;i++){
                printf("%d      %d month\n",d2[i],i+1);}
     }
     else if(choice==5)           // to find max and min savings
     {
        int e1[12],e2[12],e3[12],e4[12];       //these arrays will store the remaininf money
       int index1=0,index2=0,index3=0,index4=0;
          for (int i = 0; i < 12;i++)
            {
              e1[i]=a1[i]-a2[i];
              e2[i]=b1[i]-b2[i];
              e3[i]=c1[i]-c2[i];
              e4[i]=d1[i]-d2[i];
            }
            printf("MINIMUM SAVINGS---->\n");
      int min1 = e1[0];
      int min2 = e2[0];
      int min3 = e3[0];
      int min4 = e4[0];
            for (int i = 0; i < 12;i++)
            {
                if(min1>e1[i])
                {
                    min1=e1[i];
                    index1 = i;
                }
                if(min2>e2[i])
                {
                    min2=e2[i];
                    index2 = i;
                }
                if(min3>e3[i])
                {
                    min3=e3[i];
                    index3 = i;
                }
                if(min4>e4[i])
                {
                    min4=e4[i];
                    index4 = i;
                }
             }
     printf("the min savings of %s are %d in %d month\n",father,min1,index1);
     printf("the min savings of %s are %d in %d month\n",mother,min2,index2);
     printf("the min savings of %s are %d in %d month\n",daughter,min3,index3);
     printf("the min savings of %s are %d in %d month\n",son,min4,index4);

     printf("MAXIMUM SAVINGS---->\n");
      int max1 = e1[0];
      int max2 = e2[0];
      int max3 = e3[0];
      int max4 = e4[0];
      index1=0,index2=0,index3=0,index4=0;   //index will store the month
            for (int i = 0; i < 12;i++)
            {
                if(max1<e1[i])
                {
                    max1=e1[i];
                    index1 = i;
                }
                if(max2<e2[i])
                {
                    max2=e2[i];
                    index2 = i;
                }
                if(max3<e3[i])
                {
                    max3=e3[i];
                    index3 = i;
                }
                if(max4<e4[i])
                {
                    max4=e4[i];
                    index4 = i;
                }
             }
     printf("the max savings of %s are %d in %d month\n",father,max1,index1);
     printf("the max savings of %s are %d in %d month\n",mother,max2,index2);
     printf("the max savings of %s are %d in %d month\n",daughter,max3,index3);
     printf("the max savings of %s are %d in %d month\n",son,max4,index4);

     }
     else if(choice==6)
     {   int sum1=summ(a1);
         int sum2=summ(b1);
         int sum3=summ(c1);
         int sum4=summ(d1);
         printf("The total income of %s is %d\n",father,sum1);
         printf("The total income of %s is %d\n",mother,sum2);
         printf("The total income of %s is %d\n",daughter,sum3);
         printf("The total income of %s is %d\n",son,sum4);
         }
       else if(choice==7)
       {
        int sum5=summ(a2);
         int sum6=summ(b2);
         int sum7=summ(c2);
         int sum8=summ(d2);
         printf("The total expenditure of %s is %d\n",father,sum5);
         printf("The total expenditure  of %s is %d\n",mother,sum6);
         printf("The total expenditure  of %s is %d\n",daughter,sum7);
         printf("The total expenditure  of %s is %d\n",son,sum8);
       }


     else if (choice==0)
        break;

}
}

int summ(int a[])       //method for summation
{
  int sum = 0;
  for (int i = 0; i < 12 ;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}


/*
***********Welcome to family budgeting*************

There are 4 members in the family
Enter the name of Father - john
Enter the name of mother - riya
Enter the name of daughter - jia
Enter the name of son - yash
Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
1

Enter the salary of family members in 1 month
by john is      8000
by riya is      7000
by jia is       700
by yash is      787


Enter the salary of family members in 2 month
by john is      686
by riya is      787
by jia is       678
by yash is      688


Enter the salary of family members in 3 month
by john is      678
by riya is      890
by jia is       789
by yash is      689


Enter the salary of family members in 4 month
by john is      768
by riya is      768
by jia is       898
by yash is      678


Enter the salary of family members in 5 month
by john is      798
by riya is      879
by jia is       867
by yash is      756


Enter the salary of family members in 6 month
by john is      353
by riya is      435
by jia is       5675
by yash is      567


Enter the salary of family members in 7 month
by john is      544
by riya is      466
by jia is       456
by yash is      7656


Enter the salary of family members in 8 month
by john is      564
by riya is      35
by jia is       35
by yash is      456


Enter the salary of family members in 9 month
by john is      345
by riya is      465
by jia is       465
by yash is      234


Enter the salary of family members in 10 month
by john is      2344
by riya is      2342
by jia is       3534
by yash is      456


Enter the salary of family members in 11 month
by john is      675
by riya is      3543
by jia is       345
by yash is      343


Enter the salary of family members in 12 month
by john is      244
by riya is      234
by jia is       354
by yash is      465

Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
2
Enter the expenses made by the family members in 1 month
by john is      6
by riya is      6
by jia is       6
by yash is      6

Enter the expenses made by the family members in 2 month
by john is      4
by riya is      4
by jia is       4
by yash is      4

Enter the expenses made by the family members in 3 month
by john is      23
by riya is      3
by jia is       4
by yash is      5

Enter the expenses made by the family members in 4 month
by john is      3
by riya is      4
by jia is       5
by yash is      3

Enter the expenses made by the family members in 5 month
by john is      24
by riya is      5
by jia is       5
by yash is      5

Enter the expenses made by the family members in 6 month
by john is      53
by riya is      32
by jia is       4
by yash is      4

Enter the expenses made by the family members in 7 month
by john is      4
by riya is      4
by jia is       4
by yash is      4

Enter the expenses made by the family members in 8 month
by john is      4
by riya is      4
by jia is       4
by yash is      4

Enter the expenses made by the family members in 9 month
by john is      8
by riya is      7
by jia is       6
by yash is      5

Enter the expenses made by the family members in 10 month
by john is      4
by riya is      3
by jia is       3
by yash is      5

Enter the expenses made by the family members in 11 month
by john is      6
by riya is      7
by jia is       7
by yash is      6

Enter the expenses made by the family members in 12 month
by john is      4
by riya is      5
by jia is       6
by yash is      7

Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
3
SALARIES---->
 by john is
8000      1 month
686      2 month
678      3 month
768      4 month
798      5 month
353      6 month
544      7 month
564      8 month
345      9 month
2344      10 month
675      11 month
244      12 month
 by riya is
7000      1 month
787      2 month
890      3 month
768      4 month
879      5 month
435      6 month
466      7 month
35      8 month
465      9 month
2342      10 month
3543      11 month
234      12 month
 by jia is
700      1 month
678      2 month
789      3 month
898      4 month
867      5 month
5675      6 month
456      7 month
35      8 month
465      9 month
3534      10 month
345      11 month
354      12 month
 by yash is
787      1 month
688      2 month
689      3 month
678      4 month
756      5 month
567      6 month
7656      7 month
456      8 month
234      9 month
456      10 month
343      11 month
465      12 month
Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
4
EXPENSES---->
 by john is
6      1 month
4      2 month
23      3 month
3      4 month
24      5 month
53      6 month
4      7 month
4      8 month
8      9 month
4      10 month
6      11 month
4      12 month
 by riya is
6      1 month
4      2 month
3      3 month
4      4 month
5      5 month
32      6 month
4      7 month
4      8 month
7      9 month
3      10 month
7      11 month
5      12 month
 by jia is
6      1 month
4      2 month
4      3 month
5      4 month
5      5 month
4      6 month
4      7 month
4      8 month
6      9 month
3      10 month
7      11 month
6      12 month
 by yash is
6      1 month
4      2 month
5      3 month
3      4 month
5      5 month
4      6 month
4      7 month
4      8 month
5      9 month
5      10 month
6      11 month
7      12 month
Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
5
MINIMUM SAVINGS---->
the min savings of john are 240 in 11 month
the min savings of riya are 31 in 7 month
the min savings of jia are 31 in 7 month
the min savings of yash are 229 in 8 month
MAXIMUM SAVINGS---->
the max savings of john are 7994 in 0 month
the max savings of riya are 6994 in 0 month
the max savings of jia are 5671 in 5 month
the max savings of yash are 7652 in 6 month
Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
6
The total income of john is 15999
The total income of riya is 17844
The total income of jia is 14796
The total income of yash is 13775
Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
7
The total expenditure of john is 143
The total expenditure  of riya is 84
The total expenditure  of jia is 58
The total expenditure  of yash is 58
Enter :
1 -To add salary
2 -To add expense
3 - To print the salaries of all months
4 -To print expenses of all the months
5 -To print max and min savings
6 -To print the annual income
7 -To print the annnual expenditure
0 -EXIT
0

*/

