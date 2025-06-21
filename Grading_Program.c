#include <stdio.h>
// #include <math.h>
int main(){
    float marks, obtained_marks , total_marks; 
    char grade;
        printf("Enter Your obtained marks:\n");
        scanf("%f",&obtained_marks);
        printf("Enter Your total marks:\n");
        scanf("%f",&total_marks);
           if (obtained_marks > total_marks) {
           printf("Error: Total marks can't be less than obtained marks.\n");
        return 1;}
        if (total_marks == 0) {
        printf("Error: Total marks cannot be zero.\n");
        return 1;
        }
        marks = (obtained_marks/total_marks)*100;
        printf("Your Percentage is %.2f",marks);
        if(marks>= 90.0 && marks<= 100.0){
            grade ='A';
        }
        else if(marks>= 80.0 && marks< 90.0){
            grade ='B';
        }
        else if(marks>= 70.0 && marks< 80.0){
            grade ='C';
        }
        else if(marks>= 60.0 && marks< 70.0){
            grade ='D';
        }
        else if(marks>= 50.0 && marks< 60.0){
            grade ='E';
        }
        else if(marks>= 33.0 && marks< 50.0){
            grade ='U';
        }
        else{
            grade ='F';
        }
        printf("Your grade is %c.\n",grade);
    return 0;
}