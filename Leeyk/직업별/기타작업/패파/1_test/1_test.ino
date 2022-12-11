#define PAUSE_POINT() if ( check_stop() == false ) return;

/////////////////////////////////////////////////////////////////////////////////////
////  쿨타임키 입력
////  periodic_key1-10 = 0;       일 경우 사용안함
////  eriodic_key1-10 = '?';     사용시 '?'; 에스킬키 입력
////////////////////////////////////////////////////////////////////////////////////

const char periodic_key1 = keys.Delete;   // 레이븐
unsigned long periodic_millis1;
unsigned long periodic_min1 = 220000;
unsigned long periodic_max1 = 230000;
unsigned long delay_1 = ( periodic_min1 + periodic_max1) / 2;

const char periodic_key2 = keys.pgdn;  // 레이븐 템페스트
unsigned long periodic_millis2;
unsigned long periodic_min2 = 120000;
unsigned long periodic_max2 = 160000;
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
boolean state = true;
int t = 150;
int n = 6;
int acheck = 1;
int archeck = 1;
int anum = 0;            // 공격함수
int jnum = 0;             // 점프함수
int area = 0;             // 범위기함수
boolean isRihgt = true;

int arr[6] = {keys.lshift, keys.lctrl, 'z', 'x', 'c', 'v'};       // 주력기배치
int at[2] = {keys.lalt, keys.ralt};           // 1단점프

//////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////      스킬 키 입력         ////////////////////////

char const  s_key01 = 'q';       //                  S1 :  레조넌스(중요)
char const  s_key02 = 'w';        //                 S2 :  트리플 임팩트
char const  s_key03 = 'e';        //                 S3 :  콤보 어썰트(중요)
char const  s_key04 = 'r';        //                  S4 :  스플릿 미스텔
char const  s_key05 = keys.Delete;     //      S5 :  레이븐(소환)
char const  s_key06 = keys.end;         //      S6 :  얼티밋 블래스트(한방)
char const  s_key07 = keys.pdgn;       //      S7 :  레이븐 템페스트(폭풍)
char const  s_key08 = 'a';        //                 S8 :  카디널 트랜지션(이동기)
char const  s_key09 = 's';        //                 S9 :  로프
char const  s_key10 = 'd';        //                 S10 : 에프다 파운틴
char const  s_key11 = 'f';        //                  S11 : 렐릭 충전
char const  s_key12 = keys.1;        //          S12() 인피니티
char const  s_key13 = keys.2;         //         S13() 리스토어
char const  s_key14 = keys.3;        //          S14() 스인미
char const  s_key15 = keys.4;        //          S15() 로프
char const  s_key16 = keys.5;        //          S16() 에르다 파운틴

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
      moonbridge_angae_1();
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
  anum = random(0, 6);
  jnum = random(0, 2);
    
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
