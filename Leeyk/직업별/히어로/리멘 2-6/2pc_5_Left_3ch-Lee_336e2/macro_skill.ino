void S1() { // 
 pressKey(s_key01);
 _p_p();
 d_val(700);
}
void S2() { // 범위기
 pressKey(s_key02);
 _p_p();
 d_val(800);
}
void S3() { // 범위기 2
 d_val(400); 
 pressTwoKey(keys.down, s_key03);
 rE();
 _p_p();
 d_val(800); 
}
void S4() { // 
 pressKey(s_key04);
 _p_p();
 d_val(600); 
}
void S5() { // 스인미
 pressKey(s_key05);
 _p_p();
 d_val(1000); 
}
void S6() { // 범위기
 pressKey(s_key06);
 _p_p();
 d_val(1000); 
}
void S7() { // 로프
 pressKey(s_key07);
 d_val(1200); 
 Attack();
 _p_p();
 d_val(400); 
}
void S8() { // 범위기
 pressKey(s_key08);
 _p_p();
 d_val(1000); 
}
void S9() { // 이동기
 pressKey(s_key09);
 _p_p();
 d_val(500); 
}
void S10() { // 이동기
 pressKey(s_key10);
 _p_p();
 d_val(500); 
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
 jjnum = random(0, 2);
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
 jjnum = random(0,2);
}
void Djump() {
 pressTwoKey(keys.down, at[jnum]);
 jnum = random(0,2);
}
void Djump2() {
 pressTwoKey(keys.down, jp[jjnum]);
 jjnum = random(0,2);
}
void jump_L() {
 pressTwoKey(keys.left, at[jnum]);
 jnum = random(0,2);
}
void jump_L2() {
 pressTwoKey(keys.left, jp[jjnum]);
 jjnum = random(0,2);
}
void jump_R() {
 pressTwoKey(keys.right, at[jnum]);
 jnum = random(0,2);
}
void jump_R2() {
 pressTwoKey(keys.right, jp[jjnum]);
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
 rd_50(250);
}
void Doublejump2() {
 Jump();
 rd_50(100);
 Jump2();
 rd_50(300);
}
void jump_attack_1() { 
  Jump();
  rd_30(30);  
  Jump2();  
  Attack();
  d_main();
}
void jump_attack_11() { 
  Jump();
  Jump2();  
  rd_30(180);    
  Attack();
  _p_p();
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
 _p_p();
 d_main();
}
void Down_jump_a() {
 Djump();
 _p_p();
 rd_50(150);
 S4();
}
void Downjumptread() {
 Djump();
 rd_50(150);
 S2();
 _p_p();
 rd_50(450);
}
void jump_attack_L() {      // Jumpdivideleft()
 Jump();
 rd_30(30);  
 jump_L();
 Attack();
 _p_p();
 d_main();
}
void jump_attack_R() {      // Jumpdivideright()
 Jump();
 rd_30(30);  
 jump_R();
 Attack();
 _p_p();
 d_main();
}
void jump_a() {
 Jump();
 Jump2();
 S6();
 _p_p();
 rd_50(600);
}
void jump_d() {
 Jump();
 Jump2();
 S8();
 _p_p();
 rd_50(600);
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
