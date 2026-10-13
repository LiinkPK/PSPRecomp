/* Entry 0x0886EE24 | file offset 0x0006BDFC | FUN_0886ee24 | bytes 108 */

int FUN_0886ee24(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(uint *)(param_1 + 0x48) = uVar1 & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x44) = 0xff808080;
  *(uint *)(param_1 + 0x48) = uVar1 & 0xfffffffc;
  *(uint *)(param_1 + 0x48) = uVar1 & 0xfffffff8;
  FUN_089a3ebc(param_1);
  return param_1;
}

