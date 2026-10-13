/* Entry 0x088B7DF0 | file offset 0x000B4DC8 | FUN_088b7df0 | bytes 64 */

uint FUN_088b7df0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xc + param_3 * 3 + param_4);
  if (uVar1 == 0xff) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_2 << 8 | uVar1;
  }
  return uVar1;
}

