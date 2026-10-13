/* Entry 0x0895FE04 | file offset 0x0015CDDC | FUN_0895fe04 | bytes 404 */

void FUN_0895fe04(undefined4 param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 0x50) < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_09b6f478[0x22] + 0x1c8) + 0x38);
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + *(int *)(param_3 + 0x50) * 4) + 0x10);
    }
  }
  if (iVar2 != -1) {
    if ((*DAT_09b6f478 & 1) == 0) {
      bVar1 = false;
      if (*(short *)(DAT_09b6f478[0x22] + 0xc) != 0) {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = 0;
      iVar4 = 0;
      if (0 < *param_2) {
        do {
          FUN_0898e194(param_1,param_2[4] + iVar4,param_3,iVar2);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x6c;
        } while (iVar3 < *param_2);
      }
    }
    else {
      if ((param_2[1] != 0) && (iVar3 = param_2[2], param_2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
        param_2[2] = param_2[3];
        FUN_089600a0(param_2,param_3,1);
      }
      iVar3 = 0;
      iVar4 = 0;
      if (0 < *param_2) {
        do {
          FUN_0898d7c8(param_1,param_2[4] + iVar4,param_3,iVar2);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x6c;
        } while (iVar3 < *param_2);
      }
    }
  }
  return;
}

