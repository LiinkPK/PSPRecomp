/* Entry 0x08946A28 | file offset 0x00143A00 | FUN_08946a28 | bytes 52 */

uint FUN_08946a28(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_3 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)
                   (*(int *)(*(int *)(*(int *)(param_2 + 0x2c) + param_3 * 4) + 4) + param_4 * 4 + 2
                   );
  }
  return uVar1;
}

