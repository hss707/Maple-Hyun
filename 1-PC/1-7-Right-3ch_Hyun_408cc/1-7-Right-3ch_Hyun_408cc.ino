// PAUSE_POINT() ==> 변경 _p_p()
#define _p_p() if ( check_stop() == false ) return;

//////////////////////////////////////////////////////////////////////////////////////////////////////
////  쿨타임키 입력 1-10 (1초=1000  10초=10000)
////  periodic_key1-10 = 0;       일 경우 사용안함
////  사용시 periodic_key1-10 = '?';      '?'; 에스킬키 소문자입력
//////////////////////////////////////////////////////////////////////////////////////////////////////

const char periodic_key1 = '2';           // 싸이킥차징 (45초)
unsigned long periodic_millis1;
unsigned long periodic_min1 = 190000;
unsigned long periodic_max1 = 220000;
unsigned long delay_1 = ( periodic_min1 + periodic_max1) / 2;

const char periodic_key2 = '1';           // 에버싸이킥 (120초) *싸이킥무브('d') 추가 이동 가능
unsigned long periodic_millis2;
unsigned long periodic_min2 = 260000;
unsigned long periodic_max2 = 300000;
unsigned long delay_2 = ( periodic_min2 + periodic_max2) / 2;

const char periodic_key3 = '3';          // 싸이킥오버 (180초)
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


//////////////////////////////////////////////////////////////////////////////////////////////////////
////  쿨타임키 입력 1-10 (1초=1000  10초=10000)
//////////////////////////////////////////////////////////////////////////////////////////////////////

volatile int macro_status = 0; // 0 : 일시정지, 1 : 구동중, 2 : 재시작

// default 4MB with SPIFFS (1.2MB / 1.5MB SPIFFS)
// Board : ESP-12H KIT Module

#include "kproject_hid_device.h"
#include "macro_set.h"
void setup()
{
  Serial.begin(115200);
  usb_hid_init();

  //  delay(10000);
  randomSeed(analogRead(A0));
  //pinMode(start, INPUT_PULLUP);
  //pinMode(power_on, INPUT_PULLUP);
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
      test1();
      break;
    case 1:
      test2();
      break;
    case 2:
      test3();
      break;
  }
}


void test2()
{
  // 2를 30회 출력
  for ( int i = 0; i < 30; i++)
  {
    if ( d_150() == false ) return;
    _p_p(); // 일시정지가 가능한 지점 설정
    Keyboard.print("2");
    _p_p(); // 일시정지가 가능한 지점 설정
  }
  if ( delay1(1000) == false ) return;
  _p_p(); // 일시정지가 가능한 지점 설정
}

void test3()
{
  // 3를 30회 출력
  for ( int i = 0; i < 30; i++)
  {
    if ( d_150() == false ) return;
    _p_p(); // 일시정지가 가능한 지점 설정
    Keyboard.print("3");
    _p_p(); // 일시정지가 가능한 지점 설정
  }
  if ( delay1(1000) == false ) return;
  _p_p(); // 일시정지가 가능한 지점 설정
}
