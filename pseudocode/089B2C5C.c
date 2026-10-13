/* Entry 0x089B2C5C | file offset 0x001AFC34 | FUN_089b2c5c | bytes 56 */

int FUN_089b2c5c(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  if (param_2 != (uint *)0x0) {
    if (uVar2 < uVar1) {
      return 0;
    }
    *param_2 = uVar1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = uVar2 - uVar1;
  }
  return uVar1 - param_1[1];
}

