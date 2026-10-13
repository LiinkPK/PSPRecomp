/* Entry 0x08835468 | file offset 0x00032440 | FUN_08835468 | bytes 324 */

void FUN_08835468(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_08842100(0x778);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_088cb9e8(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x30c) = iVar2;
  iVar1 = 0;
  iVar3 = 0xef;
  do {
    uVar4 = ((undefined4 *)(param_2 + iVar1))[1];
    *(undefined4 *)(iVar2 + iVar1) = *(undefined4 *)(param_2 + iVar1);
    ((undefined4 *)(iVar2 + iVar1))[1] = uVar4;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 8;
  } while (iVar3 != 0);
  iVar1 = FUN_088312d0(param_1,0x634);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0883f014(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x310) = iVar2;
  FUN_088bf238(iVar2,*(undefined4 *)(param_1 + 0x30c),param_3);
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

