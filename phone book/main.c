#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <windows.h>

typedef struct
{
    char lastname[200];
    char firstname[200];
    char adress[200];
    char city[200];

    char phonenumber[20];
    int serial;



} contact;

FILE * my_file;
FILE * aux_file;
int cnt =0 ;
char tst;
int test2;
 int test1;
char iSelection[10];
int x=0;
int i=0;
int mm=0;
int auxserial;


 int flg=0;

char auxfirstname[20];
char auxlastname[20];
char singleline[100];
char delt[40];
char cc[10];

int counter=0;
char filenamee[20];
contact info[1000];

void addcontact()
{

printf("to confirm press y to go back press any key -----> ");

getchar();
scanf("%s",cc);
if(strcmp(cc,"y")==0)
{
    system("cls");
    printf("ADDING A NEW CONTACT\n");
    printf(".....................\n\n");

     printf("enter last name : ");
    scanf("%s",info[cnt].lastname);
    printf("enter first name : ");
    scanf("%s",info[cnt].firstname);


    printf("enter adress : ");
    getchar();
    gets(info[cnt].adress);
    printf("enter city : ");
    scanf("%s",info[cnt].city);
    printf("enter phone number : ");
    scanf("%s",info[cnt].phonenumber);
    for(i=0;info[cnt].phonenumber[i]!='\0';i++)
    {
        if(info[cnt].phonenumber[i]>='0' && info[cnt].phonenumber[i]<='9')
            flg=1;
            else
            {flg=0;
            break;}
    }
    while (flg==0)
    {

         printf("invalid-input\n");
         printf("please re-enter the phone number ----->");
         scanf("%s",info[cnt].phonenumber);
         for(i=0;info[cnt].phonenumber[i]!='\0';i++)
    {
         if(info[cnt].phonenumber[i]>='0' && info[cnt].phonenumber[i]<='9')
            flg=1;
            else
            {flg=0;
            break;}
    }

    }


    cnt++;
    printf("\n\n\t\t\tcontact saved !");
    info[i].serial=cnt;
    Sleep(1000);
}
else
{
    system("cls");
    return;
}

}
void save()
{

    my_file=fopen(filenamee,"w");
    for(i=0; i<cnt; i++)
    {


        fprintf(my_file,"%s,",info[i].lastname);
        fprintf(my_file,"%s,",info[i].firstname);
        fprintf(my_file,"%s,",info[i].adress);
        fprintf(my_file,"%s,",info[i].city);
        fprintf(my_file,"%s\n",info[i].phonenumber);

    }
    fclose(my_file);
    system("pause");

}

void search()
{
    int test2=0;
 int test1=0;
    printf("to confirm press y to go back press any key -----> ");
getchar();
scanf("%s",cc);
if(strcmp(cc,"y")==0)
{
    system("cls");
    printf("SEARCHING FOR A CONTACT\n");
    printf(".....................\n\n");
            printf("last name: ");
            scanf("%s", auxlastname);
            for(i=0;i<cnt;i++)
            {
       if(strcasecmp(info[i].lastname,auxlastname)==0)
       {
            printf("--------------\ncontact found \n--------------\nlast: %s\nfirst: %s\nadress: %s\nserial: %d\n------------------\n",info[i].lastname,info[i].firstname,info[i].adress,info[i].serial);
test1=1;

       }


            }
            if(test1!=1){
        printf("\n\t\t\tnot found !"); Sleep(1000);
        system("cls");
        return;
            }
       printf("\nfirst name: ");
            scanf("%s", auxfirstname);
            printf("enter serial : ");
            scanf("%d",&auxserial);
            printf("----------------\n");
            for(i=0;i<cnt;i++)
            {
       if(strcasecmp(info[i].firstname,auxfirstname)==0 && strcasecmp(info[i].lastname,auxlastname)==0 && info[i].serial==auxserial)
       {
            printf("contact found \n-------------\nlast: %s\nfirst: %s\nadress: %s\ncity: %s\nnumber: %s\n-----------------\n ",info[i].lastname,info[i].firstname,info[i].adress,info[i].city,info[i].phonenumber);
char dn[10];
printf("to dismiss press any key --> ");
getchar();
scanf("%s",dn);
if(dn!=".,/")
    system("cls");

test2=1;
break;

            }
            }
            if (test2==0)
                {
                printf("\n\t\t\tnot found !");Sleep(1000);
                mm=1;
                system("cls");
            return;
                }


}
else
{
    system("cls");
    return;
}
}

void sort()
{
    printf("to confirm press y to go back press any key -----> ");
//getchar();
scanf("%s",cc);
if(strcmp(cc,"y")==0)
    {
        system("cls");
    printf("printing ur enteries sorted\n");
    printf(".....................\n\n");



     char aux[200];

            int a;
            for(i=0;i<cnt;i++)
            {
                for (x=0;x<cnt;x++)

                    if(strcasecmp(info[x].lastname,info[i].lastname)==1)
                   {
                     strcpy(aux,info[i].lastname);
                     strcpy(info[i].lastname,info[x].lastname);
                     strcpy(info[x].lastname,aux);

                     strcpy(aux,info[i].firstname);
                     strcpy(info[i].firstname,info[x].firstname);
                     strcpy(info[x].firstname,aux);

                     strcpy(aux,info[i].adress);
                     strcpy(info[i].adress,info[x].adress);
                     strcpy(info[x].adress,aux);

                     strcpy(aux,info[i].city);
                     strcpy(info[i].city,info[x].city);
                     strcpy(info[x].city,aux);

                     strcpy(aux,info[i].phonenumber);
                     strcpy(info[i].phonenumber,info[x].phonenumber);
                     strcpy(info[x].phonenumber,aux);
                   }
                    else if(strcasecmp(info[x].lastname,info[i].lastname)==0)
                   {
                      if(strcasecmp(info[x].firstname,info[i].firstname)==1)
                      {
                          strcpy(aux,info[i].lastname);
                     strcpy(info[i].lastname,info[x].lastname);
                     strcpy(info[x].lastname,aux);

                     strcpy(aux,info[i].firstname);
                     strcpy(info[i].firstname,info[x].firstname);
                     strcpy(info[x].firstname,aux);

                     strcpy(aux,info[i].adress);
                     strcpy(info[i].adress,info[x].adress);
                     strcpy(info[x].adress,aux);

                     strcpy(aux,info[i].city);
                     strcpy(info[i].city,info[x].city);
                     strcpy(info[x].city,aux);

                     strcpy(aux,info[i].phonenumber);
                     strcpy(info[i].phonenumber,info[x].phonenumber);
                     strcpy(info[x].phonenumber,aux);
                      }
                      else if(strcasecmp(info[x].firstname,info[i].firstname)==0)
                      {
                          if(strcasecmp(info[x].phonenumber,info[i].phonenumber)==1)
                          {
                             strcpy(aux,info[i].lastname);
                     strcpy(info[i].lastname,info[x].lastname);
                     strcpy(info[x].lastname,aux);

                     strcpy(aux,info[i].firstname);
                     strcpy(info[i].firstname,info[x].firstname);
                     strcpy(info[x].firstname,aux);

                     strcpy(aux,info[i].adress);
                     strcpy(info[i].adress,info[x].adress);
                     strcpy(info[x].adress,aux);

                     strcpy(aux,info[i].city);
                     strcpy(info[i].city,info[x].city);
                     strcpy(info[x].city,aux);

                     strcpy(aux,info[i].phonenumber);
                     strcpy(info[i].phonenumber,info[x].phonenumber);
                     strcpy(info[x].phonenumber,aux);
                          }
                      }
                   }


            }
            printf("contacts sorted by last name\n--------------\n");
            for(i=0;i<cnt;i++)
    {
        printf("Last : %s\n First: %s\n Adress: %s\n City: %s\n Phone: %s\n-------------------\n ",info[i].lastname,info[i].firstname,info[i].adress,info[i].city,info[i].phonenumber);
    char dn[10];



    }
    char dn[10];
    printf("to dismiss press enter key --> ");
getchar();
scanf("%s",dn);
if(dn!=".,/")
    system("cls");

}
else
{
system("cls");
return ;
}
}

void deletee()
{
     int test2=0;
 int test1=0;
 int deleteserial;
   printf("to confirm press y to go back press any key -----> ");
getchar();
scanf("%s",cc);
if(strcmp(cc,"y")==0)
{
     system("cls");
    printf("DELETING A CONTACT\n");
    printf(".....................\n\n");

            printf("last name: ");
            scanf("%s", auxlastname);
            for(i=0;i<cnt;i++)
            {
       if(strcasecmp(info[i].lastname,auxlastname)==0 )
       {
            printf("--------------\ncontact found \n--------------\nlast: %s\nfirst: %s\nAdress: %s\nserial: %d\n------------------\n",info[i].lastname,info[i].firstname,info[i].adress,info[i].serial);
test1=1;

       }


            }
            if(test1!=1){
        printf("\n\t\t\tnot found!");Sleep(1000);
        system("cls");
        return;
            }
       printf("\nfirst name: ");
            scanf("%s", auxfirstname);
            printf("enter serial : ");
            scanf("%d",&deleteserial);
            printf("----------------\n");
            for(i=0;i<cnt;i++)
            {
       if(strcasecmp(info[i].firstname,auxfirstname)==0&& strcasecmp(info[i].lastname,auxlastname)==0 && deleteserial==info[i].serial)
       {
            printf("contact found \n-------------\nlast: %s\nfirst: %s\nadress: %s\ncity: %s\nnumber: %s\n-----------------\n ",info[i].lastname,info[i].firstname,info[i].adress,info[i].city,info[i].phonenumber);
test2=1;
break;

            }
            }
            if (test2==0)
                {
                printf("\n\t\t\tnot found!");Sleep(1000);
                mm=1;
                system("cls");
            return;
                }



//



         printf("\nenter the first and last name after checking the above contact to confirm deleting process\n");
    int x = 0;
   int i = 0;
   char deleteFirstName[20];
   char deleteLastName[20];


      printf("Last name: ");
      scanf("%s", deleteLastName);
      printf("\nFirst name: ");
      scanf("%s", deleteFirstName);
      printf("ENTER SERIAL : ");
      scanf("%d",&deleteserial);


      for (x = 0; x < cnt; x++)
      {
         if (strcasecmp(deleteFirstName, info[x].firstname) == 0)
         {
            if (strcasecmp(deleteLastName, info[x].lastname) == 0)
            {
                if(deleteserial==info[x].serial)
                for ( i = x; i < cnt ; i++ )
               {
                  strcpy(info[i].firstname, info[i+1].firstname);
                  strcpy(info[i].lastname, info[i+1].lastname);
                  strcpy(info[i].adress, info[i+1].adress);
                   strcpy(info[i].city, info[i+1].city);
                    strcpy(info[i].phonenumber, info[i+1].phonenumber);
               }
               printf("\n\t\tRecord deleted from the phonebook.\n\n");Sleep(1000);

               --cnt;
               system("cls");
               return;
            }
         }
      }

   printf("\n\t\tThat contact was not found, please try again.");Sleep(1000);
   system("cls");

return;
}
else
{
    system("cls");
    return;
}
}

void edit()
{

    int test2=0;
 int test1=0;
 int deleteserial;
    printf("to confirm press y to go back press any key -----> ");
getchar();
scanf("%s",cc);
if(strcmp(cc,"y")==0)
{
    system("cls");
    printf("EDITTING FOR A CONTACT\n");
    printf(".....................\n\n");
            printf("last name: ");
            scanf("%s", auxlastname);
            for(i=0;i<cnt;i++)
            {
       if(strcasecmp(info[i].lastname,auxlastname)==0)
       {
            printf("--------------\ncontact found \n--------------\nlast: %s\nfirst: %s\nadress: %s\nserial: %d\n------------------\n",info[i].lastname,info[i].firstname,info[i].adress,info[i].serial);
test1=1;

       }


            }
            if(test1!=1){
        printf("\n\t\t\tnot found !"); Sleep(1000);
        system("cls");
        return;
            }
       printf("\nfirst name: ");
            scanf("%s", auxfirstname);
            printf("enter serial : ");
            scanf("%d",&deleteserial);
            printf("----------------\n");
            for(i=0;i<cnt;i++)
            {
       if(strcasecmp(info[i].firstname,auxfirstname)==0 && strcasecmp(info[i].lastname,auxlastname)==0 && info[i].serial==deleteserial)
       {
            printf("contact found \n-------------\nlast: %s\nfirst: %s\nadress: %s\ncity: %s\nnumber: %s\n-----------------\n ",info[i].lastname,info[i].firstname,info[i].adress,info[i].city,info[i].phonenumber);


test2=1;
break;

            }
            }
            if (test2==0)
                {
                printf("\n\t\t\tnot found !");Sleep(1000);
                mm=1;
                system("cls");
            return;
                }


}
else
{
    system("cls");
    return;
}
int z=0;
char slct[10];
int f;
char l[10];
 printf("to confirm press any key--> ");
getchar();
gets(l);

        f=atoi(l);

while(l!=0)
{

    printf("\t\t1.to modify last name\n\t\t2.to modify first name\n\t\t3.to modify adress\n\t\t4.to modify city\n\t\t5.to modify phonenumber\n\t\tPress '0' to end modifying session\n\n\t\tyour choice -->");


scanf("%s",slct);
printf("\n");
if(strcmp(slct,"1")==0)
{
      printf("\nenter new last name : ");

      getchar();
    gets(info[i].lastname);
    printf("\n");
      }
   else   if(strcmp(slct,"2")==0)
    {
         printf("\nenter new first name : ");
    getchar();
    gets(info[i].firstname);
    printf("\n");
    }
   else if(strcmp(slct,"3")==0)
    {
       // printf("enter new adress : ");
//    getchar();
  //  scanf("%s",info[i].adress);
    //getchar();
    //getchar();
    //getchar();
     printf("enter adress : ");
    getchar();
    gets(info[i].adress);
    printf("\n");
    //getchar();
    }
 else  if(strcmp(slct,"4")==0)
    {

        printf("enter new city : ");

    getchar();
    gets(info[i].city);
    printf("\n");
    }
   else if(strcmp(slct,"5")==0)
    {
       printf("enter new phone number : ");
    scanf("%s",info[i].phonenumber);
    printf("\n");
    for(z=0;info[i].phonenumber[z]!='\0';z++)
    {
        if(info[i].phonenumber[z]>='0' && info[i].phonenumber[z] <= '9')
            flg=1;
            else
            {
                flg=0;
                break;
            }
    }
    while(flg==0)
    {
         printf("invalid-input\n");
         printf("please re-enter the phone number ----->");
         scanf("%s",info[i].phonenumber);
         for(z=0;info[i].phonenumber[z]!='\0';z++)
    {
        if(info[i].phonenumber[z]>='0' && info[i].phonenumber[z] <= '9')
            flg=1;
            else
            {
                flg=0;
                break;
            }
    }
    }
    }
     else if(strcmp(slct,"0")==0)
     {
         printf("\n\t\t\tediting session completed !");Sleep(1000);
         system("cls");
         return;
     }

   else
    {
        printf("invalid input \n");
        z--;
    }

}


}

int main()
{
    int q=1;
    system("color 7c");
    printf("please enter the name.type of file to be loaded or created --> ");

    gets(filenamee);

    my_file=fopen(filenamee,"r");
    if(my_file==NULL)
    {
        printf("file will be created");
        my_file=fopen(filenamee,"a+");
    }
if (my_file!=NULL){
    while(!(feof(my_file)))
    {
        fscanf(my_file,"%[^,],%[^,],%[^,],%[^,],%s",info[cnt].lastname,info[cnt].firstname,info[cnt].adress,info[cnt].city,info[cnt].phonenumber);
        fscanf(my_file,"\n");
        cnt++;
        info[cnt].serial=cnt;
    }
}
    for(i=0;i<cnt;i++)
    {
        printf("%s %s %s %s %s\n ",info[i].lastname,info[i].firstname,info[i].adress,info[i].city,info[i].phonenumber);
    }

fclose(my_file);


    while(x!=-1)
    {
        printf("\n\t\t\tPhonebook Menu");
        printf("\n\n\t(1)\tAdd Friend");
        printf("\n\t(2)\tDelete Friend");
        printf("\n\t(3)\tDisplay Phonebook Entries");
        printf("\n\t(4)\tSearch for Phone Number");
        printf("\n\t(5)\tedit a Friend");
        printf("\n\t(6)\tExit without save");
        printf("\n\t(7)\tExit Phonebook with save");
        printf("\n\nWhat would you like to do? ");
if(q!=1)
getchar();
q++;
        scanf("%s",iSelection);
        if(strcmp(iSelection,"1")==0)
        {


            addcontact();
            system("cls");
        }
       else if(strcmp(iSelection,"2")==0)
        {
            deletee();
        }
        else if(strcmp(iSelection,"3")==0)
        {
            scanf("%c",&tst);
            if(tst=='y');
           sort ();
        }
     else   if(strcmp(iSelection,"4")==0)
        {
              search();
        }
    else    if(strcmp(iSelection,"5")==0)
        {
            edit();
        }
    else    if(strcmp(iSelection,"6")==0)
        {
            system("pause");
            return 0;
        }
   else    if(strcmp(iSelection,"7")==0)
        {
            save();
            return 0;
        }

      else
            {printf("\n\t\t\twrong input");Sleep(1000);
            system("cls");
            }
    }
}
