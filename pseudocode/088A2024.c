/* Entry 0x088A2024 | file offset 0x0009EFFC | FUN_088a2024 | bytes 168 */

int FUN_088a2024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x2f0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x54) = param_5;
  iVar1 = FUN_088a0bc0(param_3);
  *(int *)(param_1 + 0x4c) = iVar1;
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return param_1;
}

