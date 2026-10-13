/* Entry 0x088348C8 | file offset 0x000318A0 | FUN_088348c8 | bytes 56 */

void FUN_088348c8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
  (**(code **)(iVar1 + 0x2c))
            (*(int *)(param_1 + 0x3a4) + (int)*(short *)(iVar1 + 0x28),param_1,param_2);
  return;
}

