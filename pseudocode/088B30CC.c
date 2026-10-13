/* Entry 0x088B30CC | file offset 0x000B00A4 | FUN_088b30cc | bytes 96 */

void FUN_088b30cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088b2bcc(param_1);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x24) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  iVar1 = 2;
  param_1 = param_1 + 8;
  do {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

