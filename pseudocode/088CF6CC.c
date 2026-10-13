/* Entry 0x088CF6CC | file offset 0x000CC6A4 | FUN_088cf6cc | bytes 132 */

void FUN_088cf6cc(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    if ((*(char *)(iVar1 + 0x16) == param_2) || (param_2 == -1)) {
      *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfd;
    }
  }
  iVar2 = *(int *)(param_1 + 0x30);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    if ((*(char *)(iVar1 + 0x16) == param_2) || (param_2 == -1)) {
      *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfd;
    }
  }
  return;
}

