/* Entry 0x08842C30 | file offset 0x0003FC08 | FUN_08842c30 | bytes 148 */

void FUN_08842c30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_08835798(param_2);
  iVar2 = FUN_088bf4cc(uVar1,0x154);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)*(short *)(iVar2 + 4);
  }
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = FUN_08842f48(iVar2,*(int *)(param_1 + 0xc),iVar3);
  if (iVar2 == 1) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
  }
  else {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffb;
  }
  return;
}

