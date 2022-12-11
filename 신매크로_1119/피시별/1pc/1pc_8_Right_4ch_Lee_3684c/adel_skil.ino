
void Jump() {
 pressKey(at[jnum]);
 jnum = random(0, 2);
}
void Jump2() {
 pressKey(jp[jjnum]);
 jjnum = random(0, 3);
}
void Attack() {
  anum = random(0, 7);
  while (acheck == anum) {
  anum = random(0, 7);
  }
  pressKey(arr[anum]);
  acheck = anum;
}
void pAttack() {
  anum = random(0, 7);
  while (acheck == anum) {
  anum = random(0, 7);
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
 pressTwoKey(keys.up, jp[jjnum]);
 jjnum = random(0,3);
}
void Djump() {
 pressTwoKey(keys.down, at[jnum]);
 jnum = random(0,2);
}
void Djump2() {
 pressTwoKey(keys.down, jp[jjnum]);
 jjnum = random(0,3);
}
void Ljump() {
 pressTwoKey(keys.left, at[jnum]);
 jnum = random(0,2);
}
void Ljump2() {
 pressTwoKey(keys.left, jp[jjnum]);
 jjnum = random(0,3);
}
void Rjump() {
 pressTwoKey(keys.right, at[jnum]);
 jnum = random(0,2);
}
void Rjump2() {
 pressTwoKey(keys.right, jp[jjnum]);
 jjnum = random(0,3);
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
  ordernum = random(0,12);
  if(ordernum < 3) {
  Jump();
  Jump2();
  Attack();
  S5();
  d_main();
  ordernum = random(0,12);
  }
  else {
  Jump();
  Jump2();
  Attack();
  d_main();
  ordernum = random(0,12);
  }
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
void Downjumpattack() {
 Djump();
 d_val(150);
 Attack();
 d_main();
}
void Downjumptread() {
 Djump();
 d_val(50);
 S2();
 d_val(350);
}
void Jumpdivideleft() {
 Jump();
 Ljump();
 Attack();
 d_main();
}
void Jumpdivideright() {
 Jump();
 Rjump();
 Attack();
 d_main();
}

void Area() {
  int randNum = random(0, 5);
  switch (randNum)
  {
    case 0:
      S1();
      S10();
      S7();
      S6();
      S11();
      break;
    case 1:
      S10();
      S1();
      S6();
      S7();
      S11();
      break;
    case 2:
      S11();
      S7();
      S10();
      S6();
      S1();
      break;
    case 3:
      S7();
      S11();
      S1();
      S6();
      S10();
      break;
    case 4:
      S10();
      S11();
      S6();
      S1();
      S7();
      break;
  }
  d_val(750);
}

void S1() { // 테리토리
 pressKey(s_key01);
 d_val(750);
}
void S2() { // 트레드
 pressKey(s_key02);
}
void S3() { // 임페일
 pressKey(s_key03);
}
void S4() { // 레조넌스
 pressKey(s_key04);
}
void S5() { // 오더
 pressKey(s_key05);
}
void S6() { // 루인e
 pressKey(s_key04);
 d_val(750);
}
void S7() { // 마커
 pressKey(s_key04);
 d_val(750);
}
void S8() { // 페더
 pressKey(s_key04);
}
void S9() { // 게더링
 pressKey(s_key04);
}
void S10() { // 블로섬
 pressKey(s_key04);
 d_val(750);
}
void S11() { // 스톰
 pressKey(s_key04);
 d_val(750);
}
void S12() { // 인피니티
 pressKey(s_key04);
 d_val(750);
}
void S13() { // 리스토어
 pressKey(s_key04);
 d_val(750);
}
void S14() { // 스인미
 pressKey(s_key04);
 d_val(750); 
}
void S15() { // 로프
 pressKey(s_key04);
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
 
