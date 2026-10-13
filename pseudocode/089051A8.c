/* Entry 0x089051A8 | file offset 0x00102180 | FUN_089051a8 | bytes 48 */

void FUN_089051a8(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  (**(code **)(iVar1 + 0xc))(*param_1 + (int)*(short *)(iVar1 + 8));
  return;
}

