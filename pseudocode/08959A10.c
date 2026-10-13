/* Entry 0x08959A10 | file offset 0x001569E8 | FUN_08959a10 | bytes 56 */

void FUN_08959a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)*param_4;
  (**(code **)(iVar1 + 0x1c))(*param_4 + (int)*(short *)(iVar1 + 0x18),param_3,param_5);
  return;
}

