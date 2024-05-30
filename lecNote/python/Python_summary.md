# Python 프로그래밍(2024.05.30 - 06.04)
### 0. 차례

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

### 1. 파이썬 개요 및 개발환경 구성
- 인터프리터 언어
 - 실행파일을 만들지 않고 소스코드를 한줄씩 시행
- 아나콘다-Jupyter Notebook
  #### 1.1 주피터 노트북 사용법
   - 새 파일 생성: New-Notebook-python3-File-Rename
   - `shift+Enter` : 포커스된 셀이 실행되고 다음셀로 이동
   - `alt+Enter`: 포커스된 셀이 실행되고 다음셀이 생성된 후 이동
   - `ctrl+Enter`: 포커스된 셀이 실행되고 포커스 이동 없음
   - `Enter=클릭`: 셀이 포커스됨(편집 상태)

   -  `<font color="red" size="10"><b> " "<b/></font>`: 영역 지정해서 색,폰트 크기 지정 가능
   - 전체 폰트 크기 조정
    ```
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
  - `#`: 주석
  - `ctr+/`: 범위 주석
  - `!`: cmd 명령어 사용 가능
  - 도움말: `help(함수)`, `함수?`
  - `del`:변수 삭제
 
  #### 1.2 ESC키 누르고 핫키
  - dd: 셀 삭제
  - a: 윗셀추가
  - b: 아랫셀 추가
  - m: 마크업셀로 전환
  - y: 코드셀로 전환
 
 - - -

 ### 2. 자료형과 연산자
 #### 2.1 변수
 

