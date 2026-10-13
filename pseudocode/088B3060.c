/* Entry 0x088B3060 | file offset 0x000B0038 | FUN_088b3060 | bytes 108 */

void FUN_088b3060(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 7000;
  FUN_088b2ed0(iVar2);
  iVar1 = 0;
  do {
    FUN_088b2fe8(param_1);
    FUN_088b2f80(iVar2,param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 200;
  } while (iVar1 < 0x23);
  return;
}

