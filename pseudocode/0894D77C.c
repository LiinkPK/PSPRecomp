/* Entry 0x0894D77C | file offset 0x0014A754 | FUN_0894d77c | bytes 176 */

void FUN_0894d77c(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar1) != 0) {
          FUN_0894d77c(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & 0xffef;
  }
  return;
}

