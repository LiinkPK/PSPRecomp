/* Entry 0x0887D648 | file offset 0x0007A620 | FUN_0887d648 | bytes 36 */

void FUN_0887d648(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0x314) = 0;
    *(undefined1 *)(param_1 + 0x316) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 500;
  } while (iVar1 < 0x1c);
  return;
}

