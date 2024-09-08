#include<stdio.h>

/*1。打印星星*/
void star(){
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
}
/*2。计算半径为r的球体的体积*/
void Globule_V(){
    float r=1;
    printf("请输入球体半径r:\n");
    scanf("%d",&r);
    printf("%f\n",4.0f/3.0f * 3.14f * r * r *r);
}


int main(){
    //star();
    Globule_V();
}

