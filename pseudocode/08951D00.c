/* Entry 0x08951D00 | file offset 0x0014ECD8 | FUN_08951d00 | bytes 84 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db4bc. Boundary still requires runtime validation. */

void FUN_08951d00(undefined4 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 *in_a3;
  undefined4 uVar3;
  
  uVar3 = vmul_s(param_1,param_1);
  uVar3 = vmul_s(uVar3,0x3f000000);
  auVar1 = vscl_q(*(undefined1 (*) [16])(in_a3 + 8),param_1);
  auVar1 = vadd_q(*(undefined1 (*) [16])(in_a3 + 4),auVar1);
  auVar2 = vscl_q(*(undefined1 (*) [16])(in_a3 + 0xc),uVar3);
  auVar1 = vadd_q(auVar1,auVar2);
  *in_a3 = auVar1._0_4_;
  in_a3[1] = auVar1._4_4_;
  in_a3[2] = auVar1._8_4_;
  in_a3[3] = auVar1._12_4_;
  return;
}

