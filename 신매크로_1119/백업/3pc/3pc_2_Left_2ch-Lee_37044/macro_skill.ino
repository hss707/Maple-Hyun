
void S1() { // 레조넌스
 pressKey(s_key01);
 d_val(800);
}
void S2() { // 트리플 임팩트
 pressKey(s_key02);\
 d_val(800);
}
void S3() { // 콤보 어썰트
 pressKey(s_key03);
 d_val(800);
}
void S4() { // 스플릿 미스텔
 pressKey(s_key04);
 d_val(800);
}
void S5() { // 레이븐
 pressKey(s_key05);
 d_val(700); 
}
void S6() { // 얼티밋 블래스트
 pressKey(s_key06);
 d_val(1000);
}
void S7() { // 레이븐 템페스트
 pressKey(s_key07);
 d_val(1000);
}
void S8() { // 카디널 트랜지션
 Jump();
 rd_30(20);
 pressTwoKey(keys.up, s_key08);
 rA();
 rd_30(580);
}
void S9() { // 로프
 Jump();
 pressKey(s_key09);
 d_val(1700);
}
void S10() { // 에르다마운틴
 d_val(350); 
 pressTwoKey(keys.down, s_key10);
 rD();
 d_val(750); 
}

int delay_list[10][10] =
{
  1,2,3,4,5,6,7,8,9,10,
  11,2,3,4,5,6,7,8,9,10,
  21,2,3,4,5,6,7,8,9,10,
  31,2,3,4,5,6,7,8,9,10,
  41,2,3,4,5,6,7,8,9,10,
  51,2,3,4,5,6,7,8,9,10,
  61,2,3,4,5,6,7,8,9,10,
};
void dfff() {  // 임페일 
  int randNumber = random(0, 7);
    pD();
    d_val(140);
    Reset();
    pF();
    delay1(random(delay_list[randNumber][randNumber]));
    Reset();
    pF();
    delay1(random(delay_list[randNumber][randNumber]));
    Reset();
    pF();
    delay1(random(delay_list[randNumber][randNumber]));
    Reset();
  }
  
//딜레이 정리
void pressKey(int key) {
 Keyboard.press(key);
 d_Main();
 Keyboard.releaseAll();
}
void pressKey_100(int key) {
 Keyboard.press(key);
 d_100();
 Keyboard.releaseAll();
}
void pressKey_280(int key) {
 Keyboard.press(key);
 d_280();
 Keyboard.releaseAll();
}
void pressTwoKey(int key1, int key2) {
 Keyboard.press(key1);
 d_130();
 pressKey_100(key2);
 Keyboard.releaseAll();
}
void pressTwoKey_50(int key1, int key2) {
 Keyboard.press(key1);
 d_50();
 pressKey_280(key2);
 Keyboard.releaseAll();
}

//기본
void Reset() {
 Keyboard.releaseAll();
}

void Jump() {
 pressKey(at[jnum]);
 jnum = random(0, 2);
}
void Jump2() {
 pressKey(at[jjnum]);
 jjnum = random(0, 2);
}
void Attack() {
  anum = random(0, 6);
  while (acheck == anum) {
  anum = random(0, 6);
  }
  pressKey(arr[anum]);
  acheck = anum;
}
void pAttack() {
  anum = random(0, 6);
  while (acheck == anum) {
  anum = random(0, 6);
  }
  Keyboard.press(arr[anum]);
  acheck = anum;
}

//방향키별
void Ujump() {
 pressTwoKey(keys.up, at[jnum]);
 jnum = random(0,2);
}
void Ujump2() {
 pressTwoKey(keys.up, at[jjnum]);
 jjnum = random(0,2);
}
void Djump() {
 pressTwoKey(keys.down, at[jnum]);
 jnum = random(0,2);
}
void Djump2() {
 pressTwoKey(keys.down, at[jjnum]);
 jjnum = random(0,2);
}
void jump_L() {
 pressTwoKey(keys.left, at[jnum]);
 jnum = random(0,2);
}
void jump_L2() {
 pressTwoKey(keys.left, at[jjnum]);
 jjnum = random(0,2);
}
void jump_R() {
 pressTwoKey(keys.right, at[jnum]);
 jnum = random(0,2);
}
void jump_R2() {
 pressTwoKey(keys.right, at[jjnum]);
 jjnum = random(0,2);
}

//응용 스킬
void Upjump() {
 Jump();
 Ujump();
 rd_50(130);
}
void Downjump() {
 Djump();
 rd_50(280);
}
void Doublejump() {
 Jump();
 Jump2();
 rd_50(300);
}
void Doublejump2() {
 Jump();
 rd_50(100);
 Jump2();
 rd_50(300);
}

void jump_attack_1() {      // jumpdivide
 Jump();
 rd_30(10);
 Jump2();
 Attack();
 d_main();
}

void jump_attack_2() {      // jumpdivide2
 for (int i = 0; i < 2; i++) {
  jump_attack_1();
 }
}
void jump_attack_3() {      // jumpdivide3
 for (int i = 0; i < 3; i++) {
  jump_attack_1();
 }
}
void jump_attack_4() {      // jumpdivide4
 for (int i = 0; i < 4; i++) {
  jump_attack_1();
 }
}
void jump_attack_5() {      // jumpdivide5
 for (int i = 0; i < 5; i++) {
  jump_attack_1();
 }
}
void jump_attack_6() {      // jumpdivide6
 for (int i = 0; i < 6; i++) {
  jump_attack_1();
 }
}
void jump_attack_7() {      // Jumpdivide7
 for (int i = 0; i < 7; i++) {
  jump_attack_1();
 }
}
void jump_attack_8() {      // Jumpdivide8
 for (int i = 0; i < 8; i++) {
  jump_attack_1();
 }
}
void Downjumpattack() {
 Djump();
 rd_50(150);
 Attack();
 d_main();
}
void Downjumptread() {
 Djump();
 rd_50(50);
 S2();
 rd_50(350);
}
void jump_attack_L() {      // Jumpdivideleft()
 Jump();
 rd_30(20);
 jump_L();
 Attack();
 d_main();
}
void jump_attack_R() {      // Jumpdivideright()
 Jump();
 rd_30(20);
 jump_R();
 Attack();
 d_main();
}
void jump_q() {
 Jump();
 Jump2();
 Q();
 rd_50(1200);
}
void jump_w() {
 Jump();
 Jump2();
 W();
 rd_50(1200);
}
void jump_e() {
 Jump();
 Jump2();
 E();
 rd_50(1200);
}
void jump_r() {
 Jump();
 Jump2();
 R();
 rd_50(1200);
}
void Area() {
  int randNum = random(0, 5);
  switch (randNum)
  {
    case 0:
      S1();
      break;
    case 1:
      S10();
      break;
    case 2:
      S1();
      break;
    case 3:
      S7();
      break;
    case 4:
      S6();
      break;
  }
  rd_50(750);
}
