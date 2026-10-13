/* Entry 0x088B2ED0 | file offset 0x000AFEA8 | FUN_088b2ed0 | bytes 176 */

void FUN_088b2ed0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088b2bcc(param_1);
  FUN_088b2cfc(param_1 + 0x24);
  FUN_088b2cfc(param_1 + 0x3c);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x54) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 3);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x60) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x16);
  iVar2 = 0x16;
  iVar1 = param_1 + 0x58;
  do {
    *(undefined4 *)(iVar1 + 0x60) = 999999999;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x17);
  iVar2 = 0x17;
  param_1 = param_1 + 0x5c;
  do {
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 0x1a);
  return;
}

