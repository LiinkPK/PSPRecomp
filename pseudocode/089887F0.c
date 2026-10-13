/* Entry 0x089887F0 | file offset 0x001857C8 | FUN_089887f0 | bytes 180 */

int FUN_089887f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  *(undefined **)(param_1 + 4) = &DAT_089dd270;
  *(undefined4 *)(param_1 + 8) = param_2;
  iVar1 = param_1 + 0x10;
  if (*(char *)(param_3 + 0xc4) != '\0') {
    iVar1 = param_1 + 0x38;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_089dd2c8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_089dd2e8;
  uVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (uVar2 < 8);
  uVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (uVar2 < 8);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1;
}

