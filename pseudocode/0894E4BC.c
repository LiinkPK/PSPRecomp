/* Entry 0x0894E4BC | file offset 0x0014B494 | FUN_0894e4bc | bytes 184 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db0a4. Boundary still requires runtime validation. */

void FUN_0894e4bc(undefined4 param_1,undefined4 param_2,float *param_3,undefined1 (*param_4) [16],
                 float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_V09;
  undefined4 in_V0D;
  
  *(float *)param_4[1] = *param_3 + (*(float *)param_4[1] - *param_5);
  *(float *)(param_4[1] + 4) = param_3[1] + (*(float *)(param_4[1] + 4) - param_5[1]);
  *(float *)(param_4[1] + 8) = param_3[2] + (*(float *)(param_4[1] + 8) - param_5[2]);
  uVar3 = *(undefined4 *)(param_4[1] + 4);
  uVar4 = *(undefined4 *)(param_4[1] + 8);
  *(undefined4 *)*param_4 = *(undefined4 *)param_4[1];
  *(undefined4 *)(*param_4 + 4) = uVar3;
  *(undefined4 *)(*param_4 + 8) = uVar4;
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
  return;
}

