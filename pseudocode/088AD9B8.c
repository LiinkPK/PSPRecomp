/* Entry 0x088AD9B8 | file offset 0x000AA990 | FUN_088ad9b8 | bytes 300 */

int FUN_088ad9b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088cb110(param_1 + 0xf58);
  iVar1 = 0;
  iVar2 = param_1 + 0x20000;
  do {
    *(undefined4 *)(iVar2 + -0x2078) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x80);
  iVar1 = 0;
  iVar2 = param_1 + 0x20000;
  do {
    *(undefined4 *)(iVar2 + -0x1e78) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x20);
  iVar1 = 0;
  iVar2 = param_1 + 0x20000;
  do {
    *(undefined4 *)(iVar2 + -0x87c) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 100);
  iVar1 = 0;
  iVar2 = param_1 + 0x20000;
  do {
    *(undefined4 *)(iVar2 + -0x6ec) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 100);
  iVar1 = 0;
  iVar2 = param_1 + 0x20000;
  do {
    *(undefined4 *)(iVar2 + -0x55c) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 100);
  iVar1 = 0;
  iVar2 = param_1 + 0x20000;
  do {
    *(undefined4 *)(iVar2 + -0x3cc) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 100);
  FUN_08993560(param_1 + 0x3e8c8,5,0x280,&LAB_088ab6f4);
  iVar1 = 0;
  iVar2 = param_1 + 0x40000;
  do {
    *(undefined4 *)(iVar2 + -0xa9c) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x20);
  return param_1;
}

