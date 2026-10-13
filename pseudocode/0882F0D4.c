/* Entry 0x0882F0D4 | file offset 0x0002C0AC | FUN_0882f0d4 | bytes 168 */

void FUN_0882f0d4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_3 + 0x30) + 0x544);
  (**(code **)(iVar2 + 0x6c))(*(int *)(param_3 + 0x30) + (int)*(short *)(iVar2 + 0x68));
  *(short *)(param_3 + 0x50) = (short)param_4;
  uVar1 = FUN_0882fe28(param_3,param_4);
  iVar2 = FUN_08934944(uVar1,*(int *)(param_3 + 0x48) + 8,
                       *(undefined4 *)(*(int *)(param_3 + 0x48) + 4),8,&LAB_0882ef04);
  *(int *)(param_3 + 0x4c) = iVar2;
  FUN_0882ef10(param_1,param_2,param_3,*(undefined2 *)(iVar2 + 2));
  return;
}

