/* Entry 0x088B3B60 | file offset 0x000B0B38 | FUN_088b3b60 | bytes 48 */

uint FUN_088b3b60(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + param_2 * 2);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

