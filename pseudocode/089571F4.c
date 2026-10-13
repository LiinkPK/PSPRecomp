/* Entry 0x089571F4 | file offset 0x001541CC | FUN_089571f4 | bytes 336 */

void FUN_089571f4(int param_1,undefined4 param_2,undefined4 *param_3,byte param_4,char param_5,
                 undefined1 (*param_6) [12],undefined4 *param_7)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 1;
  if (param_5 != -1) {
    if (param_4 < 3) {
      if (param_4 != 0) goto LAB_08957268;
    }
    else if (4 < param_4) goto LAB_08957268;
    if (param_5 == '\a') {
      uVar2 = 2;
      param_4 = 7;
    }
  }
LAB_08957268:
  switch(param_4) {
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0x1c) == 0) {
      iVar3 = *(int *)(param_1 + 0x88) + 0x50;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x1c) + 0x54);
    }
    FUN_089484a4(param_1,param_4,param_3,param_2,iVar3,param_6,param_7,uVar2);
    return;
  case 3:
  case 4:
  case 5:
    uVar2 = *param_3;
    break;
  default:
    uVar2 = *param_3;
  }
  uVar4 = param_3[1];
  uVar6 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)*param_6 = uVar2;
  *(undefined4 *)(*param_6 + 4) = uVar4;
  *(undefined4 *)(*param_6 + 8) = uVar6;
  *(undefined4 *)param_6[1] = uVar5;
  if (param_7 != (undefined4 *)0x0) {
    uVar2 = vdot_t(*param_6,*param_6);
    uVar4 = vzero_s();
    uVar5 = vcmp_s(8,uVar2,*(undefined4 *)*param_6);
    vrsq_s(uVar2);
    uVar2 = vcmovt_s(uVar4,(byte)uVar5 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*param_6,uVar2);
    uVar2 = vone_s();
    *param_7 = auVar1._0_4_;
    param_7[1] = auVar1._4_4_;
    param_7[2] = auVar1._8_4_;
    param_7[3] = uVar2;
  }
  return;
}

