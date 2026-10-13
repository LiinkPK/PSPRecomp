/* Entry 0x08931270 | file offset 0x0012E248 | FUN_08931270 | bytes 104 */

void FUN_08931270(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x2c) = 0;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (*(short *)(iVar1 + 0xc) == 0x10) {
      FUN_088d9f5c(iVar1,0x13,1);
      *(undefined2 *)(*(int *)(param_1 + 0x34) + 0xe) = 0x14;
    }
    else {
      FUN_088d9f5c(iVar1,0x14,1);
    }
  }
  return;
}

