/* Entry 0x08838D14 | file offset 0x00035CEC | FUN_08838d14 | bytes 184 */

void FUN_08838d14(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_2 + 0x394) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_2 + 0x394) + 0xf0), iVar1 == -1)) {
    uVar2 = *(undefined4 *)(param_2 + 0x84);
    uVar4 = *(undefined4 *)(param_2 + 0x88);
    uVar3 = *(undefined4 *)(param_2 + 0x8c);
    *param_1 = *(undefined4 *)(param_2 + 0x80);
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
  }
  else {
    FUN_088369a4(param_2,auStack_50,iVar1);
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
  }
  return;
}

