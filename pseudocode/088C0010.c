/* Entry 0x088C0010 | file offset 0x000BCFE8 | FUN_088c0010 | bytes 76 */

void FUN_088c0010(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar1 = 0;
  do {
    FUN_088bff94(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xc;
  } while (iVar1 < 4);
  return;
}

