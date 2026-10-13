/* Entry 0x08863104 | file offset 0x000600DC | FUN_08863104 | bytes 68 */

void FUN_08863104(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 0x2c))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0x28),param_1,param_2,param_3);
  return;
}

