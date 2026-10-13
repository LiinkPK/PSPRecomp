/* Entry 0x0881276C | file offset 0x0000F744 | FUN_0881276c | bytes 56 */

void FUN_0881276c(uint *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_3 + 5);
  param_1[3] = param_3;
  *param_1 = (uint)bVar1;
  param_1[1] = *(uint *)(param_3 + 0x18);
  param_1[2] = *(uint *)(param_3 + 0x1c);
  FUN_089a34c0(param_1 + 4);
  return;
}

