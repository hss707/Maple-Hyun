void S1() { // 진귀참
 pressKey(s_key01);
}
void S2() { // 범위기
 d_val(200);
 pressKey(s_key02);
 d_val(1000);
}
void S3() { // 지속기
 pressKey(s_key03);
 d_val(800); 
}
void S4() { // 지속기
 pressKey(s_key04);
 d_val(800); 
}
void S5() { // 이동기
 pressKey(s_key05);
 d_val(200); 
}
void S6() { // 로프
 Jump();
 pressKey(s_key06);
 d_val(1200); 
 Attack();
 Attack(); 
 d_val(400); 
}
void S7() { // 에르다 파운틴
 d_val(400); 
 pressTwoKey(keys.down, s_key07);
 rD();
 d_val(800); 
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
void jump_L() {
 pressTwoKey(keys.left, at[jnum]);
 jnum = random(0,2);
}
void jump_L2() {
 pressTwoKey(keys.left, jp[jjnum]);
 jjnum = random(0,3);
}
void jump_R() {
 pressTwoKey(keys.right, at[jnum]);
 jnum = random(0,2);
}
void jump_R2() {
 pressTwoKey(keys.right, jp[jjnum]);
 jjnum = random(0,3);
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
void jump_attack_1() { 
  Jump();
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
 rd_50(150);
 S2();
 rd_50(450);
}
void jump_attack_L() {      // Jumpdivideleft()
 Jump();
 jump_L();
 Attack();
 d_main();
}
void jump_attack_R() {      // Jumpdivideright()
 Jump();
 jump_R();
 Attack();
 d_main();
}
void jump_q() {
 Jump();
 Jump2();
 rd_30(30);  
 Q();
 rd_50(1000);
}
void jump_w() {
 Jump();
 Jump2();
 W();
 rd_50(1100);
}
void jump_e() {
 Jump();
 Jump2();
 E();
 rd_50(1100);
}
void jump_r() {
 Jump();
 Jump2();
 R();
 rd_50(1100);
}

void Area() {
  int randNum = random(0, 5);
  switch (randNum)
  {
    case 0:
      S1();
      break;
    case 1:
      S2();
      break;
    case 2:
      S3();
      break;
    case 3:
      S4();
      break;
    case 4:
      S5();
      break;
  }
  rd_50(750);
}
