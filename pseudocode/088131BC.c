/* Entry 0x088131BC | file offset 0x00010194 | FUN_088131bc | bytes 256 */

void FUN_088131bc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar1 = *(undefined1 *)(param_3 + 5);
  *(undefined1 *)(param_1 + 0x35) = uVar1;
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  FUN_08813010(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar2 = FUN_088132bc(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
    iVar4 = (int)*(short *)(param_2 + 0x28) + (int)*(short *)(*(int *)(param_1 + 0x30) + 0x10);
    if (*(int *)(param_1 + 0x20) == iVar2) {
      uVar3 = FUN_08813510(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),iVar4);
      *(undefined4 *)(param_1 + 0x38) = uVar3;
    }
    else {
      uVar3 = FUN_08813510(iVar2,*(undefined4 *)(param_1 + 0x24),iVar4);
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      uVar3 = FUN_08835778(*(undefined4 *)(param_1 + 0x20));
      iVar2 = FUN_088bf4cc(uVar3,0xfb);
      if (iVar2 != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x52c);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (int)*(short *)(iVar2 + 0x14);
        *(undefined2 *)(iVar2 + 0x14) = 0;
        FUN_0883f2a0(uVar3,0xfb);
      }
    }
  }
  return;
}

