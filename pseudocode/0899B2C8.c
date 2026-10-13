/* Entry 0x0899B2C8 | file offset 0x001982A0 | FUN_0899b2c8 | bytes 60 */

undefined4 FUN_0899b2c8(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_4 <= param_2) {
    uVar1 = 2;
    if (param_2 <= param_4) {
      uVar1 = 0;
      if ((param_3 <= param_1) && (uVar1 = 2, param_1 <= param_3)) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

