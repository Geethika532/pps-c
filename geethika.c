#include<stdio.h>
#include<conio.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void main()
{
int value,choice;
while(1){
printf("\n\n*****MENU*****\n");
printf("1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\")}
