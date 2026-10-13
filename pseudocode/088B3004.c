/* Entry 0x088B3004 | file offset 0x000AFFDC | FUN_088b3004 | bytes 92 */

void FUN_088b3004(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088b2ed0(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 200;
  } while (iVar2 < 0x23);
  FUN_088b2ed0(param_1 + 7000);
  return;
}

