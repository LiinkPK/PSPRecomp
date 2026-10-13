/* Entry 0x0899C764 | file offset 0x0019973C | FUN_0899c764 | bytes 332 */

undefined4 FUN_0899c764(int param_1,int *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *local_30 [4];
  
  puVar3 = (uint *)0xfffffffc;
  local_30[0] = (uint *)*param_2;
  if (param_3 != (uint *)0x0) {
    puVar3 = (uint *)((int)local_30[0] + (*param_3 & 0xfffffffc));
  }
  if (param_1 == 0) {
    iVar1 = FUN_0899c8b0(0,local_30,puVar3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    param_4 = 0;
  }
  if ((param_4 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if (uVar2 == 0) {
      iVar1 = FUN_0899c944(param_1,local_30,puVar3,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      if (puVar3 < local_30[0] + 2) {
        return 0;
      }
      local_30[0][1] = uVar2 & 0xffffff | 0xa000000;
      *local_30[0] = ((uVar2 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      local_30[0] = local_30[0] + 2;
    }
  }
  if (((param_4 & 2) != 0) && (iVar1 = FUN_0899d014(param_1,local_30,puVar3,param_4), iVar1 == 0)) {
    return 0;
  }
  *param_2 = (int)local_30[0];
  if (param_3 != (uint *)0x0) {
    *param_3 = (int)puVar3 - (int)local_30[0];
  }
  return 1;
}

