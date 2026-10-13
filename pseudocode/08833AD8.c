/* Entry 0x08833AD8 | file offset 0x00030AB0 | FUN_08833ad8 | bytes 84 */

void FUN_08833ad8(int param_1,undefined1 (*param_2) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)param_2[1];
  uVar3 = vdot_t(*param_2,*param_2);
  uVar4 = vzero_s();
  uVar5 = vcmp_s(8,uVar3,*(undefined4 *)*param_2);
  uVar3 = vsqrt_s(uVar3);
  vrcp_s(uVar3);
  uVar4 = vcmovt_s(uVar4,(byte)uVar5 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*param_2,uVar4);
  *(int *)*param_2 = auVar1._0_4_;
  *(int *)(*param_2 + 4) = auVar1._4_4_;
  *(int *)(*param_2 + 8) = auVar1._8_4_;
  *(undefined4 *)param_2[1] = uVar2;
  *(undefined4 *)param_2[1] = uVar3;
  FUN_089a3868(param_1 + 0xe0);
  return;
}

