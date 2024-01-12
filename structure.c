#include<stdio.h>
struct DOB
{
    int date,month,year;
    /* data */
};
struct address {
  int pincode;
  char add[200];
};

struct student_record {
    int rollno;
    char name[20];
    float marks;
    struct DOB dob;
    struct address add;
    
};
int main(){
    printf("enter the number of student you want to enter: \n");
    int n,i;
    scanf("%d",&n);
    struct student_record s[n];
    for( i=0;i<n;i++){
        printf("enter the detail of %d student: ",i+1);
        printf("enter the rollno of student: ");
        scanf("%d",&s[i].rollno);
        printf("enter the name: ");
        scanf("%s",&s[i].name);
        printf("enter the marks: ");
        scanf("%f",&s[i].marks);
        printf("enter the DOB: ");
        printf("enter the date: ");
        scanf("%d",&s[i].dob.date);
        printf("enter the month: ");
        scanf("%d",&s[i].dob.month);
        printf("enter teh year: ");
        scanf("%d",&s[i].dob.year);
        printf("enter the address: \n");
        printf("enter the pincode: ");
        scanf("%d",&s[i].add.pincode);
        fflush(stdin);
        printf("enter the address: ");
        scanf("%s",&s[i].add.add);
   
}
 
 printf("---------------------------------------------------------------------------------------------\n");
 printf("rollno |     name     |   marks   |    dob    |        pincode       |         address       |\n");
for(int i=0;i<n;i++){
   printf("%7d %14s %10f %4d%4d%4d  %15d  %13s ",s[i].rollno,s[i].name,s[i].marks,s[i].dob.date,s[i].dob.month,s[i].dob.year,s[i].add.pincode,s[i].add.add);
   printf("\n");
 printf("---------------------------------------------------------------------------------------------\n");
}
return 0;
}