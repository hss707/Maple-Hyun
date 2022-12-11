int acheck = 1;
int archeck = 1;
int anum = 0;            // 공격함수
int jnum = 0;             // 점프함수
int jjnum = 0;            // 점프함수2
int area = 0;             // 범위기함수
int ordernum = 0;       // 오더함수


struct KEYSET {
  int up = 0xDA;
  int down = 0xD9;
  int left = 0xD8;
  int right = 0xD7;     // 방향키
  int lalt = 0x82;
  int ralt = 0x86;        // 점프
  int lctrl = 0x80;
  int rctrl = 0x84;        // 컨트롤
  int lshift = 0x81;
  int rshift = 0x85;        // 쉬프트
  int space = 0xB2;
  int insert = 0xD1;
  int pgdn = 0xD6;
  int pgup = 0xD3;
  int home = 0xD2;
  int Delete = 0xD4;
  int end = 0xD5;
  int backspace = 0xB2;
  int capslock = 0xC1;
  int tab = 0xB3;
  int f1 = 0xC2;
  int f2 = 0xC3;
  int f3 = 0xC4;
  int f4 = 0xC5;
  int f5 = 0xC6;
  int f6 = 0xC7;
  int f7 = 0xC8;
  int f8 = 0xC9;
  int f9 = 0xCA;
  int f10 = 0xCB;
  int f11 = 0xCC;
  int f12 = 0xCD;
};

KEYSET keys;

//////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////      주력키 및 스킬 키 입력       
//////////////////////////////////////////////////////////////////////////////////////////////

int arr[6] = {keys.lshift, keys.lctrl, 'z', 'x', 'c', 'v'};       // 주력기배치
int at[2] = {keys.lalt, keys.ralt};           // 1단점프


char const  s_key01 = 'q';       //                  S1 :  레조넌스(중요)
char const  s_key02 = 'w';        //                 S2 :  트리플 임팩트
char const  s_key03 = 'e';        //                 S3 :  콤보 어썰트(중요)
char const  s_key04 = 'r';        //                  S4 :  스플릿 미스텔
char const  s_key05 = keys.Delete;     //      S5 :  레이븐(소환)
char const  s_key06 = keys.end;         //      S6 :  얼티밋 블래스트(한방)
char const  s_key07 = keys.pgdn;       //      S7 :  레이븐 템페스트(폭풍)
char const  s_key08 = 'a';        //                 S8 :  카디널 트랜지션(이동기)
char const  s_key09 = 's';        //                 S9 :  로프
char const  s_key10 = 'd';        //                 S10 : 에프다 파운틴
char const  s_key11 = 'f';        //                  S11 : 렐릭 충전


//////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////      주력키 및 스킬 키 입력       
//////////////////////////////////////////////////////////////////////////////////////////////


void random_delay(int boundary_1, int boundary_2)
{
  int randNumber = random(boundary_1, boundary_2);
  delay(randNumber);
}

void process_periodic_key()
{
  if ( periodic_key1 != 0 )
    if ( ( millis() - periodic_millis1 ) > delay_1 )
    {
      Serial.print("PERIODIC 1 - ");
      Serial.println(( millis() - periodic_millis1 ));
      Keyboard.press(periodic_key1);
      random_delay(100, 150);
      Keyboard.release(periodic_key1);
      random_delay(13, 30);

      delay_1 = random(periodic_min1, periodic_max1);
      periodic_millis1 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key2 != 0 )
    if ( ( millis() - periodic_millis2 ) > delay_2 )
    {
      Serial.print("PERIODIC 2 - ");
      Serial.println(( millis() - periodic_millis2 ));
      Keyboard.press(periodic_key2);
      random_delay(100, 150);
      Keyboard.release(periodic_key2);
      random_delay(13, 30);

      delay_2 = random(periodic_min2, periodic_max2);
      periodic_millis2 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key3 != 0 )
    if ( ( millis() - periodic_millis3 ) > delay_3 )
    {
      Serial.print("PERIODIC 3 - ");
      Serial.println(( millis() - periodic_millis3 ));
      Keyboard.press(periodic_key3);
      random_delay(100, 150);
      Keyboard.release(periodic_key3);
      random_delay(13, 30);

      delay_3 = random(periodic_min3, periodic_max3);
      periodic_millis3 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key4 != 0 )
    if ( ( millis() - periodic_millis4 ) > delay_4 )
    {
      Serial.print("PERIODIC 4 - ");
      Serial.println(( millis() - periodic_millis4 ));
      Keyboard.press(periodic_key4);
      random_delay(100, 150);
      Keyboard.release(periodic_key4);
      random_delay(13, 30);

      delay_4 = random(periodic_min4, periodic_max4);
      periodic_millis4 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key5 != 0 )
    if ( ( millis() - periodic_millis5 ) > delay_5 )
    {
      Serial.print("PERIODIC 5 - ");
      Serial.println(( millis() - periodic_millis5 ));
      Keyboard.press(periodic_key5);
      random_delay(100, 150);
      Keyboard.release(periodic_key5);
      random_delay(13, 30);

      delay_5 = random(periodic_min5, periodic_max5);
      periodic_millis5 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key6 != 0 )
    if ( ( millis() - periodic_millis6 ) > delay_6 )
    {
      Serial.print("PERIODIC 6 - ");
      Serial.println(( millis() - periodic_millis6 ));
      Keyboard.press(periodic_key6);
      random_delay(100, 150);
      Keyboard.release(periodic_key6);
      random_delay(13, 30);

      delay_6 = random(periodic_min6, periodic_max6);
      periodic_millis6 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key7 != 0 )
    if ( ( millis() - periodic_millis7 ) > delay_7 )
    {
      Serial.print("PERIODIC 7 - ");
      Serial.println(( millis() - periodic_millis7 ));
      Keyboard.press(periodic_key7);
      random_delay(100, 150);
      Keyboard.release(periodic_key7);
      random_delay(13, 30);

      delay_7 = random(periodic_min7, periodic_max7);
      periodic_millis7 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key8 != 0 )
    if ( ( millis() - periodic_millis8 ) > delay_8 )
    {
      Serial.print("PERIODIC 8 - ");
      Serial.println(( millis() - periodic_millis8 ));
      Keyboard.press(periodic_key8);
      random_delay(100, 150);
      Keyboard.release(periodic_key8);
      random_delay(13, 30);

      delay_8 = random(periodic_min8, periodic_max8);
      periodic_millis8 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key9 != 0 )
    if ( ( millis() - periodic_millis9 ) > delay_9 )
    {
      Serial.print("PERIODIC 9 - ");
      Serial.println(( millis() - periodic_millis9 ));
      Keyboard.press(periodic_key9);
      random_delay(100, 150);
      Keyboard.release(periodic_key9);
      random_delay(13, 30);

      delay_9 = random(periodic_min9, periodic_max9);
      periodic_millis9 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }

  if ( periodic_key10 != 0 )
    if ( ( millis() - periodic_millis10 ) > delay_10 )
    {
      Serial.print("PERIODIC 10 - ");
      Serial.println(( millis() - periodic_millis10 ));
      Keyboard.press(periodic_key10);
      random_delay(100, 150);
      Keyboard.release(periodic_key10);
      random_delay(13, 30);

      delay_10 = random(periodic_min10, periodic_max10);
      periodic_millis10 = millis();
      return; // 동시에 2개 이상의 주기적키가 입력되지 않도록 한다
    }
}


bool delay1(unsigned long val)
{
  unsigned long start_millis = millis();
  while ((millis() - start_millis ) < val )
  {
    process_periodic_key();
    yield();
    if ( macro_status == 2 ) // 재시작인 경우
    {
      return false;
    }
  }
  process_periodic_key();
  return true;
}

bool check_stop()
{
  if ( macro_status == 0 ) // 구동중이 아닌 경우
  {
    macro_flag = false;
    force_releaseall();
  }

  while ( macro_status != 1 ) // 구동중이 아닌 경우
  {
    yield();
    if ( macro_status == 2 ) // 재시작인 경우
    {
      return false;
    }
  }
  return true;
}
