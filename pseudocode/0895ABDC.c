/* Entry 0x0895ABDC | file offset 0x00157BB4 | FUN_0895abdc | bytes 200 */

undefined4 FUN_0895abdc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_2[6];
  param_1[8] = param_2[4];
  param_1[9] = uVar2;
  param_1[10] = uVar1;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  param_1[0xc] = param_2[8];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  uVar1 = param_2[3];
  param_1[0x11] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[7];
  param_1[0x13] = param_2[0xb];
  return 1;
}

