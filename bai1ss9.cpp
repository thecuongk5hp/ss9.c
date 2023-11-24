#include <stdlib.h>
#include <stdio.h>
int main(){
	int i,n,j,choice,sum=0,find_number,a=0,flag,min,max,add_value,add_index;
  do {
    printf("*******************MENU*******************\n");
    printf("1. nhap so phan tu va cac gia tri can nhap\n");
    printf("2. in ra cac phan tu dang luu \n");
    printf("3. in ra cac phan tu chan va tinh tong\n");
    printf("4. in ra gia tri lon nhat va nho nhat trong mang\n");
    printf("5. in ra phan tu so nguyen to va tinh tong\n");
    printf("6. nhap 1 so va thong ke xem co bao nhieu phan tu nhu vay\n"); 
    printf("7. them 1 phan tu vao vi tri\n"); 
    printf("8. thoat\n");
    printf("Lua chon cua ban:");
    scanf("%d",&choice);
    int numbers[100000];
    switch(choice) {
    case 1:
    printf("nhap so luong phan tu");
    scanf("%d",&n);
     numbers[n];
    for ( i = 0; i < n; i++) {
      printf("numbers[%d]=",i);
      scanf("%d", &numbers[i]);
    }
    break;
    case 2:
    printf("Gia tri cac phan tu trong mang:\n");
    for ( i= 0; i < n; i++){ 
    printf("%d\n", numbers[i]);  
	}
 break;
	case 3:
 printf("Gia tri cac phan tu chan trong mang:\n");
    for (i= 0; i < n; i++){ 
    if(numbers[i]%2==0){
      printf("%d\n", numbers[i]);
      sum+=numbers[i];
	}
}
	printf("tong cac phan tu chan la:%d\n",sum);
	 break;
	case 4:		
	max=numbers[0];
  	for(i=1;i<n;i++){
 	 max=(max>numbers[i])?max:numbers[i];
 	 }
  	min=numbers[0];
 	 for(i=1;i<n;i++){
 	 min=(min<numbers[i])?min:numbers[i];
  	}
 	 printf("so max va min la:%d va %d\n",max,min);
 	 break;
	case 5:
     printf("Gia tri cac phan tu so nguyen to trong mang:\n");
    for (i= 0; i < n; i++){ 
    flag=0;
    for(j=2;j<numbers[i];j++){
    if(numbers[i]%j==0){
    flag=1;
    break;
	}
	}
	if(flag==0){
      printf("%d\n",numbers[i]);
     a+=numbers[i];
	}
	}
	printf("tong cac phan tu so nguyen to la:%d\n",a);
	 break;
	case 6:
	printf("nhap find_number:");
	 scanf("%d",&find_number);
	printf("chi so cua cac phan tu bang find_number la:\n ");
	for (i=0;i<n;i++) {
		if (numbers[i] == find_number) {
		  printf("numbers[%d]=%d\n ",i,numbers[i]);
	    }
	}
	break;
	case 7:
printf("nhap so can chen va vi tri chen");
	 scanf("%d %d",&add_value, &add_index);
	for (i=0;i<n;i++){
		if (i==add_index){
		numbers[i] = add_value;
		break; 
	}
}
	for (i=0;i<n;i++) {
	printf("%d\n",numbers[i]);
}
	break;
	 case 8:
	exit(0);
     default:
     printf("Vui long chon tu 1-8\n");
    }
   }while ("Vui long chon tu 1-8\n");
}
