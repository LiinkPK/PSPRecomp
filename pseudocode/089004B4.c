/* Entry 0x089004B4 | file offset 0x000FD48C | FUN_089004b4 | bytes 380 */

int FUN_089004b4(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  psVar6 = DAT_089d8128;
  if (param_3 < 0x5623) {
    if (param_3 < 0x5622) {
      return -0x7ffffef8;
    }
    iVar5 = 4;
    iVar2 = *(int *)(DAT_089d8128 + 0x1f06);
  }
  else {
    if (param_3 != 0xac44) {
      return -0x7ffffef8;
    }
    iVar5 = 2;
    iVar2 = *(int *)(DAT_089d8128 + 0x1f06);
  }
  while (iVar2 < param_2) {
    sceKernelWaitEventFlag(*(undefined4 *)(DAT_089d8128 + 0x1f00),1,0x10,0,0);
    iVar2 = *(int *)(DAT_089d8128 + 0x1f06);
  }
  iVar2 = sceKernelWaitSema(*(undefined4 *)(DAT_089d8128 + 0x1efe),1,0);
  if (-1 < iVar2) {
    iVar1 = iVar5 >> 2;
    for (iVar2 = (param_2 >> iVar1) * 2; 0 < iVar2; iVar2 = iVar2 + -2) {
      iVar3 = (int)*psVar6;
      iVar4 = (int)psVar6[1];
      if (iVar5 == 4) {
        iVar3 = iVar3 + psVar6[2];
        iVar4 = iVar4 + psVar6[3];
      }
      *param_1 = (short)(iVar3 >> iVar1);
      param_1[1] = (short)(iVar4 >> iVar1);
      psVar6 = psVar6 + iVar5;
      param_1 = param_1 + 2;
    }
    FUN_088ffd08(param_2);
    sceKernelSignalSema(*(undefined4 *)(DAT_089d8128 + 0x1efe),1);
    iVar2 = (param_2 >> iVar1) * 4;
  }
  return iVar2;
}

