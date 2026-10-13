/* Entry 0x089254E0 | file offset 0x001224B8 | FUN_089254e0 | bytes 136 */

void FUN_089254e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_089a3528(&local_28,*(undefined4 *)(param_1 + 4),param_2);
  local_34 = local_28;
  local_30 = local_24;
  local_2c = local_20;
  local_40 = local_28;
  local_3c = local_24;
  local_38 = local_20;
  uVar1 = FUN_089a37dc(&local_40);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = uVar1;
  return;
}

