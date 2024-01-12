#include<stdio.h>
#include<conio.h>
struct DOB
{
    int date;
    int month;
    int year;
};
 struct address
 {
    int pincode;
    char add[100];
 };
 
struct srecord
{
    int rollno;
    char name[20];
    float marks;
    struct  DOB dob;
    struct  address add;
    
};
int menu(){
    int choice;
    printf("enter the operation you want to perform: \n");
    printf("1.for add record: \n");
    printf("2.remove record: \n");
    printf("3..display paritcular record: \n");
    printf("4.display all record: \n");
    scanf("%d",&choice);
    return choice;
}
void addrecord(struct srecord s[],int i){
      printf("enter the rollno");
      scanf("%d",&s[i].rollno);
      printf("enter the name:");
      scanf("%s",&s[i].name);
      printf("enter the marks: ");
      scanf("%f",&s[i].marks);
      printf("enter the DOB: ");
      printf("enter the date: ");
      scanf("%d",&s[i].dob.date);
      printf("enter the month: ");
      scanf("%d",&s[i].dob.month);
      printf("enter the year: ");
      scanf("%d",&s[i].dob.year);

}
void removerecord(struct srecord s[],int r){
      if(s[0].rollno==-1)
      printf("please add record then apply operation: \n");
      else
          s[r].rollno=-1;
}
void displayrecord(struct srecord s[],int d){
    if(s[d].rollno==-1){
        printf("data not exits: ");
    }
    else {
    printf("rollno is: %d\n",s[d].rollno);
    printf("name is: %s\n",s[d].name);
    printf("marks is:%f\n",s[d].marks);
    printf("dob is: \n");
    printf("date is: %d\n",s[d].dob.date);
    printf("month is: %d\n",s[d].dob.month);
    printf("year is: %d\n",s[d].dob.year);
    }
    printf("\n\n\n");
    
}
void displayallrecord(struct srecord s[],int i){
    for(int n=0;n<i;n++){
        displayrecord(s,n);
        printf("\n");
    }
}
void setarrayvalue(struct srecord s[],int n){
  for(int i=0;i<n;i++){
    s[i].rollno=-1;
  }
}
int main(){

    int n;
    printf("enter the number of student you want to enter: ");
    scanf("%d",&n);
    struct srecord s[n];
    int i=0;
    setarrayvalue(s,n);
    while (1)
    {
      switch (menu())
      {
      case 1:
      {
      addrecord(s,i);
      i++;
        break;
      }
      case 2:{
        int r;
        printf("enter the student s.no to delete: ");
        scanf("%d",&r);

      removerecord(s,r-1);
      break;
      }
      case 3:
      {
        printf("enter the student s.no to display: ");
        int d;
        scanf("%d",&d);
        displayrecord(s,d-1);
        break;
      }
      case 4:
      {

        displayallrecord(s,i);
        break;
      }
      
      default:
      {
        printf("invalid input plaease check: \n");
        break;
      }
      }
    }
    
    

    return 0;
}