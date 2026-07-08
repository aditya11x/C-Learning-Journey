#include <stdio.h>
int main () {
    int Subject1, Subject2, Subject3, Subject4, Subject5, Roll;
    char Grade1, Grade2, Grade3, Grade4, Grade5 ;
    char   Name;
    
    printf("Enter Your Roll Number :  ");
    scanf("%d", &Roll);
    
    // Subject 1
    printf("Enter the Makrs of subject 1 : ");
    scanf("%d", &Subject1) ;
    
    
    
    if(Subject1 >= 90){
        Grade1 = 'A';
    }
    else if ((Subject1 >= 75) && (Subject1 < 90)){
        Grade1 = 'B';
    }
    else if((Subject1 >= 60) && (Subject1 < 75)){
        Grade1 = 'C';
    }
    else if((Subject1 >= 40) && (Subject1 < 60)){
        Grade1 = 'D';
    }
    else if (Subject1 >100) {
        printf("Error add marks properly.");
    }   
    
    else{
        Grade1 = 'F';
    }
    // Subject 2
    printf("Enter the Makrs of subject 2 : ");
    scanf("%d", &Subject2) ;

    
    
    if(Subject2 >= 90){
        Grade2 = 'A';
    }
    else if ((Subject2 >= 75) && (Subject2 < 90)){
        Grade2 = 'B';
    }
    else if((Subject2 >= 60) && (Subject2 < 75)){
        Grade2 = 'C';
    }
    else if((Subject2 >= 40) && (Subject2 < 60)){
        Grade2 = 'D';
    }
    else if (Subject2 >100) {
        printf("Error add marks properly.");
    }   
    else{
        Grade2 = 'F';
    }

    // Subject 3
    printf("Enter the Makrs of subject 3 : ");
    scanf("%d", &Subject3) ;
    
    
   
   
    
    if(Subject3 >= 90){
        Grade3 = 'A';
    }
    else if ((Subject3 >= 75) && (Subject3 < 90)){
        Grade3 = 'B';
    }
    else if((Subject3 >= 60) && (Subject3 < 75)){
        Grade3 = 'C';
    }
    else if((Subject3 >= 40) && (Subject3 < 60)){
        Grade3 = 'D';
    }
    else if (Subject3 >100) {
        printf("Error add marks properly.");
    }   
    else{
        Grade3 = 'F';
    }

    //  Subject 4
    printf("Enter the Makrs of subject 4 : ");
    scanf("%d", &Subject4) ;
    
    
    
    
    if(Subject4 >= 90){
        Grade4 = 'A';
    }
    else if ((Subject4 >= 75) && (Subject4 < 90)){
        Grade4 = 'B';
    }
    else if((Subject4 >= 60) && (Subject4 < 75)){
        Grade4 = 'C';
    }
    else if((Subject4 >= 40) && (Subject4 < 60)){
        Grade4 = 'D';
    }
    else if (Subject4 >100) {
        printf("Error add marks properly.");
    }   
    else{
        Grade4 = 'F';
    }

    // Subject 5
    printf("Enter the Makrs of subject 5 : ");
    scanf("%d", &Subject5) ;
    
    
    
    if(Subject5 >= 90){
        Grade5 = 'A';
    }
    else if ((Subject5 >= 75) && (Subject5 < 90)){
        Grade5 = 'B';
    }
    else if((Subject5 >= 60) && (Subject5 < 75)){
        Grade5 = 'C';
    }
    else if((Subject5 >= 40) && (Subject5 < 60)){
        Grade5 = 'D';
    }
    else if (Subject5 >100) {
        printf("Error add marks properly.");
    }   

    else{
        Grade5 = 'F';
    }
    printf("Result :    \n");
   
    printf("Roll Number :  %d \n", Roll);
    

    printf(" Subject      Grade       Marks\n");
    printf(" Subject1       %c         %d \n", Grade1, Subject1);
    printf(" Subject2       %c         %d \n", Grade2, Subject2);
    printf(" Subject3       %c         %d \n", Grade3, Subject3);
    printf(" Subject4       %c         %d \n", Grade4, Subject4);
    printf(" Subject5       %c         %d \n", Grade5, Subject5);  
    
    printf("Total Marks :    %d out off 500 \n", Subject1 + Subject2 + Subject3 + Subject4 + Subject5);
    printf(" Percentage : %f \n", (Subject1 + Subject2 + Subject3 + Subject4 + Subject5)/ 500.00*100 );

    return 0;

}