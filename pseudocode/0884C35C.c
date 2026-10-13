/* Entry 0x0884C35C | file offset 0x00049334 | FUN_0884c35c | bytes 148 */

void FUN_0884c35c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x2588) = 0;
  *(undefined4 *)(param_1 + 0x2584) = 0;
  *(undefined4 *)(param_1 + 0x2580) = 0;
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = 1;
  param_1 = param_1 + 0x25a0;
  do {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x14;
  } while (iVar1 < 0x20);
  while (iVar2 = FUN_08841f84(iVar2), iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x780) = 0;
    *(undefined4 *)(iVar2 + 0x77c) = 0;
  }
  while (iVar3 = FUN_08842068(iVar3), iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x5ec) = 0;
    *(undefined4 *)(iVar3 + 0x5e8) = 0;
  }
  return;
}

