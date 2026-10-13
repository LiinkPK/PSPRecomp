/* Entry 0x0888F798 | file offset 0x0008C770 | FUN_0888f798 | bytes 148 */

void FUN_0888f798(int param_1)

{
  int iVar1;
  int local_50 [2];
  undefined1 local_47;
  
  iVar1 = 0;
  param_1 = param_1 + 4;
  do {
    if (*(char *)(param_1 + 4) == '\x01') {
      func_0x089eb798(local_50);
      local_50[1] = 0xa5;
      local_47 = 1;
      local_50[0] = iVar1;
      FUN_0888ace4(local_50);
      func_0x089eb7d0(local_50,2);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 8;
  } while (iVar1 < 2);
  return;
}

