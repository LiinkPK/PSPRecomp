/* Entry 0x088A3C48 | file offset 0x000A0C20 | FUN_088a3c48 | bytes 80 */

void FUN_088a3c48(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_088a3a10(param_1);
    FUN_088a3998(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xc;
  } while (iVar1 < 0x23);
  return;
}

