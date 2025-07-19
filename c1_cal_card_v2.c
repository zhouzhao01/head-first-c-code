/* Chapter 1 Exercise Page 35
* 既然你已经知道了怎么创建while循环,请修改程序让它在游戏期间保持计数。
* 每发一张牌就显示一次计数,
* 如果玩家输入X就终止程序,
* 如果玩家输入了错误的值(如11或24)就显示错误消息
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char card_name[3];
    int count = 0;
    int terminating_flag = 0;
    do {
        puts("输入牌名：");
        scanf("%2s",card_name);
        int val = 0;
        switch (card_name[0])
        {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            terminating_flag = 1;
            break;
            // continue;
        default:
            val = atoi(card_name);
            break;
        }
        
        if ((val > 2) && (val <7)){
            count++;
        } else if (val == 10){
            count--;
        }

        if ((val < 1) || (val > 10)){
            printf("当前输入有误.\n");
        }

        printf("当前的计数:%i\n",count);

    
    } while (terminating_flag != 1);
    return 0;
    
}