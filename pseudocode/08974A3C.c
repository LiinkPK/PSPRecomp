/* Entry 0x08974A3C | file offset 0x00171A14 | FUN_08974a3c | bytes 76 */

int FUN_08974a3c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = iVar1 + (param_2 + 0xfU & 0xfffffff0);
  if ((uint)(*(int *)(param_1 + *(int *)(param_1 + 0xc) * 4) + *(int *)(param_1 + 0x10)) < uVar2) {
    iVar1 = 0;
  }
  else {
    *(uint *)(param_1 + 8) = uVar2;
  }
  return iVar1;
}

