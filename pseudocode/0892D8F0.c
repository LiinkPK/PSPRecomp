/* Entry 0x0892D8F0 | file offset 0x0012A8C8 | FUN_0892d8f0 | bytes 432 */

void FUN_0892d8f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = -1;
  iVar3 = -1;
  if (param_4 < 2) {
    if ((-1 < param_4) && (0 < param_4)) {
      iVar2 = 5;
      iVar3 = 6;
    }
  }
  else if (param_4 < 3) {
    iVar2 = 0x1b;
  }
  else if (param_4 < 4) {
    iVar2 = 0x18;
    iVar3 = 6;
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_0887ba5c(*(int *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (iVar2 != -1) {
    uVar1 = FUN_0887b3ec(param_2,param_3,0,iVar2,0,0);
    *(undefined4 *)(param_1 + 100) = uVar1;
    iVar2 = FUN_0887e534(uVar1);
    *(int *)(param_1 + 0x68) = iVar2;
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x800;
  }
  if (iVar3 != -1) {
    uVar1 = FUN_0887b3ec(param_2,param_3,0,iVar3,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    iVar2 = FUN_0887e534(uVar1);
    *(int *)(param_1 + 0x70) = iVar2;
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x800;
  }
  FUN_088d428c(param_1 + 0x30,param_1 + 0x44,&DAT_089cee20,1);
  return;
}

