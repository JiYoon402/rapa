# Python 프로그래밍(2024.05.30 - 06.04)
## 0. 차례

>1. 파이썬 개요 및 개발환경 구성
>2. 자료형과 연산자(내용이 제일 많음)
>3. 데이터 구조
>4. 제어문(조건문, 반복문)
>5. 함수
>6. 모듈과 패키지
>7. 객체지향 프로그래밍
>8. 예외처리
>9. 파일 입출력 프로그래밍
>10. 데이터프레임과 시리즈(Pandas 라이브러리)
>11. 데이터 시각화
ex. 신규 아파트 분양가 동향 분석
>12. 웹데이터수집
ex. yes24 베스트셀러 가져오기   

## 1. 파이썬 개요 및 개발환경 구성
- 인터프리터 언어
- 실행파일을 만들지 않고 소스코드를 한줄씩 시행
- 아나콘다-Jupyter Notebook

### 1.1 주피터 노트북 사용법
  - 새 파일 생성: New-Notebook-python3-File-Rename   
  - `shift+Enter` : 포커스된 셀이 실행되고 다음셀로 이동   
  - `alt+Enter`: 포커스된 셀이 실행되고 다음셀이 생성된 후 이동
  - `#`: 주석
  - `ctr+/`: 범위 주석
  - `!`: cmd 명령어 사용 가능
  - 도움말: `help(함수)`, `함수?`
  -  `<font color="red" size="10"><b> " "<b/></font>`: 영역 지정해서 색,폰트 크기 지정 가능   
  -  전체 폰트 크기 조정   
     ```python
       from IPython.display import display, HTML
       display(HTML("""
       <style>
       div.jp-WindowedPanel-outer.lm-Widget{padding:5px;}
       div.lm-Widget{width:100%;font-size:15pt;}
       div.cm-content {font-family:Consolas; font-size:15pt;}
       div.jp-OutputArea-output pre {font-size:15pt; font-weight:bold;}
       input.jp-Stdin-input {font-family:Consolas; font-size:15pt;}
       </style>
       """))
     ```      


  ### 1.2 ESC키 누르고 핫키
  - dd: 셀 삭제
  - a: 윗셀추가
  - b: 아랫셀 추가
  - m: 마크업셀로 전환
  - y: 코드셀로 전환
 <br/>
 
  - - -
 <br/>
 
 ## 2. 자료형과 연산자
   ### 2.1 변수
   #### 2.1.1 변수 선언 및 할당   

```python
  a=10 # 자료형 안써도 됨   
  a,b=10,20 # 다중 선언 가능   
```   
    
 #### 2.2.2 도움말   
```python
  help(print)
  print?
  print() # shift+tab
```   
 #### 2.2.3 변수 관련 함수
  - `type()`:자료형
  - `id()`:주소
  - `del`: 변수 삭제
  - `isinstance(변수,자료형))`: 변수가 자료형의 객체인지 판단
 <br/>   

### 2.2 화면 I/O
#### 2.2.1 Input
- `var=input('표시 문자열')`
- +로 연결 가능 ex) input(a+'str')
#### 2.2.2 Output
 - `print( arg, sep=' ', end='\n')` # sep, end는 default 값 존재
 - `{[인덱스]:[공백대체문자][정렬방법][자릿수][타입]}".format(변수명,...)`
 - format은 print()내부에서만 사용 가능
  
  ```python
    a,b=1,2
    print('a:',a)
    print('a",a,"b",b.format(a,b),sep='-')
    print('a: {} b: {}'.format(a,b))
    print('a: {1} b: {0}'.format(b,a))
  ```
   
  >a: 1   
  >a-1-b-2   
  >a: 1 b: 2   
  >a: 1 b: 2
 <br/>
    
### 2.3 자료형    
#### 2.3.1 숫자형
  - int, float
  - int/int=float
  - e로 지수 표현

    
#### 2.3.2 문자형   
  - `text[from:to:step]`: 문자열 slicing
  - `text[-1]` : 음수 index는 뒤에서부터
  - `text[::-1]` : 음수 step은 역순
   
   ```python
    text="""string
    줄변경가능
    """
   ```
      
  > string   
  > 줄변경가능
 <br/>
    
### 2.4 문자열
- 문자열 관련 함수
  - `len(str)`: 문자 갯수
  - `.upper()`: 대문자로
  - `.lower()`: 소문자로
  - `.title()`: 각 단어의 앞글자만 대문자로
  - `.capitalize()`:첫 문자만 대문자
  - `.count(str)`: str의 갯수 반환
  - `.find(str)`: str의 왽쪽부터의 index 반환 (rfind:오른쪽부터)
  - `.startswith(str)`: str 시작하는지 여부 T/F 반환 (cf endswith)
  - `.strip()`: 좌우 공백 제거 (lstrip(), rstrip(): l/r 공백만 제거)
  - `.replace(oldStr,newStr)`: oldStr을 newStr로 변경
  - `.split()`: space 단위로 분리하여 list로 반환,('-')단위 설정 가능
 <br/>
   
### 2.5 날짜   
  
  ```python   
    from datetime import datetime   
    now=datetime.today()   
    print("{:%Y년 %m월 %d일 %H시 %M분}".format(now))   
  ```
   > 2024년 05월 30일 12시 48분
 <br/>
 
  - - -
 <br/>   
 
## 3. 데이터 구조
### 3.1 list[]
#### 3.1.1 list 조회
  - `list(range(from,to,step))`: from~to-1의 list생성
  - `list[1]=str`으로 수정
  - list 접근
    ```python
    fruits=['apple','mango''banana']
    for fruit in fruits:
      print(fruit)
    
    for idx, value in enumerate(fruits):#enumerate: i,list[i] 반환
      print(idx, value)
    ```
    > apple   
    > mango   
    > banana   
    > 0 apple   
    > 1 mango   
    > 3 banana
  - `len(list)`: 요소의 수
  - `min(list)` `max(list)`: 최소값,최대값
  - `list()`: list로 형변환 가능
     
#### 3.1.2 list 요소 추가
- `list*n`: n만큼 반복
- `.append(a)`: a를 list에 추가
- `.extend(a)`: a의 요소 별로 list에 추가
  ```python
   numbers=[1,2,3,4]
   numbers.append('hello')
   numbers.extend('hello')
  ```
  > [1, 2, 3, 4, 'hello']
  > [1, 2, 3, 4, 'h', 'e', 'l', 'l', 'o']
     
#### 3.1.3 list 삭제
- `.remove(data)`: 해당 data 제거
- `del list[i]`: i요소 제거
- `pop()`: 가장 마지막 요소가 return되고 삭
   
#### 3.1.4 indexing
- `index(val, 1)`: val을 1번 인덱스부터 찾아 그 위치를 반환
- `count(val)`: val의 갯수 count
   
#### 3.1.5 원하는 내용만 추출
  - slicing: `list[from:to:step]`
  - comprehension: `list=[val for val in numbers if (조건)]`

#### 3.1.6 list 복제
- `list.copy()`: 주소 말고 요소 복제(깊은 복사)

     <br/>   
### 3.2 tuple()
  - 수정 안됨
  - 요소가 하나인 tuple은 뒤에 ','필수
  - `'~'.join(tuple)`: 요소 사이를 ~로 연결해서 문자열 반환

   <br/>   

### 3.3 dictionary{ key : value }
  - key 중복 불가, value 중복 가능
  - index를 이용한 참조 불가(key로 참조)
  - `dic['key']`: value 반환, key 없을시 error
  - `dic.get('key')`: value 반환, key 없을시 None 반환
  - 추가: `dic[newKey]=newValue`
  - 제거: `dic.pop(key)`
  - 출력: `dic.keys()` `dic.values()` `dic.items()`
  - `in dic`: key를 나타냄

   <br/>   

### 3.4 set{}
  - 중복 허용 X
  - 순서 없음 -> index 없음
  - 추가: `set.add(val)`
 <br/>
 
  - - -
 <br/>  
 
## 4. 제어문
### 4.1 if
```python
if 조건:
  문장1
elif 조건:
  문장
else:
  문장
```
- 다수의 조건 작성시 ( )필수! ex. (조건)&(조건) 
<br/>

### 4.2 for-in
```python
for 변수 in 나열이가능한자료형:
    반복할 문장1
    반복할 문장2
    break;
else: #break를 수행시 else 수행 안함
    변수에 값이 할당되지 않은 경우 시행할 문장(선택사항)
```
<br/>

### 4.3 while
```python
while 조건:
    반복문장1
    반복문장2
else: # while문 내 break를 통해 빠져나올때는 수행X
    조건이 거짓일 경우 한번 수행할 문장(선택사항)
```
 <br/>
 
  - - -
 <br/>  
 
## 5. 함수
### 5.1 함수의 정의 및 사용
```python
def 함수명(순서>튜플(*)>키워드> 딕셔너리(**)):
"함수 설명"
    명령어
    return #여러개의 값 반환 가능(튜플 형태)
```
- `import 함수`: 파일로 저장 후 로드하여 사용 가능
- `global var`: 지역변수->전역변수 수정
-  call by value: 인수가 스칼라(숫자, 문자 논리)일 경우 함수 내에서 주소 바뀜
-  call by reference: 인수가 list,dictionary, set일 경우 함수 내에서 주소 유지

### 5.2 람다
- `lambda 변수: return값`
- `map(lambda var:func,data[])`: func(data)의 list
- `fiter(lamda var:조건,data[])`: 조건을 만족하는 data list
 <br/>
 
  - - -
 <br/>  
 
## 6. 모듈과 패키지
### 6.1 설치
- "pip install 라이브러리명"
- "conda install 라이브러리명"

### 6.2 import
```python
import A #A모듈을 가져옴
import A as B #A모듈을 B이름으로 가져옴
from A import B #A모듈 안의 B함수 가져옴
from A import B as C #A모듈 안의 B함수를 C이름으로 가져옴
from A.B import C #A패키지 안의 B모듈의 C함수를 가져옴
from A.B import C as D #A패키지 안의 B모듈의 C함수를 D이름으로 가져옴
```
 <br/>   
 
  - - -
 <br/>  
 
## 7. 객체지향 프로그래밍
### 7.1 객체와 클래스
  ```python
  class Class_Name1(상속받을 클래스명):
    def __init__(self,arg1,arg2):#초기화
        self.arg1=arg1
        self.arg2=arg2
    def 함수(self): #함수 정의
        문장
    def __str__(self): #p1호출시 p1.__str__호출됨 => 원하는 출력 문자열로 설정
        return "출력문장 {},{}".format(self.arg1,self.arg2)
  ```
 - `c1=Class('a','b')`   
 - `print(c1)` : 출력문장 a, b
   
### 7.2 클래스 상속
  ```python
  class Class_Name2(Class_Name1):
      def __init__(self,arg1,arg2,arg3):
        super().__init__(arg1,arg2) #class1의 __init__함수에서 arg1,arg2상속
        self.arg3=arg3 # 새로운 인수 초기화
  ```
      




