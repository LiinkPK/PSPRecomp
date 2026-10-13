/* Entry 0x089A39B4 | file offset 0x001A098C | FUN_089a39b4 | bytes 56 */

uint * FUN_089a39b4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2[3];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2 & 0x7fffffff;
  param_1[1] = uVar1 & 0x7fffffff;
  param_1[2] = uVar2 & 0x7fffffff;
  param_1[3] = uVar3 & 0x7fffffff;
  return param_1;
}

