/* Entry 0x08852550 | file offset 0x0004F528 | FUN_08852550 | bytes 80 */

void FUN_08852550(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar3 = 0;
    iVar2 = param_1;
    do {
      *(undefined4 *)(iVar2 + 0x50) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x50;
    } while (iVar3 < 10);
    *(undefined4 *)(param_1 + 0x334) = 0;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + 0x330) = 0;
    param_1 = param_1 + 0x340;
  } while (iVar1 < 2);
  return;
}

