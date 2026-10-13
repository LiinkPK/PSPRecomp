/* Entry 0x088B312C | file offset 0x000B0104 | FUN_088b312c | bytes 72 */

void FUN_088b312c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_088b30cc(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x30;
  } while (iVar1 < 0x23);
  return;
}

