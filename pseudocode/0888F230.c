/* Entry 0x0888F230 | file offset 0x0008C208 | FUN_0888f230 | bytes 184 */

void FUN_0888f230(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_50 [2];
  undefined1 local_47;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = 0;
  do {
    if (*(char *)((int)piVar1 + 5) == '\x01') {
      *(undefined4 *)(*(int *)(*piVar1 + 0x52c) + 0x18) = 0x461c4000;
      func_0x089eb798(local_50);
      local_50[1] = 0x4d;
      local_47 = 1;
      local_50[0] = iVar2;
      FUN_0888ace4(local_50);
      func_0x089eb7d0(local_50,2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 < 2);
  return;
}

