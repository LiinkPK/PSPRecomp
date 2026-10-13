/* Entry 0x08959A48 | file offset 0x00156A20 | FUN_08959a48 | bytes 52 */

void FUN_08959a48(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)*param_4;
  (**(code **)(iVar1 + 0x14))(*param_4 + (int)*(short *)(iVar1 + 0x10),param_3);
  return;
}

