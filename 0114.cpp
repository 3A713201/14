#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int d,f,g;

printf("請輸入三角形三邊的數值\n");
printf("d="); scanf("%d",&d);
printf("f="); scanf("%d",&f);
printf("g="); scanf("%d",&g);


if( (d+f) <= g ){
printf("不可圍成一個三角形。"); 
}
else if( (d+g) <= f && (f>>d>>g || f>>g>>d)){
printf("可圍成一個三角形。"); 
}
else if( (f+g) <= d ){
printf("不可圍成一個三角形。"); 
}	
else{
printf("可圍成一個三角形。");
} 
printf("\n");

system("PAUSE");
return 0;
}
