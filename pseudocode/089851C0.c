/* Entry 0x089851C0 | file offset 0x00182198 | FUN_089851c0 | bytes 116 */

undefined4 * FUN_089851c0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = *(undefined4 *)(param_2 + 0x34);
  param_1[3] = (float)*(byte *)(param_2 + 0x5c);
  param_1[4] = *(undefined4 *)(param_2 + 0x38);
  param_1[5] = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = *(undefined4 *)(param_2 + 0x2c);
  param_1[7] = *(undefined4 *)(param_2 + 0x20);
  param_1[8] = *(undefined4 *)(param_2 + 0x24);
  param_1[9] = *(undefined4 *)(param_2 + 0x30);
  param_1[10] = (uint)*(ushort *)(param_2 + 0x4e);
  uVar1 = *(ushort *)(param_2 + 0x50);
  param_1[0xc] = param_2;
  param_1[0xb] = (uint)uVar1;
  param_1[0xd] = param_2 + 0x10;
  return param_1;
}

