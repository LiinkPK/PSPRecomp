/* Entry 0x0890C640 | file offset 0x00109618 | FUN_0890c640 | bytes 368 */

void FUN_0890c640(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0890d3a8();
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_0890c6e4;
    }
    iVar1 = 0;
    iVar2 = param_1 + 0x380;
    do {
      *(undefined4 *)(iVar2 + 0xec) = 0;
      *(undefined4 *)(iVar2 + 0xf0) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xf4;
    } while (iVar1 < 2);
    FUN_0890d3fc(param_1 + 0x35c);
    *(undefined4 *)(param_1 + 0x568) = 0;
  }
  else {
    if (1 < iVar1) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_0890c6e4;
    }
    iVar1 = 0;
    iVar2 = param_1 + 0x35c;
    do {
      *(undefined4 *)(iVar2 + 0xec) = 0;
      *(undefined4 *)(iVar2 + 0xf0) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xf4;
    } while (iVar1 < 2);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
LAB_0890c6e4:
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x10) = 3;
  iVar1 = 0;
  iVar2 = param_1 + 0x4c;
  if (0 < *(int *)(param_1 + 0x354)) {
    do {
      FUN_0890d3fc(iVar2 + 8);
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      *(undefined4 *)(iVar2 + 0x50) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x54;
    } while (iVar1 < *(int *)(param_1 + 0x354));
  }
  iVar1 = 0;
  iVar2 = param_1 + 0xf4;
  if (0 < *(int *)(param_1 + 0x358)) {
    do {
      *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x40) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (iVar1 < *(int *)(param_1 + 0x358));
  }
  FUN_088720b4(1);
  FUN_088720e4();
  return;
}

