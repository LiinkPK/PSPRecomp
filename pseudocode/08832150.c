/* Entry 0x08832150 | file offset 0x0002F128 | FUN_08832150 | bytes 244 */

void FUN_08832150(float param_1,int param_2,float *param_3)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined1 (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pauVar3 = (undefined1 (*) [12])(param_2 + 0xd0);
  if (param_1 < 0.0) {
    param_1 = -param_1;
    FUN_089a3a64(0xbf800000,pauVar3,param_3);
  }
  else {
    FUN_089a3868(pauVar3,param_3);
  }
  if ((*param_3 == 0.0) && (param_3[2] == 0.0)) {
    *(float *)(param_2 + 0xd0) = -*(float *)(param_2 + 0x90);
    *(float *)(param_2 + 0xd8) = -*(float *)(param_2 + 0x98);
  }
  uVar2 = *(undefined4 *)(param_2 + 0xdc);
  uVar4 = vdot_t(*pauVar3,*pauVar3);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,*(undefined4 *)*pauVar3);
  uVar4 = vsqrt_s(uVar4);
  vrcp_s(uVar4);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar3,uVar4);
  *(int *)*pauVar3 = auVar1._0_4_;
  *(int *)(param_2 + 0xd4) = auVar1._4_4_;
  *(int *)(param_2 + 0xd8) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0xdc) = uVar2;
  *(float *)(param_2 + 0xdc) = param_1;
  return;
}

