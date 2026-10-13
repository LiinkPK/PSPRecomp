/* Entry 0x08806A34 | file offset 0x00003A0C | FUN_08806a34 | bytes 232 */

void FUN_08806a34(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x394) + 0xbc);
  if (iVar1 < 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x84);
    uVar4 = *(undefined4 *)(param_2 + 0x88);
    uVar3 = *(undefined4 *)(param_2 + 0x8c);
    *param_1 = *(undefined4 *)(param_2 + 0x80);
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
  }
  else {
    uVar2 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x394) + 0x84) + 8),iVar1);
    iVar1 = FUN_089b1224(uVar2);
    FUN_089a3868(&local_20,iVar1 + 0x30);
    FUN_089a3f40(&local_20,param_2,&local_20);
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
  }
  return;
}

