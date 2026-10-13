/* Entry 0x08959AB8 | file offset 0x00156A90 | FUN_08959ab8 | bytes 60 */

undefined4
FUN_08959ab8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)*param_4;
  (**(code **)(iVar1 + 0x24))(*param_4 + (int)*(short *)(iVar1 + 0x20),param_3,param_5);
  return 1;
}

