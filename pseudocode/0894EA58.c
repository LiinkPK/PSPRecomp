/* Entry 0x0894EA58 | file offset 0x0014BA30 | FUN_0894ea58 | bytes 96 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db14c. Boundary still requires runtime validation. */

void FUN_0894ea58(undefined4 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*in_a3) [16];
  
  uVar4 = *(undefined8 *)(in_a3[2] + 8);
  uVar3 = *(undefined8 *)(in_a3[2] + 8);
  auVar1 = vscl_q(in_a3[2],param_1);
  auVar1 = vadd_q(in_a3[1],auVar1);
  *(int *)*in_a3 = auVar1._0_4_;
  *(int *)(*in_a3 + 4) = auVar1._4_4_;
  *(int *)(*in_a3 + 8) = auVar1._8_4_;
  *(int *)(*in_a3 + 0xc) = auVar1._12_4_;
  vpfxt(0,0,0,0);
  auVar1._4_8_ = uVar3;
  auVar1._0_4_ = 0x437f0000;
  auVar1._12_4_ = 0;
  auVar1 = vmax_q(*in_a3,auVar1 << 0x20);
  vpfxt(1,1,1,1);
  auVar2._4_8_ = uVar4;
  auVar2._0_4_ = 0x437f0000;
  auVar2._12_4_ = 0;
  auVar1 = vmin_q(auVar1,auVar2 << 0x20);
  *(int *)*in_a3 = auVar1._0_4_;
  *(int *)(*in_a3 + 4) = auVar1._4_4_;
  *(int *)(*in_a3 + 8) = auVar1._8_4_;
  *(int *)(*in_a3 + 0xc) = auVar1._12_4_;
  return;
}

