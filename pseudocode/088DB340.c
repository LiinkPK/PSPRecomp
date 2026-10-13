/* Entry 0x088DB340 | file offset 0x000D8318 | FUN_088db340 | bytes 420 */

/* WARNING: Removing unreachable block (ram,0x088db374) */

void FUN_088db340(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    param_2[1] = param_3;
    *param_2 = param_3;
    *(undefined4 *)(param_3 + 0x24) = 0;
    *(undefined4 *)(param_3 + 0x28) = 0;
    param_2[2] = param_2[2] + 1;
  }
  else {
    for (iVar2 = iVar1; (iVar2 != 0 && (*(byte *)(param_3 + 0x15) < *(byte *)(iVar2 + 0x15)));
        iVar2 = *(int *)(iVar2 + 0x28)) {
    }
    if (iVar2 == 0) {
      if (*param_2 == 0) {
        param_2[1] = param_3;
        *param_2 = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar1 = param_2[2];
      }
      else {
        *(int *)(*param_2 + 0x28) = param_3;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(int *)(param_3 + 0x24) = *param_2;
        iVar1 = param_2[2];
        *param_2 = param_3;
      }
      param_2[2] = iVar1 + 1;
    }
    else if (iVar2 == 0) {
      if (*param_2 == 0) {
        param_2[1] = param_3;
        *param_2 = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar1 = param_2[2];
      }
      else {
        *(int *)(*param_2 + 0x28) = param_3;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(int *)(param_3 + 0x24) = *param_2;
        iVar1 = param_2[2];
        *param_2 = param_3;
      }
      param_2[2] = iVar1 + 1;
    }
    else if (iVar2 == iVar1) {
      if (iVar1 == 0) {
        param_2[1] = param_3;
        *param_2 = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar1 = param_2[2];
      }
      else {
        *(int *)(iVar1 + 0x24) = param_3;
        iVar1 = param_2[1];
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(int *)(param_3 + 0x28) = iVar1;
        iVar1 = param_2[2];
        param_2[1] = param_3;
      }
      param_2[2] = iVar1 + 1;
    }
    else {
      *(int *)(param_3 + 0x28) = iVar2;
      iVar1 = *(int *)(iVar2 + 0x24);
      *(int *)(param_3 + 0x24) = iVar1;
      *(int *)(iVar1 + 0x28) = param_3;
      *(int *)(iVar2 + 0x24) = param_3;
      param_2[2] = param_2[2] + 1;
    }
  }
  return;
}

