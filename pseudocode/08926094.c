/* Entry 0x08926094 | file offset 0x0012306C | FUN_08926094 | bytes 176 */

void FUN_08926094(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = 0;
  if ('\0' < *(char *)(iVar3 + 0xb8)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar3 + iVar2 + 0x480);
      if (iVar1 != 0) {
        FUN_0885c538(*(undefined4 *)(param_1 + 4),iVar1,0);
        *(undefined2 *)(*(int *)(param_1 + 0x20) + iVar2 + 0x47c) = 0xffff;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 + 0x480) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 + 0x484) = 0;
        iVar3 = *(int *)(param_1 + 0x20);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar4 < *(char *)(iVar3 + 0xb8));
  }
  return;
}

