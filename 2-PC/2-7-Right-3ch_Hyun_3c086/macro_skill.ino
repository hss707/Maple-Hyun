
void S1() { // 테리토리
  pressKey(s_key01);
  _p_p();
  rd_50(500);
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
  pressKey(s_key06);
  _p_p();
  rd_50(750);
}
void S7() { // 마커
  pressKey(s_key07);
  _p_p();
  rd_50(750);
}
void S8() { // 페더
  pressKey(s_key08);
}
void S9() { // 게더링
  pressKey(s_key09);
}
void S10() { // 블로섬
  pressKey(s_key10);
  _p_p();
  rd_50(750);
}
void S11() { // 스톰
  pressKey(s_key11);
  _p_p();
  rd_50(750);
}
void S12() { // 인피니티
  pressKey(s_key12);
  rd_50(750);
}
void S13() { // 리스토어
  pressKey(s_key13);
  _p_p();
  rd_50(750);
}
void S14() { // 스인미
  pressKey(s_key14);
  _p_p();
  rd_50(750);
}
void S15() { // 로프
  pressKey(s_key15);
  _p_p();
  rd_50(750);
}
void S16() {  // 에르다파운틴
  pressKey(s_key16);
  _p_p();
  rd_50(750);
}


void impeil_tread() {
  inKey(s_key04);
  rd_30(50);
  outKey(s_key04);
  rd_30(30);
  inKey(s_key04);
  rd_30(60);
  outKey(s_key04);
  rd_10(10);
  Reset();
  _p_p();
  rd_30(random (500, 531));
}
void impeil_up_arrow(int key1) {  // 임페일
  inKey(key1);
  inKey(keys.up);
  inKey(s_key03);
  rd_30(random (60, 101));
  outKey(key1);
  rd_30(20);
  dUp;
  rd_30(20);
  outKey(s_key03);
  rd_30(30);
  impeil_tread();
}
void impeil_up() {
  Keyboard.press(keys.up);
  rd_30(random (30, 36));
  Keyboard.press(s_key03);
  rd_30(random (70, 111));
  outKey(keys. up);
  rd_30(random (20, 26));
  outKey(s_key03);
  rd_30(random (30, 36));
  impeil_tread();
}

void jump_tread() {
  Keyboard.press(keys.lalt);
  rd_20(70);
  outKey(keys. lalt);
  rd_30(60);
  Keyboard.press(keys.lalt);
  rd_20(70);
  outKey(keys. lalt);
  rd_30(200);
  Keyboard.press(s_key02);
  rd_50(130);
  Reset();
  _p_p();
  rd_20(random (500, 531));
}

//딜레이 정리
//void pressKey(int key) {
//  Keyboard.press(key);
//  rd_70(100);
//  Keyboard.release(key);
//  rd_30(50);
//}
void pressFast(int key) {
  Keyboard.press(key);
  rd_40(80);
  Keyboard.release(key);
  rd_30(30);
}
void inKey(int key) {
  Keyboard.press(key);
  rd_30(50);
}
void outKey(int key) {
  Keyboard.release(key);
  rd_30(50);
}
void Reset() {
  Keyboard.releaseAll();
  rd_30(50);
}

void pressTwoKey(int key1, int key2) {
  Keyboard.press(key1);
  rd_50(130);
//  pressKey_100(key2);
  Keyboard.release(key1);
  rd_30(50);
}
void pressTwoKey_50(int key1, int key2) {
  Keyboard.press(key1);
  rd_50(50);
//  pressKey_280(key2);
  Keyboard.release(key1);
  rd_30(50);
}


void jump_key1() {
  pressKey(at[jnum1]);
  jnum1 = random(0, 2);
}
void jump_key2() {
  pressKey(jp[jnum2]);
  jnum2 = random(0, 2);
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

void jump_attack_1() {      // jumpdivide
  ordernum = random(0, 12);
  if (ordernum < 3) {
    jump_key1();
    jump_key2();
    Attack();
    S5();
    ordernum = random(0, 12);
    _p_p();
    rd_60(400);
  }
  else {
    jump_key1();
    jump_key2();
    Attack();
    ordernum = random(0, 12);
    _p_p();
    rd_60(470);
  }
}


void jump_attack_arrow(int key1) {      //
  inKey(key1);
  rd_50(50);
  keypt1 = random(0, 3);
  if (keypt1 == 1) {
    jump_key1();
    rd_50(100);
    outKey(at[jnum1]);
    rd_50(100);
  }
  else {

  }
  Attack();
  rd_60(470);
  _p_p();
}
void jump_attack_R() {      // Jumpdivideright()
  _p_p();
  jump_key1();
//  jump_R();
  Attack();
  rd_60(470);
  _p_p();
}
void jump_attack_L() {      // Jumpdivideright()
  _p_p();
  jump_key1();
//  jump_R();
  Attack();
  rd_60(470);
  _p_p();
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
/*

//방향키별


void pressKey_100(int key) {
  Keyboard.press(key);
  rd_50(100);
  Keyboard.release(key);
  rd_30(50);
}
void pressKey_280(int key) {
  Keyboard.press(key);
  rd_50(280);
  Keyboard.release(key);
  rd_30(50);
}
void Ujump() {
  pressTwoKey(keys.up, at[jnum1]);
  jnum1 = random(0, 2);
}
void Ujump2() {
  pressTwoKey(keys.up, jp[jnum2]);
  jnum2 = random(0, 2);
}
void Djump() {
  pressTwoKey(keys.down, at[jnum1]);
  jnum1 = random(0, 2);
}
void Djump2() {
  pressTwoKey(keys.down, jp[jnum2]);
  jnum2 = random(0, 2);
}
void jump_L() {
  pressTwoKey(keys.left, at[jnum1]);
  jnum1 = random(0, 2);
}
void jump_L2() {
  pressTwoKey(keys.left, jp[jnum2]);
  jnum2 = random(0, 2);
}
void jump_R() {
  pressTwoKey(keys.right, at[jnum1]);
  jnum1 = random(0, 2);
}
void jump_R2() {
  pressTwoKey(keys.right, jp[jnum2]);
  jnum2 = random(0, 2);
}

//응용 스킬
void Upjump() {
  jump_key1();
  Ujump();
  rd_50(130);
}
void Downjump() {
  Djump();
  rd_50(280);
}
void Doublejump() {
  jump_key1();
  jump_key2();
  rd_50(300);
}
void Doublejump2() {
  jump_key1();
  jump_key2();
  rd_50(300);
}
void Downjumpattack() {
  Djump();
  rd_50(150);
  Attack();
  rd_60(470);
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
  rd_50(750);
}
*/
