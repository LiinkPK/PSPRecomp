/* Entry 0x089A78E0 | file offset 0x001A48B8 | FUN_089a78e0 | bytes 464 */

int FUN_089a78e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30 [4];
  
  uVar7 = FUN_089a92c4();
  FUN_089a9630(param_1,((int)uVar7 - *(int *)(param_1 + 0x168)) + -8);
  iVar1 = FUN_089a7494(param_1);
  iVar2 = FUN_089a749c(param_1);
  iVar3 = FUN_089a74a4(param_1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    iVar1 = FUN_089a7494(param_1);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x60);
  }
  iVar4 = *(int *)(iVar1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x168);
  uVar6 = *(undefined4 *)(param_1 + 0x16c);
  *(int *)(iVar1 + 0x10) = iVar4 + *(int *)(param_1 + 0x50);
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + *(int *)(param_1 + 0x50);
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + *(int *)(param_1 + 0x50);
  FUN_089a9278(param_1,iVar4,uVar5,uVar6,0);
  iVar1 = FUN_089a7e94(param_1);
  if (iVar1 == 0) {
    local_3c = *(undefined4 *)(param_1 + 0x80);
    local_40 = 0x5453494c;
    iVar2 = FUN_089a9470(param_1,&local_40);
    iVar1 = -0x7f99ffff;
    if (iVar2 == 0) {
      uVar8 = FUN_089a92c4(param_1);
      *(undefined8 *)(param_1 + 0x78) = uVar8;
      local_30[0] = 0x69766f6d;
      iVar2 = FUN_089a92d0(param_1,local_30);
      iVar1 = -0x7f99ffff;
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x168) = uVar7;
        FUN_089a9278(param_1);
        *(undefined4 *)(param_1 + 0x50) = 0;
        iVar1 = 0;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
    }
  }
  return iVar1;
}

