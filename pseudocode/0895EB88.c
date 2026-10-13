/* Entry 0x0895EB88 | file offset 0x0015BB60 | FUN_0895eb88 | bytes 212 */

undefined4 * FUN_0895eb88(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &DAT_089dbfc0;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  param_1[8] = param_2[4];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  param_1[0xb] = uVar2;
  uVar1 = param_2[9];
  uVar3 = param_2[10];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[8];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  return param_1;
}

