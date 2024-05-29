#include <stdio.h>

 typedef struct Vision{
    double left;
    double right;
}vision;

//typeof sturct vision Vision;//struct vision의 닉네임 Vision
vision exchange(vision robot){
    double temp=robot.left;
    robot.left=robot.right;
    robot.right=temp;

    return robot;
}

void main(){
    vision robot;
    printf("좌 우 시력>>");
    scanf("%lf%lf",&robot.left,&robot.right);

    printf("입력된 좌: %lf\t우: %lf\n",robot.left,robot.right);
    robot=exchange(robot);
    printf("변경된 좌: %lf\t우: %lf\t",robot.left,robot.right);
}