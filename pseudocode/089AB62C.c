/* Entry 0x089AB62C | file offset 0x001A8604 | FUN_089ab62c | bytes 144 */

uint * FUN_089ab62c(int param_1,uint *param_2)

{
  uint *puVar1;
  
  if (param_2 != (uint *)0x0) {
    param_1 = param_1 * 0x18;
    puVar1 = *(uint **)(&DAT_089daef8 + param_1);
    if ((puVar1 == (uint *)0x0) || (puVar1 <= param_2)) {
      puVar1 = *(uint **)(&DAT_089daef4 + param_1);
    }
    else {
      if ((uint *)*puVar1 <= param_2) {
        return puVar1;
      }
      puVar1 = *(uint **)(&DAT_089daef4 + param_1);
    }
    while (puVar1 != (uint *)0x0) {
      if (param_2 < puVar1) {
        if ((uint *)*puVar1 <= param_2) {
          *(uint **)(&DAT_089daef8 + param_1) = puVar1;
          return puVar1;
        }
        puVar1 = (uint *)puVar1[2];
      }
      else {
        puVar1 = (uint *)puVar1[2];
      }
    }
  }
  return (uint *)0x0;
}

