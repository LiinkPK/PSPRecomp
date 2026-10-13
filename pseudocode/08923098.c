/* Entry 0x08923098 | file offset 0x00120070 | FUN_08923098 | bytes 92 */

undefined4 FUN_08923098(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xb4) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_08925378();
    iVar2 = FUN_08925378(param_2);
    if (iVar1 == iVar2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

