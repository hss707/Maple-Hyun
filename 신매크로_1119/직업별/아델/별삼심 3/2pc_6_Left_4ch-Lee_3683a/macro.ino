void test1() {
  anum = random(0, 7);
  jnum = random(0, 2);
  jjnum = random(0, 3);

  _p_p();
  rd_50(600);
  jump_attack_L();
  jump_attack_2();
  S16();
  jump_attack_2();
  jump_df_L();
  jump_attack_R();
  jump_attack_2();
  rd_50(150);
  S1();
  jump_attack_3();
  S2();
  _p_p();
  rd_50(400);  

  for (int i = 0; i < 4; i++) {
  jump_attack_L();
  jump_attack_2();
  jump_attack_2();
  jump_df_L();
  jump_attack_R();
  jump_attack_2();
  rd_50(150);
  S10();
  jump_attack_3();
  S2();
  rd_50(400);    

  jump_attack_L();
  jump_attack_2();
  jump_attack_2();
  jump_df_L();
  jump_attack_R();
  jump_attack_2();
  rd_50(150);
  S1();
  jump_attack_3();
  S2();
  rd_50(400);    
  }

  jump_attack_L();
  jump_attack_2();
  jump_attack_2();
  jump_df_L();
  jump_attack_R();
  jump_attack_2();
  rd_50(150);
  S6();
  jump_attack_3();
  S2();
  
  Reset();
}
