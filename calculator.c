#include <stdio.h>
int main()
{
float i,g,result;
printf("enter two numbers\n");
scanf("%f%f",&i,&g);
printf("1.addition\n2.substraction\n3.multiplication\n4.division\n");
int k;
scanf("%d",&k);
if(k==1){
result=i+g;
printf("%f\n",result);
}
else if(k==2){
result=i-g;
printf("%f\n",result);
}
else if(k==3){
result=i*g;
printf("%f\n",result);
}
else if(k==4){
result=i/g;
printf("%f\n",result);


}
else{
printf("ok bei\n");
}

}





