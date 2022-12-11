
void S1() { // 테리토리
  _p_p();
 pressKey(s_key01);
 rd50(500);
  _p_p();
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
  _p_p();
 pressKey(s_key06);
 rd50(750);
  _p_p();
}
void S7() { // 마커
  _p_p();
 pressKey(s_key07);
 rd50(750);
  _p_p();
}
void S8() { // 페더
 pressKey(s_key08);
}
void S9() { // 게더링
 pressKey(s_key09);
}
void S10() { // 블로섬
  _p_p();
 pressKey(s_key10);
 rd50(750);
  _p_p();
}
void S11() { // 스톰
 pressKey(s_key11);
 rd50(750);
}
void S12() { // 인피니티
 pressKey(s_key12);
 rd50(750);
}
void S13() { // 리스토어
 pressKey(s_key13);
 rd50(750);
}
void S14() { // 스인미
 pressKey(s_key14);
 rd50(750); 
}
void S15() { // 로프
 pressKey(s_key15);
}



void impeil_up_arrow(int key1) {  // 임페일 
 _p_p();
 Keyboard.press(key1);
 rd30(20);
 Keyboard.press(keys. up);
 rd30(60);
 Keyboard.press(s_key03);
 rd30(60);
 delKey(key1);
 rd30(20);
 delKey(keys. up);
 rd30(20);
 delKey(s_key03);
 rd30(30);
 Keyboard.press(s_key04);
 rd30(60);
 delKey(s_key04);
 rd30(30);
 Keyboard.press(s_key04);
 rd30(60);
 Reset();
 rd20(random (500, 530));
_p_p();
}
void impeil_up() {
  _p_p();
 Keyboard.press(keys. up);
 rd30(30);
 Keyboard.press(s_key03);
 rd30(70);
 delKey(keys. up);
 rd30(20);
 delKey(s_key03);
 rd30(30);
 Keyboard.press(s_key04);
 rd30(60);
 delKey(s_key04);
 rd30(30);
 Keyboard.press(s_key04);
 rd30(60);
 Reset();
 rd20(random (505, 535));
_p_p();
}

void jump_tread() {
  _p_p();
 Keyboard.press(keys. lalt);
 rd20(70);
 delKey(keys. lalt);
 rd30(60);
 Keyboard.press(keys. lalt);
 rd20(70);
 delKey(keys. lalt);
 rd30(200);
 Keyboard.press(s_key02);
 d_Main();
 Reset();
 rd20(random (510, 540));
_p_p();
}

//딜레이 정리
void pressKey(int key) {
 Keyboard.press(key);
 d_Main();
 Keyboard.releaseAll();
}
void delKey(int key) {
  Keyboard.release(key);
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
 rd30(10);
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


void jump_key1() {
 pressKey(at[jnum]);
 jnum = random(0, 2);
}
void jump_key2() {
 pressKey(jp[j2num]);
 j2num = random(0, 2);
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
 pressTwoKey(keys.up, jp[j2num]);
 j2num = random(0,2);
}
void Djump() {
 pressTwoKey(keys.down, at[jnum]);
 jnum = random(0,2);
}
void Djump2() {
 pressTwoKey(keys.down, jp[j2num]);
 j2num = random(0,2);
}
void jump_L() {
 pressTwoKey(keys.left, at[jnum]);
 jnum = random(0,2);
}
void jump_L2() {
 pressTwoKey(keys.left, jp[j2num]);
 j2num = random(0,2);
}
void jump_R() {
 pressTwoKey(keys.right, at[jnum]);
 jnum = random(0,2);
}
void jump_R2() {
 pressTwoKey(keys.right, jp[j2num]);
 j2num = random(0,2);
}

//응용 스킬
void Upjump() {
 jump_key1();
 Ujump();
 rd50(130);
}
void Downjump() {
 Djump();
 rd50(280);
}
void Doublejump() {
 jump_key1();
 jump_key2();
 rd50(300);
}
void Doublejump2() {
 jump_key1();
 rd50(100);
 jump_key2();
 rd50(300);
}
void jump_attack_1() {      // jumpdivide
  _p_p();
  ordernum = random(0,12);
  if(ordernum < 3) {
  jump_key1();
  jump_key2();
  Attack();
  S5();
  d_main();
  ordernum = random(0,12);
  _p_p();
  }
  else {
  jump_key1();
  jump_key2();
  Attack();
  d_main();
  ordernum = random(0,12);
  _p_p();
  }
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
 rd50(150);
 Attack();
 d_main();
}

void jump_attack_L() {      // Jumpdivideleft()
  _p_p();
 jump_key1();
 jump_L();
 Attack();
 d_main();
  _p_p();
}
void jump_attack_R() {      // Jumpdivideright()
  _p_p();
 jump_key1();
 jump_R();
 Attack();
 d_main();
  _p_p();
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
  rd50(750);
}
