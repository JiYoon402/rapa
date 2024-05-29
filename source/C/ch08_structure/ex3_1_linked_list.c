#include <stdio.h>

typedef struct list
{   int num;
    struct list* next;
}list;

void main(){
    list a={10,0},b={20,0},c={30,0};
    list* head=&a;
    list* current;
    list* tail;
    a.next=&b;
    b.next=&c;
    c.next=tail;

    printf("전체 데이터:");
    current=head;

    while(current!=tail){
        printf("%d\t",current->num);
        current=current->next;
    }

    

}
