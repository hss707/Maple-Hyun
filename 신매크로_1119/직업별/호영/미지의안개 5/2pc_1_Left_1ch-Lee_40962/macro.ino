void test1() {
  anum = random(0, 7);
  jnum = random(0, 2);
  jjnum = random(0, 3);

  rd_50(600);
  _p_p();
  S7();
  _p_p();
  S8();
  _p_p();
  S9();
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_2();
  _p_p();
  S5();  
  _p_p();
  S1();    
  _p_p();
  jump_attack_L();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  _p_p();
  rd_50(400); 

  _p_p();
  S10();
  _p_p();
  S11();
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_2();
  _p_p();
  S5();  
  _p_p();
  S1();      
  _p_p();
  jump_attack_L();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  _p_p();
  rd_50(400); 

  for (int i = 0; i < 3; i++) {
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_2();
  _p_p();
  S5();  
  _p_p();
  S1();      
  _p_p();
  jump_attack_L();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  _p_p();
  rd_50(400);   
  }

  _p_p();
  S10();    
  _p_p();
  S11();
  _p_p();  
  jump_attack_R();
  _p_p();
  jump_attack_2();
  _p_p();
  S5();  
  _p_p();
  S1();      
  _p_p();
  jump_attack_L();
  _p_p();
  S2();  
  _p_p();
  jump_attack_3();
  _p_p();
  d_val(300);  
  _p_p();
  Down_jump_a();
  _p_p();  

  for (int i = 0; i < 2; i++) {
  _p_p();
  jump_attack_R();
  _p_p();
  jump_attack_2();
  _p_p();
  S5();  
  _p_p();
  S1();      
  _p_p();
  jump_attack_L();
  _p_p();
  jump_e();
  _p_p();
  jump_attack_1();
  _p_p();
  rd_50(400);   
  }
  
  Reset();
}
