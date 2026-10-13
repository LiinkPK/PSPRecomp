/* Entry 0x0888EB5C | file offset 0x0008BB34 | FUN_0888eb5c | bytes 148 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888eb5c(int param_1)

{
  int iVar1;
  int local_40 [2];
  undefined1 local_37;
  
  iVar1 = _DAT_08af2bd4;
  *(int *)(param_1 + 0xc) = (int)*(short *)(_DAT_08af2bd4 + 4);
  _DAT_08ae7cac = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = (int)*(short *)(iVar1 + 8);
  _DAT_08ae7cb0 = *(undefined4 *)(param_1 + 0x10);
  func_0x089eb798(local_40);
  local_40[1] = 0x4b;
  local_37 = 1;
  iVar1 = 0;
  do {
    local_40[0] = iVar1;
    FUN_0888ace4(local_40);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  func_0x089eb7d0(local_40,2);
  return;
}

