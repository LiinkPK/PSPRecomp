/* Entry 0x08813010 | file offset 0x0000FFE8 | FUN_08813010 | bytes 224 */

void FUN_08813010(int param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x70);
  (**(code **)(iVar1 + 0x1c))
            (&local_30,*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x18),
             *(undefined4 *)(param_1 + 0x24));
  local_40 = local_30;
  local_3c = local_2c;
  local_38 = local_28;
  local_34 = local_24;
  FUN_089a3868(param_1,&local_40);
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x70);
  (**(code **)(iVar1 + 0x24))(&local_20,*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x20));
  local_40 = local_20;
  local_3c = local_1c;
  local_38 = local_18;
  local_34 = local_14;
  FUN_089a3868(param_1 + 0x10,&local_40);
  return;
}

