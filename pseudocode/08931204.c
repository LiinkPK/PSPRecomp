/* Entry 0x08931204 | file offset 0x0012E1DC | FUN_08931204 | bytes 108 */

void FUN_08931204(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x2c) = 1;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (*(short *)(iVar1 + 0xc) == 0x13) {
      FUN_088d9f5c(iVar1,0x10,1);
      *(undefined2 *)(*(int *)(param_1 + 0x34) + 0xe) = 0x11;
    }
    else {
      FUN_088d9f5c(iVar1,0x11,1);
    }
  }
  return;
}

