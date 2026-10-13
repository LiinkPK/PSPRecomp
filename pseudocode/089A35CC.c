/* Entry 0x089A35CC | file offset 0x001A05A4 | FUN_089a35cc | bytes 44 */

uint * FUN_089a35cc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2 & 0x7fffffff;
  param_1[1] = uVar1 & 0x7fffffff;
  param_1[2] = uVar2 & 0x7fffffff;
  return param_1;
}

