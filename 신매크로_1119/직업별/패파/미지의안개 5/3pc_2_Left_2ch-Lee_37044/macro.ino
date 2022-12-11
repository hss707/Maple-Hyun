void test1() {
  anum = random(0, 6);
  jnum = random(0, 2);
  jjnum = random(0, 3);

  rd_50(500);
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_3(); 
  _p_p();
  S9();
  _p_p();
  jump_attack_L(); 
  _p_p();
  jump_attack_1();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  rd_50(400);

  for (int i = 0; i < 3; i++) {
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_3();
  _p_p();
  Left(); 
  _p_p();
  Left();  
  _p_p();
  S8();
  _p_p();
  S8();
  _p_p();
  jump_attack_L(); 
  _p_p();
  jump_attack_1();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  rd_50(400);  
  }

  for (int i = 0; i < 2; i++) {
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_3(); 
  _p_p();
  S9();
  _p_p();
  jump_attack_L(); 
  _p_p();
  jump_attack_1();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_2();
  rd_50(400);
  }

  for (int i = 0; i < 2; i++) {
  _p_p();
  jump_attack_R();
  _p_p();
  S1();  
  _p_p();
  jump_attack_3(); 
  _p_p();
  Left();
  _p_p();
  Left();     
  _p_p();
  S8();
  _p_p();
  S8();
  _p_p();
  jump_attack_L(); 
  _p_p();
  jump_attack_1();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  rd_50(400);
  }

  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_3(); 
  _p_p();
  S9();
  _p_p();
  jump_attack_L(); 
  _p_p();
  jump_attack_1();
  _p_p();
  S8();  
  _p_p();  
  jump_attack_3();
  _p_p();
  Downjumpattack();
  
  Reset();
}
