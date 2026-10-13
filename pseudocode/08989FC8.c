/* Entry 0x08989FC8 | file offset 0x00186FA0 | FUN_08989fc8 | bytes 104 */

int * FUN_08989fc8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_4;
  iVar2 = *(int *)(param_2 + 0x8c);
  uVar1 = *(ushort *)
           (*(int *)(*(int *)(param_2 + 0x90) + 8) + *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
  param_1[0xf] = 0;
  param_1[2] = iVar2 + (uint)uVar1 + 0x60;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}

