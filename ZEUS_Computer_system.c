/* ATHOR: Thiran Naleendra
   date :2020/05/28
   ID : MA-DSE-201-F-006
   Computer System*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


void input();
void cpu();
void ram();
void vcard();
void mouse();
void keyboard();
void discount();
void subwoof();
void close();
void cables();
char choice;
int total=0;

int main()


{
    input();
    return 0;
}

void input()
{
    do
    {   system("color E");//text colour

        printf("\n\n ---- ZEUS Computer System ---- \n\n ---- Please Select Your Choice ----\n\n"); //Welcome text
        printf("\t\t [1] - CPU\n"); //menu
        printf("\t\t [2] - RAM\n");
        printf("\t\t [3] - VGA CArd\n");
        printf("\t\t [4] - Mouse\n");
        printf("\t\t [5] - Keyboard\n");
        printf("\t\t [6] - Subwoofer's \n");

        printf("\t\t-------------------------\n");
        printf("\t\t [7] - Discount Details\n");
        printf("\t\t [8] - Exit\n");
        printf("\n Enter Your Choice : "); //input
        scanf(" %c",&choice);

        system("cls");

        if(choice=='1') //Selection
        {
            cpu();
        }
        else if (choice=='2')
        {
            ram();
        }
        else if (choice=='3')
        {
            vcard();
        }
        else if (choice=='4')
        {
            mouse();
        }
        else if (choice=='5')
        {
            keyboard();
        }
        else if (choice=='6')
        {
            subwoof();
        }

        else if (choice=='7')
        {
            discount();
        }

        else if(choice=='8')
        {
            close();
        }
        else
        {
            printf("**Invalid Choice**"); //Invalid Massage
        }
    }
    while(choice!='8');//loop

}
void cpu()
{
    char cpu; //Local Variable
    printf("\n\nPlease enter your want CPU Type : \n\n"); //Massage For customer
    printf("\t\t [1] Core i3 --> Rs.25000/= \n");
    printf("\t\t [2] core i5\ --> Rs.40000/= \n");
    printf("\t\t [3] core i7 --> Rs.58000/=\n");
    printf(" Enter your cpu type : "); //Inputs
    scanf(" %c",&cpu);
    printf("\n");
    system("cls");
    if(cpu=='1') //Selection
    {
    total=total+25000;
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(cpu=='2')
    {
        total=total+40000;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(cpu=='3')
    {
        total=total+58000;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}

void ram()

{
    char ram; //Local Variable
    printf("\n\nPlease enter your want RAM Type : \n\n"); //Massage For customer
    printf("\t\t [1] 2 GB --> Rs.2400/=\n");
    printf("\t\t [2] 4 GB --> Rs.4200/=\n");
    printf("\t\t [3] 8 GB --> Rs.7250/=\n");
    printf("\t\t [4] 16 GB --> Rs.12300/=\n");
    printf(" Enter your ram type : "); //Inputs
    scanf(" %c",&ram);
    printf("\n");
    system("cls");
    if(ram=='1') //Selection
    {
    total=total+2400;
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(ram=='2')
    {
        total=total+4200;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(ram=='3')
    {
        total=total+7250;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(ram=='4')
    {
        total=total+12300;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}
void vcard()
{
    char vcard; //Local Variable
    printf("\n\nPlease enter your want VGA Card  Type : \n\n"); //Massage For customer
    printf("\t\t [1] GTX 1050 3GB --> Rs.36000/=\n");
    printf("\t\t [2] GTX 1050ti 4GB --> Rs.42000/=\n");
    printf("\t\t [3] GTX 1060 6GB --> Rs.58000/=\n");
    printf("\t\t [4] GTX 1060ti 8GB --> Rs.65000/=\n");
    printf("\t\t [5] RTX 2080ti 12GB --> Rs.98000/=\n");
    printf(" Enter your want VGA Card  type : "); //Inputs
    scanf(" %c",&vcard);
    printf("\n");
    system("cls");
    if(vcard=='1') //Selection
    {
    total=total+36000;
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(vcard=='2')
    {
        total=total+42000;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(vcard=='3')
    {
        total=total+58000;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(vcard=='4')
    {
        total=total+65000;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(vcard=='5')
    {
        total=total+98000;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}
void mouse()
{
    char mouse; //Local Variable
    printf("\n\nPlease enter your want Mouse Type : \n\n"); //Massage For customer
    printf("\t\t [1] Havit nomal mouse --> Rs.600/=\n");
    printf("\t\t [2] Havit Gaming mouse --> Rs.3200/=\n");
    printf(" Enter your want Mouse type : "); //Inputs
    scanf(" %c",&mouse);
    printf("\n");
    system("cls");
    if(mouse=='1') //Selection
    {
    total=total+600;
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(mouse=='2')
    {
        total=total+3200;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}
void keyboard()
{
    char kboard; //Local Variable
    printf("\n\nPlease enter your want Keyboard Type : \n\n"); //Massage For customer
    printf("\t\t [1] Havit nomal Keyboard --> Rs.850/=\n");
    printf("\t\t [2] Havit Gaming Keyboard --> Rs.3450/=\n");
    printf(" Enter your want Keyboard type : "); //Inputs
    scanf(" %c",&kboard);
    printf("\n");
    system("cls");
    if(kboard=='1') //Selection
    {
    total=total+850;
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(kboard=='2')
    {
        total=total+3450;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}
void subwoof()
{
    char subw; //Local Variable
    printf("\n\nPlease enter your want Subwoofer Type : \n\n"); //Massage For customer
    printf("\t\t [1] Microlab 5.1(m700) --> RS.9500/= \n");
    printf("\t\t [2] Microlab 2.1 --> Rs.6500/= \n");
    printf("\t\t [3] Microlab 4.1 --> Rs.3500/= \n");
    printf(" Enter your want Subwoofer type : "); //Inputs
    scanf(" %c",&subw);
    printf("\n");
    system("cls");
    if(subw=='1') //Selection
    {
    total=total+9500;
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(subw=='2')
    {
        total=total+6500;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else if(subw=='3')
    {
        total=total+3500;
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}

void discount()
    {
        char dis; //Local Variable
        printf("\n\n if your total greater than 80000/= \n \tyou can enjoy 8 percent discount\n\n"); // Massage For customer
        printf(" if your total greater than 120000/= \n \tyou can enjoy 10 percent discount\n\n");
        printf(" if your total is greater than 150000/= \n \t you van enjoy 12 percent discount\n\n");
        printf(" Do You want Discount?\n");
        printf(" Press [Y] For Yes or [N] For No : "); //Inputs
        scanf(" %c",&dis);
        if(dis=='Y'||dis=='y') //selection
        {
            if(total>=150000)
            {
                total=total-(total*12/100);
                printf("  New Total Is : Rs.%d",total);
            }
            else if(total>=120000)
            {
                total=total-(total*10/100);
                printf("  New Total Is : Rs.%d",total);
            }
            else if(total>=80000)
            {
                total=total-(total*8/100);
                printf("  New Total Is : Rs.%d",total);
            }
            else
            {
                printf(" \n ......Your Total is Not Enough To Enjoy Our Discount....... \n");
            }
        }
        else if(dis=='N'||dis=='n')
                printf("\nYour Total Bill Is : Rs.%d",total);
        else
        {
            printf("\t\tInvalid Choice"); //invalid Massage
        }
    }
void close()
{
        printf("\nYour Total Bill Is : Rs.%d   ",total);//total bill
        printf("\n\n\t\t ----------------------------\n");
        printf("\n\n\t\t -- Thank You For Visit Us --\n"); // Exit Massage
        printf("\n\n\t\t       -- Come Again --\n");
        printf("\n\n\t\t ----------------------------\n");
        total=0;

}


