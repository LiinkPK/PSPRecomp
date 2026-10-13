/* Entry 0x08982350 | file offset 0x0017F328 | FUN_08982350 | bytes 176 */

void FUN_08982350(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 + 0xc);
      if (iVar1 != 0) {
        FUN_089734b8(*(undefined4 *)(param_2 + 0xa4),
                     *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar2),iVar1);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
      iVar2 = iVar2 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x54));
  }
  return;
}

