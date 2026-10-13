/* Entry 0x089520D0 | file offset 0x0014F0A8 | FUN_089520d0 | bytes 44 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db50c. Boundary still requires runtime validation. */

void FUN_089520d0(undefined4 param_1)

{
  undefined1 auVar1 [16];
  undefined4 *in_a3;
  
  auVar1 = vscl_q(*(undefined1 (*) [16])(in_a3 + 8),param_1);
  auVar1 = vadd_q(*(undefined1 (*) [16])(in_a3 + 4),auVar1);
  *in_a3 = auVar1._0_4_;
  in_a3[1] = auVar1._4_4_;
  in_a3[2] = auVar1._8_4_;
  in_a3[3] = auVar1._12_4_;
  return;
}

