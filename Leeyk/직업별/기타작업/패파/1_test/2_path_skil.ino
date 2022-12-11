
void Jump() {
 pressKey(at[jnum]);
 jnum = random(0, 2);
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

void Djump() {
 pressTwoKey(keys.down, at[jnum]);
 jnum = random(0,2);
}

void Ljump() {
 pressTwoKey(keys.left, at[jnum]);
 jnum = random(0,2);
}

void Rjump() {
 pressTwoKey(keys.right, at[jnum]);
 jnum = random(0,2);
}

//응용 스킬
void Upjump() {
 Jump();
 Ujump();
 d_val(130);
}
void Downjump() {
 Djump();
 d_val(280);
}
void Doublejump() {
 Jump();
 Jump2();
 d_val(300);
}
void Doublejump2() {
 Jump();
 d_val(100);
 Jump2();
 d_val(300);
}
void Jumpdivide() {
 Jump();
 d_val(60);
 Jump2();
 Attack();
 d_val(480);
}
void Jumpdivide2() {
 for (int i = 0; i < 2; i++) {
  Jumpdivide();
 }
}
void Jumpdivide3() {
 for (int i = 0; i < 3; i++) {
  Jumpdivide();
 }
}
void Jumpdivide4() {
 for (int i = 0; i < 4; i++) {
  Jumpdivide();
 }
}
void Jumpdivide5() {
 for (int i = 0; i < 5; i++) {
  Jumpdivide();
 }
}
void Jumpdivide6() {
 for (int i = 0; i < 6; i++) {
  Jumpdivide();
 }
}
void Jumpdivide7() {
 for (int i = 0; i < 7; i++) {
  Jumpdivide();
 }
}
void Jumpdivide8() {
 for (int i = 0; i < 8; i++) {
  Jumpdivide();
 }
}
void Jumpdividedouble() {
 Jump();
 Jump();
 rAlt();
 Attack();
 d_val(480);
}
void Jumpdivideldouble() {
 Jump();
 Ljump();
 rAlt();
 Attack();
 d_val(480);
}
void Jumpdividerdouble() {
 Jump();
 Rjump();
 rAlt();
 Attack();
 d_val(480);
}
void JumpQ() {
 Jump();
 Jump();
 Q();
 d_val(1300);
}
void JumpW() {
 Jump();
 Jump();
 W();
 d_val(1300);
}
void JumpE() {
 Jump();
 Jump();
 E();
 d_val(1300);
}
void JumpR() {
 Jump();
 Jump2();
 rAlt(); 
 R();
 d_val(1300);
}

void Downjumpattack() {
 Djump();
 d_val(150);
 Attack();
 d_val(480);
}
void Downjumptread() {
 Djump();
 d_val(50);
 S2();
 d_val(350);
}
void Jumpdivideleft() {
 Jump();
 d_val(60);
 Ljump();
 Attack();
 d_val(480);
}
void Jumpdivideright() {
 Jump();
 d_val(60);
 Rjump();
 Attack();
 d_val(480);
}

void Area() {
  int randNum = random(0, 4);
  switch (randNum)
  {
    case 0:
      S1();
      break;
    case 1:
      S10();
      break;
    case 2:
      S11();
      break;
    case 3:
      S7();
      break;
    case 4:
      S6();
      break;
  }
  d_val(750);
}

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
 d_val(30);
 pressTwoKey(keys.up, s_key8);
 rA();
 d_val(600); 
}
void S9() { // 로프
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
 
