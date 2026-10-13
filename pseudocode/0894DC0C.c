/* Entry 0x0894DC0C | file offset 0x0014ABE4 | FUN_0894dc0c | bytes 188 */

void FUN_0894dc0c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_3 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_3 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_3 + 0x30) + iVar1) != 0) {
          FUN_0894dc0c(param_1,param_2,*(int *)(*(int *)(param_3 + 0x30) + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_3 + 4));
    }
  }
  else {
    param_3[0x170] = '\x01';
    param_3[0x171] = '\0';
    param_3[0x172] = '\0';
    param_3[0x173] = '\0';
    *(undefined4 *)(param_3 + 0x174) = param_1;
  }
  return;
}

