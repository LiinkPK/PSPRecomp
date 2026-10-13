/* Entry 0x08959F70 | file offset 0x00156F48 | FUN_08959f70 | bytes 248 */

undefined4 FUN_08959f70(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int *local_14;
  int local_10;
  int local_c;
  
  local_14 = param_4;
  local_10 = param_3;
  local_c = param_2;
  local_18 = (undefined4 *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),0xc,&local_20,1);
  if (local_18 != (undefined4 *)0x0) {
    iVar1 = local_c + (uint)*(ushort *)(*(int *)(*(int *)(local_c + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) + local_20;
  }
  *local_14 = (int)local_18;
  if (local_18 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(local_10 + 0x10);
    *local_18 = uVar2;
    local_18[1] = uVar2;
    iVar1 = FUN_08971134(*(undefined4 *)(local_c + 0x18),0xc,&local_1c,1);
    uVar2 = 1;
    if (iVar1 != 0) {
      local_c = local_c + (uint)*(ushort *)(*(int *)(*(int *)(local_c + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(local_c + 0xb4) = *(int *)(local_c + 0xb4) + local_1c;
    }
    local_18[2] = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

