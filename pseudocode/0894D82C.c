/* Entry 0x0894D82C | file offset 0x0014A804 | FUN_0894d82c | bytes 312 */

void FUN_0894d82c(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar1) != 0) {
          FUN_0894d82c(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else if (*(float *)(param_2 + 0x168) < 0.0) {
    if (*(float *)(param_2 + 0x15c) < 0.0) {
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      iVar1 = *(int *)(*(int *)(param_2 + 0x1cc) + 0xc);
    }
    else {
      *(float *)(param_2 + 0x168) = *(float *)(param_2 + 0x15c);
      iVar1 = *(int *)(*(int *)(param_2 + 0x1cc) + 0xc);
    }
    if (((1 < iVar1) && (2 < iVar1)) && (iVar1 < 4)) {
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x10;
    }
  }
  return;
}

