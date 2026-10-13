/* Entry 0x0889F750 | file offset 0x0009C728 | FUN_0889f750 | bytes 224 */

undefined4 FUN_0889f750(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_2 == -1) || (iVar1 = FUN_088a1400(DAT_089d6c88,*param_2), iVar1 != 1)) {
    uVar2 = 0;
  }
  else {
    param_2[1] = param_3;
    param_2[2] = param_1;
    param_2[3] = param_1;
    param_2[4] = 0;
    param_2[5] = 1;
    param_2[6] = param_4;
    param_2[7] = param_5;
    FUN_0889f9c4(param_2);
    if (DAT_09b4ceec == (int *)0x0) {
      DAT_09b4cee8 = param_2;
      DAT_09b4ceec = param_2;
      param_2[8] = 0;
    }
    else {
      DAT_09b4ceec[8] = (int)param_2;
      param_2[8] = 0;
      DAT_09b4ceec = param_2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

