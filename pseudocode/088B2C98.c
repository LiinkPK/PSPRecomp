/* Entry 0x088B2C98 | file offset 0x000AFC70 | FUN_088b2c98 | bytes 100 */

void FUN_088b2c98(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x18;
  FUN_088b2b14(iVar2);
  iVar1 = 0;
  do {
    FUN_088b2b24(iVar2,param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xc;
  } while (iVar1 < 2);
  return;
}

