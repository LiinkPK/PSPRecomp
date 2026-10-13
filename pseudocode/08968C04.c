/* Entry 0x08968C04 | file offset 0x00165BDC | FUN_08968c04 | bytes 96 */

void FUN_08968c04(undefined4 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_c = DAT_09b6f478;
  iVar1 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1,&local_10,1);
  if (iVar1 != 0) {
    local_c = local_c + (uint)*(ushort *)(*(int *)(*(int *)(local_c + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(local_c + 0xb4) = *(int *)(local_c + 0xb4) + local_10;
  }
  return;
}

