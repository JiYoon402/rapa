#include <stdio.h>

 typedef struct Vision{
    double left;
    double right;
}vision;

//typeof sturct vision Vision;//struct vision�� �г��� Vision
vision exchange(vision robot){
    double temp=robot.left;
    robot.left=robot.right;
    robot.right=temp;

    return robot;
}

void main(){
    vision robot;
    printf("�� �� �÷�>>");
    scanf("%lf%lf",&robot.left,&robot.right);

    printf("�Էµ� ��: %lf\t��: %lf\n",robot.left,robot.right);
    robot=exchange(robot);
    printf("����� ��: %lf\t��: %lf\t",robot.left,robot.right);
}