#define PAUSE_POINT() if ( check_stop() == false ) return;

/////////////////////////////////////////////////////////////////////////////////////
////  쿨타임키 입력
////  periodic_key1-10 = 0;       일 경우 사용안함
////   eriodic_key1-10 = '?';     사용시 '?'; 에스킬키 입력
////////////////////////////////////////////////////////////////////////////////////

const char periodic_key1 = 'c';   // 인피니티 쿨타임 200초-250초 랜덤 2022.11.13일 추가
unsigned long periodic_millis1;
unsigned long periodic_min1 = 200000;
unsigned long periodic_max1 = 250000;
unsigned long delay_1 = ( periodic_min1 + periodic_max1) / 2;

const char periodic_key2 = 0;
unsigned long periodic_millis2;
unsigned long periodic_min2 = 260000;
unsigned long periodic_max2 = 300000;
unsigned long delay_2 = ( periodic_min2 + periodic_max2) / 2;

const char periodic_key3 = 0; // 0일 경우 사용안함
unsigned long periodic_millis3;
unsigned long periodic_min3 = 31000;
unsigned long periodic_max3 = 35000;
unsigned long delay_3 = ( periodic_min3 + periodic_max3) / 2;

const char periodic_key4 = 0; // 0일 경우 사용안함
unsigned long periodic_millis4;
unsigned long periodic_min4 = 46000;
unsigned long periodic_max4 = 50000;
unsigned long delay_4 = ( periodic_min4 + periodic_max4) / 2;

const char periodic_key5 = 0; // 0일 경우 사용안함
unsigned long periodic_millis5;
unsigned long periodic_min5 = 45000;
unsigned long periodic_max5 = 50000;
unsigned long delay_5 = ( periodic_min5 + periodic_max5) / 2;

const char periodic_key6 = 0; // 0일 경우 사용안함
unsigned long periodic_millis6;
unsigned long periodic_min6 = 260000;
unsigned long periodic_max6 = 280000;
unsigned long delay_6 = ( periodic_min6 + periodic_max6) / 2;

const char periodic_key7 = 0; // 0일 경우 사용안함
unsigned long periodic_millis7;
unsigned long periodic_min7 = 260000;
unsigned long periodic_max7 = 280000;
unsigned long delay_7 = ( periodic_min7 + periodic_max7) / 2;

const char periodic_key8 = 0; // 0일 경우 사용안함
unsigned long periodic_millis8;
unsigned long periodic_min8 = 260000;
unsigned long periodic_max8 = 280000;
unsigned long delay_8 = ( periodic_min8 + periodic_max8) / 2;

const char periodic_key9 = 0; // 0일 경우 사용안함
unsigned long periodic_millis9;
unsigned long periodic_min9 = 260000;
unsigned long periodic_max9 = 280000;
unsigned long delay_9 = ( periodic_min9 + periodic_max9) / 2;

const char periodic_key10 = 0; // 0일 경우 사용안함
unsigned long periodic_millis10;
unsigned long periodic_min10 = 260000;
unsigned long periodic_max10 = 280000;
unsigned long delay_10 = ( periodic_min10 + periodic_max10) / 2;

////////////////////////////// ////////////////////////////// ////////////////////////////// ////////////////////////////// 

// default 4MB with SPIFFS (1.2MB / 1.5MB SPIFFS)
// Board : ESP-12H KIT Module

volatile int macro_status = 0; // 0 : 일시정지, 1 : 구동중, 2 : 재시작

#include "kproject_hid_device.h"
#include "macro_set.h"
#include "random.h"


///// 매크로 기본  랜덤값 및 키 정의 /////

int acheck = 1;
int archeck = 1;
int anum = 0;            // 공격함수
int jnum = 0;             // 점프함수
int jjnum = 0;            // 점프함수2
int area = 0;             // 범위기함수
int ordernum = 0;       // 오더함수


int arr[7] = {keys.lshift, keys.rshift, keys.lctrl, 'm', 'n', ',', '.'};       // 주력기배치
int at[2] = {keys.lalt, keys.ralt};           // 1단점프
int jp[3] = {keys.lalt, keys.ralt, 'v'};        // 2단점프

//////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////      스킬 키 입력         ////////////////////////

char const  s_key01 = keys.end;       //      End();  S1()  테리토리
char const  s_key02 = 'q';        //      Q();  S2()  트레드
char const  s_key03 = 'd';        //      D();  S3()  임페일
char const  s_key04 = 'f';        //      FF(); S4()  레조넌스
char const  s_key05 = 'a';        //      A();  S5()  오더
char const  s_key06 = 'r';        //      R();  S6()  루인
char const  s_key07 = 'g';        //      G();  S7()  마커
char const  s_key08 = 'z';        //      Z();  S8()  페더
char const  s_key09 = 't';        //      T();  S9()  게더링
char const  s_key10 = '4';        //      k_4();  S10() 블로섬
char const  s_key11 = '5';        //      k_5();  S11() 스톰
char const  s_key12 = 'c';        //      C();  S12() 인피니티
char const  s_key13 = 'x';        //      X();  S13() 리스토어
char const  s_key14 = '3';        //      k_3();  S14() 스인미
char const  s_key15 = 's';        //      S();  S15() 로프
char const  s_key16 = 'd';        //      D();  S16() 에르다 파운틴

//////////////////////////////////////////////////////////////////////////////////////////////

void setup()
{
  Serial.begin(115200);
  usb_hid_init();
  randomSeed(analogRead(A0));
  Keyboard.releaseAll();

  echo_flag = true;
}

void loop()
{
  Serial.println("STARTED");
  if ( macro_status == 2 )
    // 재시작한 것이므로 매크로 재시작 을 구동중으로 변경
  {
    macro_status = 1;
  }

  int no = random(0, 1);
  Serial.println(no);
  switch (no)
  {
    case 0:
      arcana_water_son_1();
      break;
    case 1:
      test2();
      break;
    case 2:
      test3();
      break;
  }
}
/*
  PAUSE_POINT();
*/
void test1() {
  anum = random(0, 7);
  jnum = random(0, 2);
  jjnum = random(0, 3);
    
  PAUSE_POINT();
  
  Reset();
}


void test2()
{
  // 2를 30회 출력
  for ( int i = 0; i < 30; i++)
  {
    if ( d_val(150) == false ) return;
    PAUSE_POINT(); // 일시정지가 가능한 지점 설정
    Keyboard.print("2");
    PAUSE_POINT(); // 일시정지가 가능한 지점 설정
  }
  if ( delay1(1000) == false ) return;
  PAUSE_POINT(); // 일시정지가 가능한 지점 설정
}

void test3()
{
  // 3를 30회 출력
  for ( int i = 0; i < 30; i++)
  {
    if ( d_val(150) == false ) return;
    PAUSE_POINT(); // 일시정지가 가능한 지점 설정
    Keyboard.print("3");
    PAUSE_POINT(); // 일시정지가 가능한 지점 설정
  }
  if ( delay1(1000) == false ) return;
  PAUSE_POINT(); // 일시정지가 가능한 지점 설정
}
