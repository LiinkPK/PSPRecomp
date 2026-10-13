/* Entry 0x08814564 | file offset 0x0001153C | FUN_08814564 | bytes 96 */

void FUN_08814564(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x100);
  uVar3 = *(undefined4 *)(iVar1 + 0x104);
  uVar4 = *(undefined4 *)(iVar1 + 0x108);
  FUN_088143b8();
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar4;
  return;
}

