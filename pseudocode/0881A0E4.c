/* Entry 0x0881A0E4 | file offset 0x000170BC | FUN_0881a0e4 | bytes 64 */

undefined4 FUN_0881a0e4(uint *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = *param_1 & 0xfff9ffff;
    param_1[1] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

