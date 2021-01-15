#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include <Windows.h>

int main()
{
      hm:

    system("color 0A");
    int choice1,PS,About,AdminP,choice2;
    char lpass[100],lname[100],lmail[100];

    printf("\n");
     d1:

    printf("1.Privacy and Security\n2.About us\n3.Admin Panal\n4.Exit\n\n");
    printf("Provide the choice :");
    scanf("%d",&choice1);
    printf("\n\n");

    switch(choice1)
    {


    /*Code of Privacy and Security*/


    case 1:




        printf("\n");
        printf("*******************************************************************************************************************************************************************************************************************\n\n\n");

        printf("\n\t\t\t\t\t//////////////     Privacy and Security   //////////////\n\n\n\n");

        printf("\t\t\t\t\tIntroduction :\n\n\t\t\t\t\t\t Cyber Cafe Management is a complete packages developed for management\n\t\t\t\t\tof system in a cyber cafe.This project is intended to be used in a cyber cafe.\n\t\t\t\t\t");
        printf("All cyber cafes have some basic needs likeable to control the systems\n\t\t\t\t\tthat are being rented to the customers and are changes on timely basis.\n\n\n");

        printf("\n");
        printf("*******************************************************************************************************************************************************************************************************************\n");
        goto hm;
        break;



    /*Code of About us*/



    case 2:






        printf("\n");
        printf("*******************************************************************************************************************************************************************************************************************\n\n\n");

        printf("\n\t\t\t\t\t//////////////     About us   //////////////\n\n\n\n");

        printf("\t\t                        ## BRING YOUR LAPTOP FROM EVERYWHERE AND DO IT YOUR OWN WAY ##                      \n\n\n");
        printf(" \n\t\t\t\t\t------------------------------------\n\t\t\t\t\tPhone number :**********\n\t\t\t\t\t------------------------------------\n\t\t\t\t\tInstagram:LAGECY CYBER CAFE  \n\t\t\t\t\t------------------------------------ \n\t\t\t\t\tFacebook:LEGACY CYBER CAFE \n\t\t\t\t\t------------------------------------\n\t\t\t\t\tWebsite:WWW.TEST.COM\n\t\t\t\t\t------------------------------------\n\n\n");

        printf("\n");
        printf("*******************************************************************************************************************************************************************************************************************\n");
        goto hm;
        break;


    /*Code for Admin Panal*/

    case 3:
        printf("\n");
        ap:
        d2:
        printf("\n");
        printf("*******************************************************************************************************************************************************************************************************************\n");
        printf("(You Must To Create an account First And After You Log in)\n\n\n1.Login into System\n2.Forgot password\n3.Create a New Account\n\n\n");
        printf("Provide the choice :");
        scanf("%d",&choice2);
        printf("\n\n\n");
        switch(choice2)
        {

        /*Code for Login into system*/

        case 1:
            printf("\n");
            printf("*******************************************************************************************************************************************************************************************************************\n");
            printf("\n\t\t\t\t\t//////////////     Login into the System   //////////////\n\n\n\n");

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

            luser:
            char usern[100];
            printf("\t\t\t\t\t------------------------------------\n");
            printf("\t\t\t\t\tProvide the user name :");
            scanf("%s",usern);
            printf("\n");

    if(strcmp(usern,lname)==0)
        {
            printf("\t\t\t\t\t(Your Username is Write!!!)\n");

        }
    else
        {
            printf("\t\t\t\t\t(Your Username is not same!!)\n\n");
            goto luser;

        }

        /*Code for Email ID*/
        lmail:
        char email1[50];
    printf("\t\t\t\t\t------------------------------------\n");
            printf("\t\t\t\t\tProvide the Email ID :");
            scanf("%s",&email1);
            printf("\n");

    if(strcmp(email1,lmail)==0)
        {
            printf("\t\t\t\t\t(Your Email ID is Write!!!)\n");
        }
    else
        {
            printf("\t\t\t\t\t(Your Email ID is Wrong!!)\n\n");
            goto lmail;

        }


       /*Code for password1*/


    char password[100];
    int i;
    char ch;
    i=0;


    printf("\t\t\t\t\t------------------------------------\n");
    printf("\t\t\t\t\tEnter the First Password :");
    while(1)
    {
       ch=getch();
       if(ch==ENTER)
       {
          password[i]='\0';
          break;
       }
       else if(ch==BKSP)
       {
           if(i>0)
           {
               i--;
               printf("\b \b");
           }
       }
       else if(ch==TAB || ch==SPACE)
       {
           continue;
       }
       else
       {
           password[i]=ch;
           i++;
           printf("*");
       }
    }

    /*Code for password2*/




    char password1[100];
    int j;
    char ch1;
    j=0;

    printf("\n\t\t\t\t\t------------------------------------\n");
    printf("\t\t\t\t\tEnter the Conform Password :");
    while(1)
    {

       ch1=getch();
       if(ch1==ENTER)
       {
          password1[j]='\0';
          break;
       }
       else if(ch1==BKSP)
       {
           if(j>0)
           {
               j--;
               printf("\b \b");
           }
       }
       else if(ch1==TAB || ch1==SPACE)
       {
           continue;
       }
       else
       {
           password1[j]=ch1;
           j++;
           printf("*");
       }

    }


             printf("\t\t\t\t\t\n");
            printf("\t\t\t\t\t------------------------------------\n");
            printf("\t\t\t\t\tPlease check your password :%s\n",password);
            printf("\t\t\t\t\tLength of your password:%d",i);
            printf("\n\n\n\n");





    if(strcmp(password,password1)==0)
    {

        printf("\n\n\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\tYour Password is Write !!!!\n");
        printf("\t\t\t\t\t------------------------------------\n");
        if(strcmp(password,lpass)==0)
        {
            printf("\t\t\t\t\tYou Are Successfully Login!!!\n");

        }
        else
        {
            printf("\t\t\t\t\tYour Login Password Or Username is not same!!\n\n");

            goto ap;

        }goto lsp;

    }
    else
    {
        printf("\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\tYour Password is Wrong !!!!\n");
        printf("\t\t\t\t\t------------------------------------\n");

        goto ap;
    }





            lsp:
            printf("\n\n\n");
            printf("*******************************************************************************************************************************************************************************************************************\n");


            /*Check credentials details*/
            mp:
                printf("\n");
                d5:
            int choice3;
            printf("1.Check credentials details\n2.Check Rules of Access\n\nn");
            printf("Provide the choice:");
            scanf("%d",&choice3);

            printf("\n");
            printf("*******************************************************************************************************************************************************************************************************************\n");
            int cmn,m1;
            char cname[20];
            m1=123;
            switch(choice3)

            {

            case 1:

                printf("\n\t\t\t\t\t//////////////     Check credentials details  //////////////\n\n\n\n");
                mname:
                printf("\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\tEnter Your Name:");
                scanf("%s",&cname);


    if(strcmp(cname,lname)==0)
        {
            printf("\t\t\t\t\t(Your Master Name is Write!!!)\n");
        }
    else
        {
            printf("\t\t\t\t\t(Your Master Name is Wrong!!)\n\t\t\t\t\tYou Can't Login !!!!!!\n");
            goto mname;
        }


                mn:
                printf("\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\tEnter the Master number:");
                scanf("%d",&cmn);
                printf("\t\t\t\t\t------------------------------------\n");


                if(cmn==m1)
                {
                    printf("\t\t\t\t\t------------------------------------\n");
                    printf("\t\t\t\t\tYour Master number is write!\n");
                    printf("\t\t\t\t\t------------------------------------\n");
                }
                else
                {
                    printf("\t\t\t\t\t------------------------------------\n");
                    printf("\t\t\t\t\tYour master number is wrong!\n\t\t\t\t\tYou Can't Login !!!!!!\n");
                    printf("\t\t\t\t\t------------------------------------\n");
                    goto mn;
                }

                 /*Code of Manage Modules*/
                printf("\n");
                d4:
                printf("\n");
                printf("*******************************************************************************************************************************************************************************************************************\n");
               int choice5;
            printf("1.Manage Modules\n\n");
            printf("Provide the choice:");
            scanf("%d",&choice5);
            printf("\n");
            printf("*******************************************************************************************************************************************************************************************************************\n");
            switch(choice5)


      {
          printf("\n");
          printf("\n");
        printf("*******************************************************************************************************************************************************************************************************************\n");
        d3:

            case 1:

               printf("\n\t\t\t\t\t//////////////     Manage Modules  //////////////\n\n\n\n");


                mpanal:


               printf("1.Manage Computer Details\n2.Manage Customer Details\n3.Manage Changes Details\n4.Manage Uses Profile\n5.Manage Care Report\n6.Manage User Permission\n7.Manage Role of user\n8.Manage System Admin\n9.Manage Downloads Detail\n10.Manage ID Proof Details\n11.Manage Security Details\n12.Goto Main Panal\n13.Full Exit From Program\n\n");


               int choice6;
            printf("Modules:\n");
            printf("Provide the choice:");
            scanf("%d",&choice6);
            switch(choice6)
            {


             case 1:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Computer Details  //////////////\n\n\n\n");
               printf("\t\t\t\t\tComputer Detail\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n\n\n");


               printf("\t\t\t\t\tHost Name:  DESKTOP-BSG7ULU\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tOS-NAME:  Microsoft Windows 10 pro\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tOS-VERSION:  10.0.18362 N\A Build 18362\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tOS-MANUFACTURER:  Microsoft Corporation\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tOS-CONFIGURATION:Z    Standalone Workstation\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tOS-BUILD TYPE:  Multiprocessor Free\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tRESISTERED QWNER:  ZEEL-PC\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tSYSTEM MODLE:  HP ENVY Notebook\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tSYSTEM TYPE:  x64-based PC\n");
               printf("\t\t\t\t\t------------------------------------\n");

                printf("\t\t\t\t\tSYSTEM LOCALE:   en-us;English (United States)\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");

               goto mpanal;
             break;

             case 2:

                  printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Customer Details //////////////\n\n\n\n");
               printf("\t\t\t\t\tCustomer Details\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n\n\n");
               printf("\t\t\t\t\t Employ Full Name:%s\n ",lname);
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\t Employ Full Password:%s\n ",lpass);
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\t Employ Full Email id:%s\n ",lmail);
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\t Employ Master number:%d\n ",m1);
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");


             goto mpanal;
             break;

             case 3:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Changes Details  //////////////\n\n\n\n");
               printf("\t\t\t\t\tChanges Details\n");
               printf("\t\t\t\t\t------------------------------------\n");
                goto mpanal;
             break;

             case 4:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Uses Profile  //////////////\n\n\n\n");
               printf("\t\t\t\t\tUses Profile\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;

             case 5:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Care Report  //////////////\n\n\n\n");
               printf("\t\t\t\t\tCare Report\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;

             case 6:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage User Permission  //////////////\n\n\n\n");
               printf("\t\t\t\t\tUser Permission\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;

             case 7:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////   Manage Role of user    //////////////\n\n\n\n");
               printf("\t\t\t\t\tRole of user\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;

             case 8:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////    Manage System Admin  //////////////\n\n\n\n");
               printf("\t\t\t\t\tSystem Admin\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n\n\n");
               printf("\t\t\t\t\tDashboard\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("\t\t\t\t\tTotal Static Page:  10\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\tTotal Slider:  15\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\tTotal Portfolio:  90\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\tTotal User:  50\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n\n");
               printf("\t\t\t\t\t!!!!!!For Change The password or Forgot password Goto Forgot password page!!!!!!!\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                 goto mpanal;
             break;

             case 9:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Downloads Detail  //////////////\n\n\n\n");
               printf("\t\t\t\t\tDownloads Detail\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;

             case 10:
                 char HomeAddress[100],PhoneNo[10],Perpose[50];
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage ID Proof Details  //////////////\n\n\n\n");
               printf("\t\t\t\t\tID Proof Details\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("\t\t\t\t\tIdentity(Provide your Photo for ID proof)!!!!!\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\tHome Address(Provide your Address for ID proof):");
               scanf("%s",&HomeAddress);
               printf("\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\tPhone Number:(Provide your Number for ID proof):");
               scanf("%s",&PhoneNo);
               printf("\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\t\t\t\t\tReason For Why you want to Join our Company!(Provide your Reason for ID proof):");
               scanf("%s",&Perpose);
               printf("\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;

             case 11:
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Manage Security Details  //////////////\n\n\n\n");
               printf("\t\t\t\t\tSecurity Details\n");
               printf("\t\t\t\t\t------------------------------------\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto mpanal;
             break;


             case 12:
                 printf("\n\n\n");
                 printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
                goto hm;
                break;


             case 13:


                printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Thank you For Watching My Program  //////////////\n\n\n\n");
               printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
               printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");

               break;


             default:
                 printf("\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\tYour Choice is invalid\n");
                printf("\t\t\t\t------------------------------------\n");
                goto d3;
                break;

            }
           default:
                 printf("\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\tYour Choice is invalid\n");
                printf("\t\t\t\t------------------------------------\n");
                goto d4;
                break;
      }

            break;










            /*Code for rules for Access*/

            case 2:
                printf("\n");
                printf("*******************************************************************************************************************************************************************************************************************\n");
                printf("\n\t\t\t\t\t//////////////     Code for rules for Access  //////////////\n\n\n\n");
                printf("\n\t\t\t\t\t RULES : \n");
                printf("\t\t\t\t\t----------------------------------------------\n");
                printf("\t\t\t\t\tRule no 1:  Maintenance of log register .Photo identity card requested\n");
                printf("\t\t\t\t\tRule no 2:  Minor without photo identity card to be accompanied by an adult \n");
                printf("\t\t\t\t\tRule no 3:  History of websites accessed by a user kep by café for one year \n");
                printf("\t\t\t\t\tRule no 4:  Computers in café equipped with commercially available filtering software to avoid 30633 to child pornography orn\n");
                printf("\t\t\t\t\tRule no 5:  Board declaring computers not to be used for illegal activity to be displayed \n");
                printf("\t\t\t\t\tRule no 6:  Regular inspections of cybercafes \n");
                printf("\t\t\t\t\tRule no 7:  Department of Trade and Industries Trade Name Registration 0 Barangay Endorsement\n");
                printf("\t\t\t\t\tRule no 8:  Local Government Business Permit 0 Building Permit 0 Electrical Permit 0 Sanitary Permit 0 Zoning\n");
                printf("\t\t\t\t\tRule no 9:  Microsoft Internet Café Rental Rights Agreement\n");
                printf("\t\t\t\t\tRule no 10: Other permits and licenses as prescribe by the ordinance regulating the operations of intemet cafes in a particular municipa‘lity or city.\n");
                printf("\t\t\t\t\t----------------------------------------------\n");
               goto mp;
                break;

            default:
        printf("\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\tYour Password is Wrong !!!!\n");
        printf("\t\t\t\t\t------------------------------------\n");
        goto d5;
        break;

       }

                 break;

        /*Code for Forgot Password*/

        case 2:
            int Pn;
            char email[50];
            printf("\n\t\t\t\t\t//////////////     Forgot Password   //////////////\n\n\n\n");
            printf("\n\n\n");
            printf("\t\t\t\t\t------------------------------------\n");
            printf("\t\t\t\t\t(Phone Number is must be 10 digits)\n");
            printf("\t\t\t\t\tPlease Enter Your Phone Number:");
            scanf("%d",&Pn);
            printf("\t\t\t\t\t\n");
            printf("\t\t\t\t\t(Email Address is must Numbers,Characters and Symbol)\n");
            printf("\t\t\t\t\tPlease Provide the Email Address:");
            scanf("%s",&email);
            printf("\t\t\t\t\t------------------------------------\n");
            printf("\t\t\t\t\t\n\n\n\n");
            printf("\t\t\t\t\t!!!!Mail And OTP Successfully Sent!!!!\n\n\n\n");
            printf("\t\t\t\t\t!!!!You Can Forgot the Password Using Mail or OTP!!!!\n\n\n\n");
            printf("\t\t\t\t\t\n");
            printf("*******************************************************************************************************************************************************************************************************************\n");
            break;


        /*Code for Create a New Account*/

        case 3:


            char fn[20],ln[20],mail[20];
            int pass1[10],pass2[10],k,n;

            char password3[100],password4[100];
            int m,l;
            char ch3,ch4;
            m=0,l=0;

            printf("For How many Employ Create a Account :");
            scanf("%d",&n);

            for(k=0; k<n; k++)
            {

                printf("\n\t\t\t\t\t//////////////     Create a New Account   //////////////\n\n\n\n");
                printf("\n\t\t\t\t\t Personal Information \n");
                printf("\t\t\t\t\t----------------------------------------------\n");
                printf("\t\t\t\t\t Enter %d Employ First Name:   ",k+1);
                scanf("%s",&fn[k]);
                printf("\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\t Enter %d Employ Last Name:   ",k+1);
                scanf("%s",&ln[k]);
                printf("\t\t\t\t\t------------------------------------\n");
                strcat(fn,ln);
                printf("\t\t\t\t\t(Email Address is must Numbers,Characters and Symbol)\n");
                printf("\t\t\t\t\tEmail Address:   ");
                scanf("%s",&mail[k]);
                printf("\t\t\t\t\t------------------------------------\n");
                cw:
                printf("\t\t\t\t\t(Password is must minimum 8 letters or Numbers)\n");
                printf("\n\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\tEnter the First Password :");


        while(1)
        {

       ch3=getch();
       if(ch3==ENTER)
       {
          password3[m]='\0';
          break;
       }
       else if(ch3==BKSP)
       {
           if(m>0)
           {
               m--;
               printf("\b \b");
           }
       }
       else if(ch3==TAB || ch3==SPACE)
       {
           continue;
       }
       else
       {
           password3[m]=ch3;
           m++;
           printf("*");
       }

        }

                    printf("\n\t\t\t\t\t------------------------------------\n");
                    printf("\t\t\t\t\tEnter the Conform Password :");
    while(1)
    {

       ch4=getch();
       if(ch4==ENTER)
       {
          password4[l]='\0';
          break;
       }
       else if(ch4==BKSP)
       {
           if(l>0)
           {
               l--;
               printf("\b \b");
           }
       }
       else if(ch4==TAB || ch4==SPACE)
       {
           continue;
       }
       else
       {
           password4[l]=ch4;
           l++;
           printf("*");
       }

    }


             printf("\t\t\t\t\t\n");
            printf("\t\t\t\t\t------------------------------------\n");
            printf("\t\t\t\t\tPlease check your password :%s\n",password3);
            printf("\t\t\t\t\tLength of your password:%d",l);
            printf("\n\n\n\n");




            /*Code of Check password*/


        if(strcmp(password3,password4)==0)
            {

        printf("\n\n\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\tYour Password is Write !!!!\n");
        printf("\t\t\t\t\t------------------------------------\n");
        strcpy(lname,fn);
        strcpy(lmail,mail);
        strcpy(lpass,password3);

            }
    else
            {
        printf("\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\tYour Password is Wrong !!!!\n");
        printf("\t\t\t\t\t------------------------------------\n");

            }
            }
            goto ap;
            break;

           default:
        printf("\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\tYour Choice is Wrong !!!!\n");
        printf("\t\t\t\t\t------------------------------------\n");
        goto d2;
        break;

        }
        break;





         case 4:



                printf("\n");
               printf("*******************************************************************************************************************************************************************************************************************\n");
               printf("\n\t\t\t\t\t//////////////     Thank you For Watching My Program  //////////////\n\n\n\n");
               printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        break;


        default:
                 printf("\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\tYour Choice is invalid\n");
                printf("\t\t\t\t\t------------------------------------\n");
                goto d1;
                break;



     }




   getch();
}







