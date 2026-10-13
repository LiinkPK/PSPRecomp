/* Entry 0x088828BC | file offset 0x0007F894 | FUN_088828bc | bytes 148 */

void FUN_088828bc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == *(int *)(param_1 + 0x14)) {
    if (param_2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  if (*(int *)(param_2 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x34);
    uVar1 = *(undefined4 *)(param_2 + 0x38);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x38) + 0x34) = *(undefined4 *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x34);
    uVar1 = *(undefined4 *)(param_2 + 0x38);
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x38) = uVar1;
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  FUN_088822e0();
  return;
}

