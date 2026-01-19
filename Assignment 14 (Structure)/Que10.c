// 10. Product (id, name, quantity, price)

#include<stdio.h>
#include<string.h>
struct Product
{
  int id;
  char name[20];
  int quantity;
  double price;
};

void main()
{
  struct Product p1,p2;
  p1.id=10;
  strcpy(p1.name,"Ponds Powder");
  p1.quantity=10;
  p1.price=500;
  
  printf("ID:%d",p1.id);
  printf("\nName:%s",p1.name);
  printf("\nQuantity:%d",p1.quantity);
  printf("\nPrice:%d",p1.price);
  //Input from User
  printf("\nEnter product id:");
  scanf("%d",&p2.id);
  
  printf("Enter product Name:");
  scanf("%s",&p2.name);
  
  
  printf("Enter product quantity:");
  scanf("%d",&p2.quantity);
  
   printf("Enter product price:");
  scanf("%lf",&p2.price);
  
  //Display 
  printf("ID:%d",p2.id);
  printf("\nName:%s",p2.name);
  printf("\nQuantity:%d",p2.quantity);
  printf("\nPrice:%lf",p2.price);
}