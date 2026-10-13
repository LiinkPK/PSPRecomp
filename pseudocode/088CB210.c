/* Entry 0x088CB210 | file offset 0x000C81E8 | FUN_088cb210 | bytes 176 */

void FUN_088cb210(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088cbbb4(iVar1,(int)(char)(&DAT_089cbc98)[iVar2]);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x778;
  } while (iVar2 < 0x1f);
  FUN_088b8634(param_1 + 0xe788);
  FUN_088b327c(param_1 + 0xfd94);
  FUN_088c28bc(param_1 + 0x123d8);
  FUN_088c0498(param_1 + 0x124a4);
  *(undefined4 *)(param_1 + 0x1cea8) = 0;
  return;
}

