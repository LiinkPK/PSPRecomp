/* Entry 0x088BCE48 | file offset 0x000B9E20 | FUN_088bce48 | bytes 52 */

void FUN_088bce48(short param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  *param_2 = (int)-param_1 & 0xff;
  uVar1 = (int)-param_1 >> 8 & 0xff;
  *param_3 = uVar1;
  *param_3 = uVar1 - 0x20;
  return;
}

