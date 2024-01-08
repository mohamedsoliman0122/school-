#include "student.h"

void string_scan(char*str,int MaxSize)
{
    int i=0;
    scanf(" %c",&str[i]);
    for(; str[i]!='\n'&&i<MaxSize-1;)
    {
        i++;
        scanf(" %c",&str[i]);
    }
    str[i]=0;
}

void file1_student(void)
{
    int n;
    printf("\n \t\t =========================== \n");
    printf(" \t\t | Embedded systems school | \n");
    printf(" \t\t =========================== \n\n");
    printf(" 1->> Add Student.\n");
    printf(" 2->> find Student.\n");
    printf(" 3->> Edit Student.\n");
    printf(" 4->> Delete Student.\n");
    printf(" 5->> Call Student Parents.\n");
    printf(" 6->> Print All School Students.\n");
    printf("\n\n > Enter A Number Of Operation Which Need : ");
    scanf("%d",&n);
    if (n==1)
    {
        system("cls");
        add_student();

    }
    else if (n==2)
    {
        system("cls");
        //lstudent_print();
        find_student();
    }
    else if (n==3)
    {
        system("cls");
        //  edit_student();
    }
    else if (n==4)
    {
        system("cls");
        delete_student();
    }
    else if (n==5)
    {
        system("cls");
        //call_student_parents();
    }
    else if (n==6)
    {
        system("cls");
        //print_all_school_students();
    }
    else
    {
        printf("\n \t -->> Error : Operation is not correct. <<--  ");
        scanf(" %c",&mo);
        system("cls");
        file1_student();
    }
}


void add_student(void)
{
    struct student st;
    char j;
    FILE *file;
    file=fopen("file_data.txt","a");

    printf("   <- ADD STUDENT ->   \n");
    printf("\nEnter student name: ");
    string_scan(st.name,20);
    printf("Enter student ID: ");
    scanf ("%d",&st.ID);
    printf("Enter student age: ");
    scanf ("%d",&st.age);
    printf("Enter student class: ");
    scanf ("%d",&st.Class);
    printf("Enter student grade: ");
    scanf (" %c",&st.grade);
    printf("Enter student Address: ");
    string_scan(st.address,40);
    printf("Enter the father's name: ");
    string_scan(st.father.name,20);
    printf("Enter the father's age: ");
    scanf ("%d",&st.father.age);
    printf("Enter the father's number: ");
    scanf ("%s",&st.father.phone);
    printf("Enter the mother's name: ");
    string_scan(st.mother.name,20);
    printf("Enter the mother's age: ");
    scanf ("%d",&st.mother.age);
    printf("Enter the mother's number: ");
    scanf ("%s",&st.mother.phone);
    printf("Enter number of brather: ");
    scanf ("%d",&st.n_of_pro);
    /*st.brathers=(person*)malloc(st.n_of_pro*sizeof(person));

    for (int i=0; i<st.n_of_pro; i++)
    {
        printf("\n Enter Data of Brather %d :- ",i+1);
        printf("\nEnter brather's name: ");
        string_scan(st.brathers[i].name,20);
        printf("Enter brather's age: ");
        scanf ("%d",&st.brathers[i].age);
        printf("Enter the brather's number: ");
        scanf ("%s",&st.brathers[i].phone);
    }*/
    if(file!=NULL)
    {
        printf(">> success <<\n");
    }
    else
    {
        printf(">> error <<\n");
    }
    //fprintf(file," %s %d %d %d %c %s %s %d %s %s %d %s %d",st.name,st.ID,st.age,st.Class,st.grade,st.address,st.father.name,st.father.age,st.father.phone,st.mother.name,st.mother.age,st.mother.phone,st.n_of_pro);
    fwrite(&st,sizeof(struct student),1,file);
    fclose(file);
    printf("\n \t -->> Do You Want To Add More [ Y / N ] :-  ");
    scanf(" %c",&j);
    if(j=='Y'||j=='y')
    {
        system("cls");
        add_student();
    }
    else
    {
        system("cls");
        file1_student();
    }
}
