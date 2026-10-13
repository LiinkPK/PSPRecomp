/* Entry 0x088B2C28 | file offset 0x000AFC00 | FUN_088b2c28 | bytes 112 */

void FUN_088b2c28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088b2b24(iVar1,param_2);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0xc;
    param_2 = param_2 + 0xc;
  } while (iVar2 < 2);
  FUN_088b2c98(param_1);
  return;
}

