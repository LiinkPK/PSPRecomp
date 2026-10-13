/* Entry 0x0891297C | file offset 0x0010F954 | FUN_0891297c | bytes 136 */

void FUN_0891297c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 + param_2 * 0xc;
  *param_3 = *(undefined4 *)(iVar1 + 0x1d8);
  param_3[1] = *(undefined4 *)(iVar1 + 0x1dc);
  uVar2 = *(undefined4 *)(iVar1 + 0x1e0);
  param_3[3] = 0x3f800000;
  param_3[2] = uVar2;
  *param_4 = *(undefined4 *)(iVar1 + 0x208);
  param_4[1] = *(undefined4 *)(iVar1 + 0x20c);
  uVar2 = *(undefined4 *)(iVar1 + 0x210);
  param_4[3] = 0x3f800000;
  param_4[2] = uVar2;
  *param_5 = (int)*(short *)(param_1 + param_2 * 2 + 0x238);
  *(bool *)param_6 = (*(byte *)(param_1 + param_2 + 0x1d4) & 1) != 0;
  return;
}

