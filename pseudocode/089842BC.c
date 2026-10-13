/* Entry 0x089842BC | file offset 0x00181294 | FUN_089842bc | bytes 304 */

void FUN_089842bc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  param_1[5] = (int)&DAT_089dd210;
  local_10 = DAT_09b6f478;
  local_c = param_3;
  local_8 = param_1;
  iVar1 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),param_3 * param_2 * 0x20,&local_20,1);
  if (iVar1 != 0) {
    iVar3 = local_10 + (uint)*(ushort *)(*(int *)(*(int *)(local_10 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_20;
  }
  *local_8 = iVar1;
  local_14 = (undefined4 *)0x0;
  local_18 = DAT_09b6f478;
  puVar2 = (undefined4 *)FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),0xc,&local_1c,1);
  if (puVar2 != (undefined4 *)0x0) {
    local_18 = local_18 + (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(local_18 + 0xb4) = *(int *)(local_18 + 0xb4) + local_1c;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    local_14 = puVar2;
  }
  local_8[1] = (int)local_14;
  local_8[2] = local_c;
  local_8[3] = 0;
  local_8[4] = 0;
  return;
}

