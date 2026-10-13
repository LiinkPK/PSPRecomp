/* Entry 0x08925920 | file offset 0x001228F8 | FUN_08925920 | bytes 156 */

/* WARNING: Removing unreachable block (ram,0x08925954) */

uint FUN_08925920(float param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  param_1 = (float)(param_3 >> 0x18) * param_1;
  if (param_1 < 2.1474836e+09) {
    uVar1 = (uint)param_1;
  }
  else {
    uVar1 = (int)(param_1 - 2.1474836e+09) + 0x80000000;
  }
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  return (param_3 >> 8 & 0xff) << 8 | param_3 & 0xff |
         uVar1 << 0x18 | (param_3 >> 0x10 & 0xff) << 0x10;
}

