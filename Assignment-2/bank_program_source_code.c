#include<stdio.h> 
 void creation(); 
 void deposit(); 
 void withdraw(); 
 void bal(); 
 int a=0,i = 101; 
 struct bank 
 { 
         int no; 
         char name[20];
         char bank_name[20];
         char acc_type[20];
         //float bal; 
         float dep; 
 }s[20]; 
         void main() 
        { 
                   int ch; 
                   while(1) 
                         { 
                                
                               printf("\n*********************"); 
                               printf("\n BANKING "); 
                               printf("\n*********************"); 
                               printf("\n1-Creation"); 
                               printf("\n2-Deposit"); 
                               printf("\n3-Withdraw"); 
                               printf("\n4-Balance Enquiry"); 
                               printf("\n5-View all list_of_bank_names");
                               printf("\n6-View the bank operations of a particular bank");
                               printf("\nEnter your choice:"); 
                               scanf("%d",&ch); 
                               switch(ch) 
                                        { 
                                               case 1: creation(); 
                                                          break; 
                                               case 2: deposit(); 
                                                          break; 
                                               case 3: withdraw(); 
                                                          break; 
                                               case 4: bal(); 
                                                          break; 
                                               case 5: view_all_bank_lists();
                                                       break;
                                               default: 
                                                    printf("Enter 1-5 only"); 
                                         } 
                          } 
         } 
              void creation() 
         { 
                    printf("\n*************************************"); 
                    printf("\n ACCOUNT CREATION "); 
                    printf("\n*************************************"); 
                    printf("\nYour Account Number is :%d",i); 
                               s[a].no = i; 
                    printf("\nEnter your Name:"); 
                               scanf("%s",s[a].name);
                    printf("\nEnter your Bank Name:"); 
                               scanf("%s",s[a].bank_name);
                    printf("\nEnter your Account type:"); 
                               scanf("%s",s[a].acc_type);
                    printf("\nYour Deposit is Minimum Rs.500"); 
                               s[a].dep=500; 
                               a++; 
                               i++; 
                               getch(); 
          } 
               void deposit() 
         { 
                    int no,b=0,m=0; 
                    float aa; 
                    printf("\n*************************************"); 
                    printf("\n DEPOSIT "); 
                    printf("\n*************************************"); 
                    printf("\nEnter your Account Number"); 
                    scanf("%d",&no); 
                    for(b=0;b<i;b++) 
                        { 
                            if(s[b].no == no) 
                                m = b; 
                        } 
                            if(s[m].no == no) 
                              { 
                                         printf("\n Account Number : %d",s[m].no); 
                                         printf("\n Name : %s",s[m].name);
                                         printf("\n Bank Name : %s",s[m].bank_name);
                                         printf("\n Account Type : %s",s[m].acc_type);
                                         printf("\n Deposit : %f",s[m].dep); 
                                         printf("\n How Much Deposited Now:"); 
                                         scanf("%f",&aa); 
                                         s[m].dep+=aa; 
                                         printf("\nDeposit Amount is :%f",s[m].dep); 
                                         getch(); 
                              } 
                             else 
                              { 
                                        printf("\nACCOUNT NUMBER IS INVALID"); 
                                        getch(); 
                               } 
          } 
              void withdraw() 
          { 
                     int no,b=0,m=0; 
                     float aa; 
                     printf("\n*************************************"); 
                     printf("\n WITHDRAW "); 
                     printf("\n*************************************"); 
                     printf("\nEnter your Account Number"); 
                     scanf("%d",&no); 
                     for(b=0;b<i;b++) 
                         { 
                                if(s[b].no == no) 
                                  m = b; 
                         } 
                               if(s[m].no == no) 
                                  { 
                                         printf("\n Account Number : %d",s[m].no); 
                                         printf("\n Name : %s",s[m].name); 
                                         printf("\n Bank Name : %s",s[m].bank_name);
                                         printf("\n Account Type : %s",s[m].acc_type);
                                         printf("\n Deposit : %f",s[m].dep); 
                                         printf("\n How Much Withdraw Now:"); 
                                         scanf("%f",&aa); 
                                         if(s[m].dep<aa+500) 
                                            { 
                                                   printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE"); 
                                                   getch(); 
                                            } 
                                           else 
                                            { 
                                                   s[m].dep-=aa; 
                                                   printf("\nThe Balance Amount is:%f",s[m].dep); 
                                             } 
                                  } 
                                else 
                                 { 
                                       printf("INVALID"); 
                                       getch(); 
                                 } 
                                       getch(); 
           } 
           void bal() 
           { 
                   int no,b=0,m=0; 
                   float aa; 
                   printf("\n*************************************"); 
                   printf("\n BALANCE ENQUIRY "); 
                   printf("\n*************************************"); 
                   printf("\nEnter your Account Number"); 
                   scanf("%d",&no); 
                   for(b=0;b<i;b++)        
                       { 
                            if(s[b].no == no) 
                              m = b; 
                       } 
                            if(s[m].no==no) 
                               { 
                                     printf("\n Account Number : %d",s[m].no); 
                                     printf("\n Name : %s",s[m].name);
                                     printf("\n Bank Name : %s",s[m].bank_name);
                                     printf("\n Account Type : %s",s[m].acc_type);
                                     printf("\n Deposit : %f",s[m].dep); 
                                     getch(); 
                               } 
                              else 
                              { 
                                     printf("INVALID"); 
                                     getch(); 
                               } 
             }
             void view_all_bank_lists()
             {
                 int b=0;
                 
                 for(b=0;b<i;b++)
                 {
                     printf("\n Account Number : %d \t\t\t Bank Name: %s",s[b].no,s[b].bank_name);
                 }
             }

Output:


*********************
 BANKING 
*********************
1-Creation
2-Deposit
3-Withdraw
4-Balance Enquiry
5-View all list_of_bank_names
6-View the bank operations of a particular bank
Enter your choice:1

*************************************
 ACCOUNT CREATION 
*************************************
Your Account Number is :101
Enter your Name:Shankar

Enter your Bank Name:ICICI

Enter your Account type:Savings

Your Deposit is Minimum Rs.500
