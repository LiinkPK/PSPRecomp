/* Entry 0x089A3978 | file offset 0x001A0950 | FUN_089a3978 | bytes 60 */

uint * FUN_089a3978(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  *param_1 = *param_2 ^ 0x80000000;
  param_1[1] = uVar1 ^ 0x80000000;
  param_1[2] = uVar3 ^ 0x80000000;
  param_1[3] = uVar2 ^ 0x80000000;
  return param_1;
}

