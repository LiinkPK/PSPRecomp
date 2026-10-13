/* Entry 0x08923C34 | file offset 0x00120C0C | FUN_08923c34 | bytes 108 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08923c34(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) != 0) {
    func_0x08b34688();
    uVar1 = func_0x08b421fc(_DAT_08b42288,0x16);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = uVar1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0xb8);
    if (iVar2 != 0) {
      func_0x08b43f24(0,iVar2);
    }
  }
  return;
}

