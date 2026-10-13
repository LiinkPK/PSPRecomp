/* Entry 0x0894E3C0 | file offset 0x0014B398 | FUN_0894e3c0 | bytes 252 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db09c. Boundary still requires runtime validation. */

undefined4
FUN_0894e3c0(undefined4 param_1,int param_2,undefined4 *param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint *puVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_V09;
  undefined4 in_V0D;
  
  uVar6 = param_3[1];
  uVar8 = param_3[2];
  pauVar5 = param_4 + 1;
  uVar7 = param_3[3];
  *(undefined4 *)*pauVar5 = *param_3;
  *(undefined4 *)(param_4[1] + 4) = uVar6;
  *(undefined4 *)(param_4[1] + 8) = uVar8;
  *(undefined4 *)(param_4[1] + 0xc) = uVar7;
  puVar3 = *(uint **)(param_2 + 0x98);
  if ((puVar3 != (uint *)0x0) && ((*puVar3 & 0x200) != 0)) {
    puVar4 = (undefined4 *)puVar3[10];
    uVar6 = puVar4[1];
    uVar8 = puVar4[2];
    uVar7 = puVar4[3];
    *(undefined4 *)*pauVar5 = *puVar4;
    *(undefined4 *)(param_4[1] + 4) = uVar6;
    *(undefined4 *)(param_4[1] + 8) = uVar8;
    *(undefined4 *)(param_4[1] + 0xc) = uVar7;
  }
  uVar6 = *(undefined4 *)(param_4[1] + 4);
  uVar7 = *(undefined4 *)(param_4[1] + 8);
  *(undefined4 *)*param_4 = *(undefined4 *)*pauVar5;
  *(undefined4 *)(*param_4 + 4) = uVar6;
  *(undefined4 *)(*param_4 + 8) = uVar7;
  *(undefined4 *)(*param_4 + 0xc) = *(undefined4 *)(param_4[1] + 0xc);
  vpfxt(0,0,0,0);
  auVar1._8_4_ = in_V0D;
  auVar1._4_4_ = in_V09;
  auVar1._0_4_ = 0x437f0000;
  auVar1._12_4_ = 0;
  auVar1 = vmax_q(*param_4,auVar1 << 0x20);
  vpfxt(1,1,1,1);
  auVar2._8_4_ = in_V0D;
  auVar2._4_4_ = in_V09;
  auVar2._0_4_ = 0x437f0000;
  auVar2._12_4_ = 0;
  auVar1 = vmin_q(auVar1,auVar2 << 0x20);
  *(int *)*param_4 = auVar1._0_4_;
  *(int *)(*param_4 + 4) = auVar1._4_4_;
  *(int *)(*param_4 + 8) = auVar1._8_4_;
  *(int *)(*param_4 + 0xc) = auVar1._12_4_;
  return 1;
}

