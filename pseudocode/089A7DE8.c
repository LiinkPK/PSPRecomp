/* Entry 0x089A7DE8 | file offset 0x001A4DC0 | FUN_089a7de8 | bytes 60 */

void FUN_089a7de8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_089a92c4();
  uVar2 = iVar1 - *(int *)(param_1 + 0x58);
  uVar3 = *(uint *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 0x60) <= uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 0x60) = uVar3;
  return;
}

