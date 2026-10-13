/* Entry 0x088D9254 | file offset 0x000D622C | FUN_088d9254 | bytes 88 */

void FUN_088d9254(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 4;
  do {
    FUN_088d8a54(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x44;
  } while (iVar2 < 7);
  FUN_088d9248(param_1);
  return;
}

