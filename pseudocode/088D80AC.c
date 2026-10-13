/* Entry 0x088D80AC | file offset 0x000D5084 | FUN_088d80ac | bytes 516 */

undefined4 FUN_088d80ac(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_088d82b0();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0xc) == 1) && (*(char *)(param_1 + 0x20) == '\x01')) {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
      return 0xfffffffe;
    }
    bVar1 = *(char *)(param_1 + 0x21) != '\0';
    if (bVar1) {
      uVar5 = 0x40;
      uVar6 = 0;
    }
    else {
      uVar5 = 0x20;
      uVar6 = 4;
    }
    iVar3 = (int)*(short *)(*(int *)(iVar2 + 0x34) + 0x10);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x34) + 0x14))(iVar2 + iVar3,iVar3,0x10,0);
    if (iVar2 == 1) {
      *(int *)(param_1 + 0x14) =
           (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) + -1) % *(int *)(param_1 + 0x1c);
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_088d3508(0);
      }
      iVar2 = *(int *)(param_1 + 0x18);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x18);
    }
    pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
    iVar2 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,uVar5,0);
    if ((iVar2 == 1) &&
       (*(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0x14) + 1) % *(int *)(param_1 + 0x1c),
       *(char *)(param_1 + 8) == '\0')) {
      FUN_088d3508(0);
    }
    iVar2 = FUN_088d9498(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
    if (iVar2 == 0) {
      return 0xfffffffd;
    }
    iVar2 = FUN_088d8e20();
    if ((iVar2 == 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x34), pcVar4 = *(code **)(iVar2 + 0x14),
       iVar2 = (*pcVar4)(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x10),pcVar4,uVar6,bVar1
                        ), iVar2 == 1)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
  }
  return 0;
}

