/* Entry 0x088FD314 | file offset 0x000FA2EC | FUN_088fd314 | bytes 432 */

void FUN_088fd314(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = iVar2 + *(int *)(iVar2 + 0x10a4) * 0x1c;
  if (*(int *)(iVar2 + 0xf30) != 0) {
    FUN_0887ba5c(*(int *)(iVar2 + 0xf30));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf30) = 0;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  uVar1 = FUN_0887b3ec(*(undefined4 *)(iVar2 + 0xedc),*(undefined4 *)(iVar2 + 0xee0),0,
                       (int)*(short *)(iVar3 + *(int *)(iVar2 + 0x10ec) * 2 + 0x24),0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf30) = uVar1;
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar2 + 0xf34) != 0) {
    FUN_0887ba5c(*(int *)(iVar2 + 0xf34));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf34) = 0;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  if (1 < *(short *)(iVar3 + 0x20)) {
    uVar1 = FUN_0887e534(*(undefined4 *)(iVar2 + *(int *)(iVar2 + 0x10ec) * 4 + 0xf40));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf34) = uVar1;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  FUN_088d428c(iVar2 + 0xa5c,iVar2 + 0xef0,&DAT_089ccfd4,1);
  **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 8;
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(short *)(iVar3 + 0x20) < 2) {
    FUN_0887b944(*(undefined4 *)(iVar2 + 0xf3c));
    FUN_088d9cfc(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab4));
    FUN_088d9cfc(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab8));
  }
  else if (*(int *)(iVar2 + 0x10ec) == 0) {
    FUN_088d9cfc(*(undefined4 *)(iVar2 + 0xab4));
    FUN_088d9cd8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab8));
  }
  else if (*(int *)(iVar2 + 0x10ec) == *(int *)(iVar2 + 0x10f4)) {
    FUN_088d9cfc(*(undefined4 *)(iVar2 + 0xab8));
    FUN_088d9cd8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab4));
  }
  else {
    FUN_088d9cd8(*(undefined4 *)(iVar2 + 0xab4));
    FUN_088d9cd8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab8));
  }
  return;
}

