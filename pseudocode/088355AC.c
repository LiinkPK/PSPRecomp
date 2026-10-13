/* Entry 0x088355AC | file offset 0x00032584 | FUN_088355ac | bytes 284 */

void FUN_088355ac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08842100(0x778);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_088cb9e8(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x30c) = iVar2;
  FUN_088bbab4(iVar2,param_2,0xffffffff,0xffffffff);
  iVar1 = FUN_088312d0(param_1,0x634);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0883f014(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x310) = iVar2;
  FUN_088bf238(iVar2,*(undefined4 *)(param_1 + 0x30c),0);
  iVar1 = FUN_088312d0(param_1,0x2c);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_08842954(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x52c) = iVar2;
  FUN_088429a4(iVar2,*(undefined4 *)(param_1 + 0x30c));
  (**(code **)(*(int *)(param_1 + 0x544) + 0x8c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x88));
  FUN_08842a5c(*(undefined4 *)(param_1 + 0x52c),*(undefined4 *)(param_1 + 0x30c),
               *(undefined4 *)(param_1 + 0x310));
  (**(code **)(*(int *)(param_1 + 0x544) + 0x94))
            (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x90));
  return;
}

