void chicken_run3_No1() {
  anum = random(0, 7);
  jnum = random(0, 2);
  
  _p_p();                   //  왼쪽 시작패턴
  rd_50(100);
  Right();
  Attack();
  jump_R();
  jump_key2();
  _p_p();
  d_main();
  jump_attack_6(); 
  impeil_up_arrow(keys.left);
  jump_attack_L();
  jump_attack_3();
  jump_tread();
   _p_p();
   {
      for (;;)  {
        _p_p();
        if ( rd_30(10) == false ) return;
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
