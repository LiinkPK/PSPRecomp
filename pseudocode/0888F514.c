/* Entry 0x0888F514 | file offset 0x0008C4EC | FUN_0888f514 | bytes 176 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888f514(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_50 [2];
  undefined1 local_47;
  
  uVar1 = _DAT_08a22ab0;
  iVar2 = 0;
  param_1 = param_1 + 4;
  do {
    if (*(char *)(param_1 + 5) == '\x01') {
      func_0x08a22328(uVar1,iVar2);
      func_0x089eb798(local_50);
      local_50[1] = 0x4e;
      local_47 = 1;
      local_50[0] = iVar2;
      FUN_0888ace4(local_50);
      func_0x089eb7d0(local_50,2);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 8;
  } while (iVar2 < 2);
  return;
}

