# C프로그래밍 (2024.05.27 - 05.29)
### **0. 차례**
>1) 환경설정(vs - vs code)
>2) 변수(int, long long, double, char, char*)   
>3) 연산자(산술%, 증간, 삼항, 논리, 비트, 할당)   
    반복문(for, while, do~while)
>4) 조건문(if, switch)
>5) 함수(call by value vs call by reference)
>6) 배열: 동일 자료형의 집합
>7) 포인터: 변수의 주소값(reference)을 갖는 변수 `int*ptr=&a;`  
    ?? : pointer is a value that contains address!
>   
>9) 구조체: 여러 자료형의 집합을 단일 타입으로 다루기   
<br/>


### **1. VScode 초기화**
- 한글 완성형:EUC-KR
- 한글 조합형:UTF-8
- code runner 사용시 ctrl+alt+N으로 실행 (저장 후!)
<br/>

### **2. 난수 발생**
- <time.h>:초기화용   
 `srand((unsigned int)time(NULL));`
<br/>

### **3. 문자열 입력**
- `scanf()`: white space가 오면 그 이전의 버퍼 내용을 return 
    (단, 처음나오는 white space는 무시)
- `gets()`: \n 이전까지만 인식하고 그뒤는 지움
- `scanf(a)gets(b)` 혼합해서 사용시 a의 버퍼\n이 남아있으므로 제거용 `gets()` 사용
- _`gets()`사용할 때는 버퍼 고려해서 사용!_
 <br/> 

### **4. 문자열 복사**
- `char* str2=str1;`
-> 얕은 복사: str1의 문자열 변경시 str2의 문자열은 변경되지 않음! (문자열만 이 특성을 가지고 있음)
- `strcpy(dest,src)`
-> 깊은 복사
<br/>  

### **5. 포인터로 배열에 접근하기**   
```C
int arr[3]={10,20,30};
int *ptr=arr;
```  

 > arr[0]=10       ptr[0]=10       *(ptr+0)=10   
 > arr[1]=20       ptr[1]=20       *(ptr+1)=20   
 > arr[2]=30       ptr[2]=30       *(ptr+2)=30   

- *sizeof(int)* 이 아닌 +1을 해도 원래 *arr* 의 자료형인 *int* 의 크기만큼 증가
<br/>

### 6. 구조체

```C
typedef struct student{ //구조체 정의
    int num;    //학번(student 구조체 member)
    double grade;//학점

}student;//별명
```
- member에 접근시 `student.num`
- pointer member에 접근시 `student->num`
       
