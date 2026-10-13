/* Entry 0x0892EDBC | file offset 0x0012BD94 | FUN_0892edbc | bytes 216 */

void FUN_0892edbc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60);
  FUN_088d688c(param_1 + 0x5c,0);
  if (iVar2 != *(int *)(param_1 + 0x60)) {
    FUN_0892f024(param_1);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar2 + 1 == iVar1) {
      FUN_088d9f5c(*(undefined4 *)(param_1 + 0xc),0xd,1);
    }
    else if (iVar2 + -1 == iVar1) {
      FUN_088d9f5c(*(undefined4 *)(param_1 + 8),0xb,1);
    }
    else if (iVar1 < iVar2) {
      FUN_088d9f5c(*(undefined4 *)(param_1 + 0xc),0xd,1);
    }
    else if (iVar2 < iVar1) {
      FUN_088d9f5c(*(undefined4 *)(param_1 + 8),0xb,1);
    }
  }
  return;
}

