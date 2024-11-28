#include<stdio.h>
void japan (){
    printf("iam in japan\n");
    return;
}

void england(){
    printf("i am in england\n");
    japan();
    return;
}

void australia(){
    printf("iam in austrialia\n");
    england();
    return;
}
void india (){
    printf("i am in india\n");
    australia();
    return;

}
int main (){
    india();
    return 0;
}