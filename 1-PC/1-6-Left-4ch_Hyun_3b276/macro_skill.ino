void S1() { // 테리토리
 End();
}
void S2() { // 트레드
 Q();
}
void S3() { // 임페일
 D();
}
void S4() { // 레조넌스
 FF();
}
void S5() { // 오더
 A();
}
void S6() { // 루인
 R();
}
void S7() { // 마커
 G();
}
void S8() { // 페더
 Z();
}
void S9() { // 게더링
 T();
}
void S10() { // 블로섬
 k_4();
}
void S11() { // 스톰
 k_5();
 d_150();
}
void S12() { // 인피니티
 C();
 d_150();
}
void S13() { // 리스토어
 X();
 d_150();
}
void S14() { // 스인미
 k_3();
}
void S15() { // 로프
 S();
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
 d_130();
}
void Downjump() {
 Djump();
 d_280();
}
void Doublejump() {
 Jump();
 Jump2();
 d_300();
}
void Doublejump2() {
 Jump();
 d_100();
 Jump2();
 d_300();
}
void Jumpdivide() {
 Jump();
 d_30();
 Jump2();
 rAlt();
 Attack();
 d_main();
}
void Jumpdividedouble() {
 Jump();
 d_30();
 Jump2();
 d_30();
 Jump();
 rAlt();
 Attack();
 d_main();
}
void Jumpdivide22() {
 Jump();
 Jump2();
 rAlt();
 d_300();
 Attack();
 d_main();
}
void JumpQ() {
 Jump();
 d_30();
 Jump2();
 rAlt();
 Q();
 d_main();
}
void JumplQ() {
 Left();
 d_30();
 Jump();
 Jump2();
 rAlt();
 Q();
 d_main();
}
void JumpC() {
 Jump();
 d_30();
 Jump2();
 rAlt();
 C();
 d_main();
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
 d_150();
 Attack();
 d_main();
}
void Downjumptread() {
 Djump();
 d_50();
 S2();
 d_350();
}
void Jumpdivideleft() {
 Jump();
 d_30();
 Ljump();
 Control();
 d_main();
}
void Jumpdivideright() {
 Jump();
 d_30();
 Rjump();
 Control();
 d_main();
}

void Area() {
 if (area == 0) {
  area = random(0, 5);
  while (archeck == area) {
  area = random(0, 5);
  }
  S1();
  S10();
  S7();
  S6();
  S11();
  archeck = area;
 }
 else if (area == 1) {
  area = random(0, 5);
  while (archeck == area) {
  area = random(0, 5);
  }
  S10();
  S1();
  S6();
  S7();
  S11();
  archeck = area;
 }
 else if (area == 2) {
  area = random(0, 5);
  while (archeck == area) {
  area = random(0, 5);
  }
  S11();
  S7();
  S10();
  S6();
  S1();
  archeck = area;
 }
 else if (area == 3) {
  area = random(0, 5);
  while (archeck == area) {
  area = random(0, 5);
  }
  S7();
  S11();
  S1();
  S6();
  S10();
  archeck = area;
 }
 else if (area == 4) {
  area = random(0, 5);
  while (archeck == area) {
  area = random(0, 5);
  }
  S10();
  S11();
  S6();
  S1();
  S7();
  archeck = area;
 }
 d_750();
}
