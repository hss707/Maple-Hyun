//////////////////////////////////////////////////////////////////////////////////////////////////////
////  모듈넘버 1ch=0, 2ch=1, 3ch =2, 4ch=3
//////////////////////////////////////////////////////////////////////////////////////////////////////

#define MY_ID 2 // 0~3   

//////////////////////////////////////////////////////////////////////////////////////////////////////
////  모듈넘버 1ch=0, 2ch=1, 3ch =2, 4ch=3
//////////////////////////////////////////////////////////////////////////////////////////////////////

#define MODULE_NO 8

char reset_key[MODULE_NO][8] = 
{
  { 0x00, 0, 0x29, 0x3A, 0, 0, 0, 0 } ,  // ESC + F1
  { 0x00, 0, 0x29, 0x3B, 0, 0, 0, 0 } ,  // ESC + F2
  { 0x00, 0, 0x29, 0x3C, 0, 0, 0, 0 } ,  // ESC + F3
  { 0x00, 0, 0x29, 0x3D, 0, 0, 0, 0 } ,  // ESC + F4
  { 0x00, 0, 0x29, 0x3E, 0, 0, 0, 0 } ,  // ESC + F5
  { 0x00, 0, 0x29, 0x3F, 0, 0, 0, 0 } ,  // ESC + F6
  { 0x00, 0, 0x29, 0x40, 0, 0, 0, 0 } ,  // ESC + F7
  { 0x00, 0, 0x29, 0x41, 0, 0, 0, 0 } ,  // ESC + F8
};

char active_key[MODULE_NO][8] =
{
  { 0x1, 0, 0x3A, 0, 0, 0, 0, 0 } , // CTRL + F1
  { 0x1, 0, 0x3B, 0, 0, 0, 0, 0 } , // CTRL + F2
  { 0x1, 0, 0x3C, 0, 0, 0, 0, 0 } , // CTRL + F3
  { 0x1, 0, 0x3D, 0, 0, 0, 0, 0 } , // CTRL + F4
  { 0x1, 0, 0x3E, 0, 0, 0, 0, 0 } , // CTRL + F5
  { 0x1, 0, 0x3F, 0, 0, 0, 0, 0 } , // CTRL + F6
  { 0x1, 0, 0x40, 0, 0, 0, 0, 0 } , // CTRL + F7
  { 0x1, 0, 0x41, 0, 0, 0, 0, 0 } , // CTRL + F8
};

char macro_restart_key[MODULE_NO][8] =
{
  { 0x1, 0, 0x1E, 0, 0, 0, 0, 0 } , // CTRL + 1
  { 0x1, 0, 0x1F, 0, 0, 0, 0, 0 } , // CTRL + 2
  { 0x1, 0, 0x20, 0, 0, 0, 0, 0 } , // CTRL + 3
  { 0x1, 0, 0x21, 0, 0, 0, 0, 0 } , // CTRL + 4
  { 0x1, 0, 0x22, 0, 0, 0, 0, 0 } , // CTRL + 5
  { 0x1, 0, 0x23, 0, 0, 0, 0, 0 } , // CTRL + 6
  { 0x1, 0, 0x24, 0, 0, 0, 0, 0 } , // CTRL + 7
  { 0x1, 0, 0x25, 0, 0, 0, 0, 0 } , // CTRL + 8
};

char macro_resume_key[MODULE_NO][8] =
{
  { 0x2, 0, 0x1E, 0, 0, 0, 0, 0 } , // SHIFT + 1      // 11.01 수정
  { 0x2, 0, 0x1F, 0, 0, 0, 0, 0 } , // SHIFT + 2
  { 0x2, 0, 0x20, 0, 0, 0, 0, 0 } , // SHIFT + 3
  { 0x2, 0, 0x21, 0, 0, 0, 0, 0 } , // SHIFT + 4
  { 0x2, 0, 0x22, 0, 0, 0, 0, 0 } , // SHIFT + 5
  { 0x2, 0, 0x23, 0, 0, 0, 0, 0 } , // SHIFT + 6
  { 0x2, 0, 0x24, 0, 0, 0, 0, 0 } , // SHIFT + 7
  { 0x2, 0, 0x25, 0, 0, 0, 0, 0 } , // SHIFT + 8
};

char periodic_reset_key[MODULE_NO][8] =
{
  { 0x3, 0, 0x3A, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F1
  { 0x3, 0, 0x3B, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F2
  { 0x3, 0, 0x3C, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F3
  { 0x3, 0, 0x3D, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F4
  { 0x3, 0, 0x3E, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F5
  { 0x3, 0, 0x3F, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F6
  { 0x3, 0, 0x40, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F7
  { 0x3, 0, 0x41, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + F8
};


char active_key2[MODULE_NO][8] =
{
  { 0x3, 0, 0x1E, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 1
  { 0x3, 0, 0x1F, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 2
  { 0x3, 0, 0x20, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 3
  { 0x3, 0, 0x21, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 4
  { 0x3, 0, 0x22, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 5
  { 0x3, 0, 0x23, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 6
  { 0x3, 0, 0x24, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 7
  { 0x3, 0, 0x25, 0, 0, 0, 0, 0 } , // CTRL + SHIFT + 8
};

char all_off_key[8]  =
  // 모든 채널 끄기 단축키
{
  0x01, 0, 0x29,  0, 0, 0, 0, 0 // CTRL + ESC
};

char all_macro_off_key[8]  =
  // 모든 채널 매크로 끄기 단축키
{
  0x01, 0, 0x45,  0, 0, 0, 0, 0 // CTRL + F12
};

//////////////////////////////////////////////////////////////////////////////////////////////////////
////  공유기 ssid, 비번 설정
//////////////////////////////////////////////////////////////////////////////////////////////////////
const char* ssid = "leeyk";                       //  공유기 ssid
const char* password = "0123456789";  //  공유기 비번

//////////////////////////////////////////////////////////////////////////////////////////////////////
////  공유기 ssid, 비번 설정
//////////////////////////////////////////////////////////////////////////////////////////////////////4

const char* keyboard_manufact = "China Resource";
const char* keyboard_product = "USB Keyboard";

const char* mouse_manufact = "SIGMACHIP";
const char* mouse_product = "Usb Mouse";

uint16_t ch9329_vid = 0x1A2C;
uint16_t ch9329_pid = 0x405E;
uint16_t mouse_vid = 0x1C4F;
uint16_t mouse_pid = 0x0034;

/*
const char* ssid = "taeyoung";
const char* password = "87654321ab";

const char* keyboard_manufact = "Holtek";
const char* keyboard_product = "USB Keyboard";

const char* mouse_manufact = "SIGMACHIP";
const char* mouse_product = "Usb Mouse";

uint16_t ch9329_vid = 0x04D9;
uint16_t ch9329_pid = 0x1603;
uint16_t mouse_vid = 0x1C4F;
uint16_t mouse_pid = 0x0034;
*/


// 공통 변수
// 시작시 세팅
volatile int mouse_flag = false; // 마우스 작동
volatile int keyboard_flag = false; // 키보드 작동
volatile int macro_flag = false; // 매크로 작동
volatile int echo_flag = false; // 마우스 키보드 입력값 출력

volatile int green_btn = false;
volatile int red_btn = false;
