/* Entry 0x0898514C | file offset 0x00182124 | FUN_0898514c | bytes 116 */

int * FUN_0898514c(int *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = *(int *)(param_2 + 0x34);
  param_1[3] = (int)(float)*(byte *)(param_2 + 0x43);
  param_1[4] = *(int *)(param_2 + 0x38);
  param_1[5] = *(int *)(param_2 + 0x28);
  param_1[6] = *(int *)(param_2 + 0x2c);
  param_1[7] = *(int *)(param_2 + 0x20);
  param_1[8] = *(int *)(param_2 + 0x24);
  param_1[9] = *(int *)(param_2 + 0x30);
  param_1[10] = (uint)*(ushort *)(param_2 + 0x3e);
  uVar1 = *(ushort *)(param_2 + 0x40);
  param_1[0xc] = param_2;
  param_1[0xb] = (uint)uVar1;
  param_1[0xd] = param_2 + 0x10;
  return param_1;
}

