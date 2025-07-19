/* Learning how to use pointer to pass string list*/

#include <stdio.h>
#include <string.h>

void fortune_cookie(char msg[]){
    printf("Message reads: %s\n", msg);
    printf("msg occupies %zu bytes\n", strlen(msg));
}

int main(){
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return 0;
}