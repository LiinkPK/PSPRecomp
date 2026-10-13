/* Entry 0x08903E20 | file offset 0x00100DF8 | FUN_08903e20 | bytes 164 */

undefined4 FUN_08903e20(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < param_1[0x61]) {
    if (*param_1 == -1) {
      uVar1 = 0;
    }
    else {
      iVar2 = sceNetAdhocMatchingSelectTarget
                        (*param_1,(int)param_1 + param_2 * 6 + 0x124,param_4,param_3);
      if (iVar2 < 0) {
        uVar1 = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x115) = 0;
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

