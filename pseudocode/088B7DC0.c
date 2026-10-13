/* Entry 0x088B7DC0 | file offset 0x000B4D98 | FUN_088b7dc0 | bytes 48 */

uint FUN_088b7dc0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(byte *)(param_1 + param_3) == 0xff) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_2 << 8 | (uint)*(byte *)(param_1 + param_3);
  }
  return uVar1;
}

