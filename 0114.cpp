#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int d,f,g;

printf("�п�J�T���ΤT�䪺�ƭ�\n");
printf("d="); scanf("%d",&d);
printf("f="); scanf("%d",&f);
printf("g="); scanf("%d",&g);


if( (d+f) <= g ){
printf("���i�򦨤@�ӤT���ΡC"); 
}
else if( (d+g) <= f && (f>>d>>g || f>>g>>d)){
printf("�i�򦨤@�ӤT���ΡC"); 
}
else if( (f+g) <= d ){
printf("���i�򦨤@�ӤT���ΡC"); 
}	
else{
printf("�i�򦨤@�ӤT���ΡC");
} 
printf("\n");

system("PAUSE");
return 0;
}
