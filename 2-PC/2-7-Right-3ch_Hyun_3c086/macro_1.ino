//////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////      마지막 수정 22.12.01
//////////////////////////////////////////////////////////////////////////////////////////////
void pressKey(int key) {
  Keyboard.press(key);
  rd_70(100);
  Keyboard.release(key);
  rd_30(50);
}
void chicken_run3_No1() {
pressKey(keys.up);
pressKey(keys.down);
pressKey(keys.left);
pressKey(keys.right);
pressKey(keys.lalt);
pressKey(keys.ralt);
pressKey(keys.lctrl);
pressKey(keys.rctrl);
pressKey(keys.lshift);
pressKey(keys.rshift);
pressKey(keys.space);
pressKey(keys.insert);
pressKey(keys.pgdn);
pressKey(keys.pgup);
pressKey(keys.home);
pressKey(keys.Delete);
pressKey(keys.end);
pressKey(keys.backspace);
pressKey(keys.capslock);
pressKey(keys.tab);
pressKey(keys.f1);
pressKey(keys.f2);
pressKey(keys.f3);
pressKey(keys.f4);
pressKey(keys.f5);
pressKey(keys.f6);
pressKey(keys.f7);
pressKey(keys.f8);
pressKey(keys.f9);
pressKey(keys.f10);
pressKey(keys.f11);
pressKey(keys.f12);
}
  /*
  anum = random(0, 7);
  jnum1 = random(0, 2);
  jnum2 = random(0, 2);

  _p_p();                   //  왼쪽 시작패턴
  rd_50(500);
  Right();
//  jump_R();
  jump_key2();
  Attack();
  _p_p();
  rd_60(470);
  jump_attack_5();
  impeil_up_arrow(keys.left);
//  jump_attack_L();
  jump_attack_3();
  jump_tread();
  _p_p();
  {
    for (;;)  {
      _p_p();
      rd_30(10);
      int loop_no = random(0, 3);
      switch (loop_no)
      {
        case 0:
          chicken_run3_No1_loop1();
          break;
        case 1:
          chicken_run3_No1_loop2();
          break;
        case 2:
          chicken_run3_No1_loop3();
          break;
      }
      _p_p();
      Reset();
    }
  }
}
void chicken_run3_No1_loop1() {
  _p_p();                   //  loop1_1, 테리토리
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  S1();
  jump_attack_L();
  jump_attack_3();
  jump_tread();
  _p_p();

  _p_p();                   //  loop1_2
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  jump_attack_3();
  jump_tread();
  _p_p();

  _p_p();                   //  loop1_3, 루인
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  jump_attack_1();
  S6();
  jump_attack_2();
  jump_tread();
  _p_p();

  _p_p();                   //  loop1_4, 마커
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  S6();
  jump_attack_3();
  jump_tread();
  _p_p();

  Reset();
}

void chicken_run3_No1_loop2() {
  _p_p();                   //  loop2_1, 테리토리, 블로섬
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  S1();
  jump_attack_L();
  jump_attack_1();
  S10();
  jump_attack_2();
  jump_tread();
  _p_p();

  _p_p();                   //  loop2_2
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  jump_attack_3();
  jump_tread();
  _p_p();

  _p_p();                   //  loop1_4, 마커
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  S6();
  jump_attack_3();
  jump_tread();
  _p_p();

  _p_p();                   //  loop1_4, 루인
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  jump_attack_1();
  S6();
  jump_attack_2();
  jump_tread();
  _p_p();

  Reset();
}

void chicken_run3_No1_loop3() {
  _p_p();                   //  loop3_1, 테리토리
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  S1();
  jump_attack_L();
  jump_attack_3();
  jump_tread();
  _p_p();

  _p_p();                   //  loop3_2, 블로섬
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  S10();
  jump_attack_3();
  jump_tread();
  _p_p();

  _p_p();                   //  loop3_3, 마커
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  jump_attack_1();
  S7();
  jump_attack_2();
  jump_tread();
  _p_p();


  _p_p();                   //  loop3_3, 루인
  jump_attack_R();
  jump_attack_5();
  impeil_up_arrow(keys.left);
  jump_attack_L();
  S6();
  jump_attack_3();
  jump_tread();
  _p_p();

  Reset();
}

*/
