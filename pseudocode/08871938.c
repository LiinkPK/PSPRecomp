/* Entry 0x08871938 | file offset 0x0006E910 | FUN_08871938 | bytes 128 */

void FUN_08871938(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[1] + 0x154);
  (**(code **)(iVar2 + 0x2c))
            (param_1[1] + (int)*(short *)(iVar2 + 0x28),PTR_s_package_info_bin_089d5fec,0x9b26bc0,
             0x20f8c);
  iVar2 = *(int *)(param_1[1] + 0x154);
  uVar1 = (**(code **)(iVar2 + 0xbc))
                    (param_1[1] + (int)*(short *)(iVar2 + 0xb8),PTR_s_package_bin_089d5fe8);
  *param_1 = uVar1;
  return;
}

