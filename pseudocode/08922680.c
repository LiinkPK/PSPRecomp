/* Entry 0x08922680 | file offset 0x0011F658 | FUN_08922680 | bytes 120 */

undefined4 * FUN_08922680(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[1] = param_2[1];
  uVar1 = param_2[4];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  param_1[3] = uVar3;
  uVar4 = param_2[6];
  param_1[4] = uVar1;
  uVar1 = param_2[7];
  param_1[5] = uVar2;
  uVar3 = param_2[8];
  param_1[6] = uVar4;
  uVar4 = param_2[9];
  param_1[7] = uVar1;
  uVar2 = param_2[10];
  param_1[8] = uVar3;
  uVar3 = param_2[0xb];
  param_1[9] = uVar4;
  uVar1 = param_2[0xc];
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar1;
  return param_1;
}

