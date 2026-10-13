/* Entry 0x0898D440 | file offset 0x0018A418 | FUN_0898d440 | bytes 108 */

void FUN_0898d440(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  local_c = DAT_09b6f478;
  iVar1 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1,&local_10,1);
  if (iVar1 != 0) {
    local_c = local_c + (uint)*(ushort *)(*(int *)(*(int *)(local_c + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(local_c + 0xb4) = *(int *)(local_c + 0xb4) + local_10;
  }
  return;
}

