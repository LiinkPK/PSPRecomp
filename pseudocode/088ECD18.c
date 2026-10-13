/* Entry 0x088ECD18 | file offset 0x000E9CF0 | FUN_088ecd18 | bytes 100 */

void FUN_088ecd18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_088d9f5c(*(undefined4 *)(param_1 + 0x24),0,1);
      *(undefined2 *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    }
  }
  else if (iVar1 == 3) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}

