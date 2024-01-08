#include "student.h"




void student_print(void)
{
    FILE *file;
    struct student st;
    file=fopen("file_data.txt","r");
    while(fread(&st,sizeof(struct student),1,file)==1)
    {
        printf("\n name: %s\n",st.name);
        printf(" ID: %d\n",st.ID);
        printf(" age: %d\n",st.age);
        printf(" Class: %d\n",st.Class);
        printf(" grade: %c \n",st.grade);
        printf(" address: %s\n",st.address);
        printf(" father's name: %s\n",st.father.name);
        printf(" father's age: %d\n",st.father.age);
        printf(" father's number: %s\n",st.father.phone);
        printf(" mother's name: %s\n",st.mother.name);
        printf(" mother's age: %d\n",st.mother.age);
        printf(" mother's number: %s\n",st.mother.phone);
        printf(" number of brather: %d\n",st.n_of_pro);
        /*for(int i=0; i<st.n_of_pro; i++)
        {
            printf("\n -> brather's name : %s",st.brathers[i].name);
            printf("\n -> brather's age : %d",st.brathers[i].age);
            printf("\n -> brather's phone : %s",st.brathers[i].phone);
        }*/
    }
    fclose(file);
    printf("\n \t -->> > press any key to back : <<--  ");
    scanf("%d",&mo);
    system("cls");
    file1_student();
}





void find_student(void)
{
    int ID_F,flag=0 ;
    char more;
    struct student st;
    FILE *file;
    file=fopen("file_data.txt","r");
    int n,n1;
    char str[20];
    printf("  Searching for student. \n");
    printf(" ________________________ \n\n");
    printf(" 1- Search by ID.\n");
    printf(" 2- Search by Name. \n");
    printf(" 0- Back. \n\n");
    printf(" > Enter no of edit :");
    scanf("%d",&n);
    if(n==1)
    {
        system("cls");
        printf("\n > Enter a student ID : ");
        scanf("%d",&ID_F);
        fflush(stdin);
        ID_F=toupper(ID_F);
        while(fread(&st,sizeof(struct student),1,file)==1)
        {
            if(st.ID==ID_F)
            {
                flag=1;
                printf("\n name: %s\n",st.name);
                printf(" ID: %d\n",st.ID);
                printf(" age: %d\n",st.age);
                printf(" Class: %d\n",st.Class);
                printf(" grade: %c \n",st.grade);
                printf(" address: %s\n",st.address);
                printf(" father's name: %s\n",st.father.name);
                printf(" father's age: %d\n",st.father.age);
                printf(" father's number: %s\n",st.father.phone);
                printf(" mother's name: %s\n",st.mother.name);
                printf(" mother's age: %d\n",st.mother.age);
                printf(" mother's number: %s\n",st.mother.phone);
                printf(" number of brather: %d\n",st.n_of_pro);
                /*for(int i=0; i<st.n_of_pro; i++)
                {
                    printf("\n -> brather's name : %s",st.brathers[i].name);
                    printf("\n -> brather's age : %d",st.brathers[i].age);
                    printf("\n -> brather's phone : %s",st.brathers[i].phone);
                }
                scanf(" %c",&more);*/
            }
        }
        if(flag=0)
            {
                printf("  Record not found! ");
                scanf(" %c",mo);
                system("cls");
                file1_student();
            }
        fclose(file);
        printf("\n  Do you want to view more[Y/N]??");
        scanf(" %c",&more);
        if (more=='Y'||more=='y')
        {
            system("cls");
            find_student();
        }
        else
        {
            printf("\n\t\t Thank you.");
            system("cls");
            file1_student();
        }
    }
    else if(n==2)
    {
        system("cls");
        printf("\n > Enter a student name : ");
        scanf("%s",st);
        fflush(stdin);
        str[0]=toupper(str[0]);
        while(fread(&st,sizeof(struct student),1,file)==1)
        {
            if(strcmp(st.name,str)==0)
            {
                flag=1;
                printf("\n name: %s\n",st.name);
                printf(" ID: %d\n",st.ID);
                printf(" age: %d\n",st.age);
                printf(" Class: %d\n",st.Class);
                printf(" grade: %c \n",st.grade);
                printf(" address: %s\n",st.address);
                printf(" father's name: %s\n",st.father.name);
                printf(" father's age: %d\n",st.father.age);
                printf(" father's number: %s\n",st.father.phone);
                printf(" mother's name: %s\n",st.mother.name);
                printf(" mother's age: %d\n",st.mother.age);
                printf(" mother's number: %s\n",st.mother.phone);
                printf(" number of brather: %d\n",st.n_of_pro);
            }
        }
        if(flag=0)
        {
            printf("Record not found!");
            scanf(" %c",mo);
            system("cls");
            file1_student();
        }

        fclose(file);
        printf("\n  Do you want to view more[Y/N]??");
        scanf(" %c",&more);
        system("cls");
        file1_student();
    }
    else if(n==0)
    {
        system("cls");
        find_student();
    }
    else
    {
        system("cls");
        printf("\n \t -->> Wrong input <<--  \n");
        printf(" > press any key to back : ");
        scanf(" %c",&mo);
        system("cls");
        file1_student();
    }

}


void edit_student(void)
{
    int n,n1,n2,n3,n4;
    char str, str2;
    printf("\n > Enter student ID to edit :");
    scanf("%d",&n);
    system("cls");
    printf("  Editing student information :\n");
    printf(" _______________________________ \n");
    printf(" >> Student ID : %d \n\n",n);
    printf(" 1- Student data.\n");
    printf(" 2- Parents data. \n");
    printf(" 0- Back. \n\n");
    printf(" > Enter no of data to edit :");
    scanf("%d",&n1);
    if(n1==1)
    {
        system("cls");
        printf(" 1- Name. \n 2- Age. \n 3- Class. \n 4- Grade. \n 5- No of brothers. \n 6- Address.\n\n");
        printf(" > Enter no to edit :");
        scanf("%d",&n3);
        if(n3==1)
        {
            system("cls");
            printf("\n Editing new name :\n");

        }
        else if(n3==2)
        {
            system("cls");
            printf("\n Editing new age :\n");

        }
        else if(n3==3)
        {
            system("cls");
            printf("\n Editing new class :\n");
        }
        else if(n3==4)
        {
            system("cls");
            printf("\n Editing new grade :\n");
        }
        else if(n3==5)
        {
            system("cls");
            printf("\n Editing new number of brather :\n");
        }
        else if(n3==6)
        {
            system("cls");
            printf("\n Editing new adress :\n");
        }
        else
        {
            printf(" > Enter any key to back main menu , 1 to continue editing: ");
            scanf(" %c",&mo);
            system("cls");
            file1_student();
        }
    }
    else if(n1==2)
    {
        printf("\n 1- Father name. \n 2- Father age. \n 3- Father phone. \n 4- Mother name. \n 5- Mother age. \n 6- Mother phone.\n\n");
        printf(" > Enter no to edit :");
        scanf("%d",&n2);
        if(n2==1)
        {
            system("cls");
            printf("\n Editing new Father name :\n");

        }
        else if(n2==2)
        {
            system("cls");
            printf("\n Editing new Father age :\n");

        }
        else if(n2==3)
        {
            system("cls");
            printf("\n Editing new Father phone :\n");

        }
        else if(n2==4)
        {
            system("cls");
            printf("\n Editing new mother name :\n");

        }
        else if(n2==5)
        {
            system("cls");
            printf("\n Editing new mother age :\n");

        }
        else if(n2==6)
        {
            system("cls");
            printf("\n Editing new mother plone :\n");
        }
        else
        {

            printf(" > Enter any key to back main menu , 1 to continue editing: ");
            scanf(" %c",&mo);
            system("cls");
            file1_student();
        }
    }
    else if (n==0)
    {
        system("cls");
        edit_student();
    }
    else
    {
        system("cls");
        printf("\n \t -->> Wrong input <<--  \n");
        printf(" > press any key to back : ");
        scanf(" %c",&mo);
        system("cls");
        file1_student();
    }

}


void delete_student(void)
{
    struct student st;
    FILE *file,*file1;
    int ID_n,flag=0;
    printf("\t\t\t\tDELETE STUDENTS RECORD\n\n\n");
    file=fopen("file_add.txt","rb");
    file1=fopen("temp.txt","wb");
    printf("\t\t\tEnter the ID number :");
    scanf(" %d",&ID_n);
    while(fread(&st,sizeof(struct student),1,file) == 1)
    {
        if(st.ID == ID_n)
        {

            flag=1;
        }
        else
        {
            fwrite(&st,sizeof(struct student),1,file1);
        }
    }
    fclose(file);
    fclose(file1);

    if(!flag)
    {
        printf("\n\t\t\t\tRecord not flag\n");
    }
    if(flag)
    {
        remove("temp.txt");
        rename("file_add.txt","C:\school system.txt");
        printf("\n\t\t\t\tRecord deleted succesfully\n");
    }
}


void swap_student(struct student*s1,struct student* s2)
{
    struct student temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}


void bubbleSortAgeStudent( struct student* arr,int size)
{
    int last=size-1,sorted=0;
    while(!sorted)
    {
        sorted=1;
        for(int i=0; i<last; i++)
        {
            if (arr[i].age>arr[i+1].age)
            {
                swap_student(arr+i,arr+i+1);
                sorted=0;
            }
        }
        last--;
    }
}


int student_find_ID( int size,int n)
{
    struct student st ;
    FILE * file ;
    file=fopen("file_data.txt","r");
    int i,max=0,index;
    for(i=0; i<size; i++)
    {
        if((st.ID)==n)
        {
            index=i;
        }
    }
    return index;
}


