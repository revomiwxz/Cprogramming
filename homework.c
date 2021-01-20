#include <stdio.h>
// ส่วนที่ 1 การดึง Library มาใช้
void main()
{   // ส่วนที่ 2 การสร้าง Funtion หลัก
    // ==========  ตัวแปร  ==========
    // เก็บข้อมูลนศ. StudentID,   Name  ,surname  ,age   ,username   ,email   , password, weight,  height
    //                 char[]     char[]   char[]    int     char[]    char[]      char[]    int     int
    char studentid[13],name[20], surname[20], username[20], email[25], password[20];
    int age, weight, height;
    // ==========  ตัวแปร  ==========
    // ==========  การรับข้อมูล  ==========
    printf("\nYour studentID is:");
    scanf("%s", &studentid);
    printf("Your name is:");
    scanf("%s", &name);
    printf("Your surname is:");
    scanf("%s", &surname);
    printf("Your age is:");
    scanf("%d", &age);
    printf("Your username is:");
    scanf("%s", &username);
    printf("Your email is:");
    scanf("%s", &email);
    printf("Your password is:");
    scanf("%s", &password);
    printf("Your weight is:");
    scanf("%d", &weight);
    printf("Your height is:");
    scanf("%d", &height);
    // ==========  การรับข้อมูล  ==========
    // ==========  การแสดงผลข้อมูล  ==========
    printf("\nSuccess \n"); 
    printf("Name: %s  %s \nAge: %d year old\nHeight: %d cm \nWeight: %d kg\nStudentID: %s \nEmail: %s\nUsername: %s\nPassword: %s\n"
    ,name,surname,age,height,weight,studentid,email,username,password);  
    // ==========  การแสดงผลข้อมูล  ==========
}