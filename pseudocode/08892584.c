/* Entry 0x08892584 | file offset 0x0008F55C | FUN_08892584 | bytes 476 */

void FUN_08892584(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x6b2) != '\0')) {
    if (*(int *)(param_1 + 0x4d0) == -1) {
      FUN_089a0384(0x15);
      FUN_089a123c(1,0x80,0x80);
      FUN_089a1270(0,0,2);
      FUN_089a0384(3);
      if (*(char *)(param_1 + 0x610) != '\0') {
        FUN_08895388(param_1 + 0x4e0);
      }
      FUN_0886accc(*(undefined4 *)(param_1 + 0x74),param_1 + 0x10,0);
      FUN_089a03dc(3);
      FUN_089a03dc(0x15);
      iVar1 = *(int *)(param_1 + 0x74);
    }
    else {
      FUN_089a03dc(0x15);
      FUN_08895388(param_1 + *(int *)(param_1 + 0x4d0) * 0x130 + 0x140);
      iVar1 = *(int *)(param_1 + 0x74);
    }
  }
  if (((iVar1 != 0) && (*(char *)(param_1 + 0x6b2) != '\0')) && (*(int *)(param_1 + 0x4d0) == -1)) {
    FUN_08866ba8(DAT_089d5ec0);
    FUN_089a25c0();
    FUN_089a0e20(0,1);
    FUN_089a0e60(0,0);
    FUN_089a0384(10);
    FUN_089a03dc(0xb);
    FUN_089a03dc(0xc);
    FUN_089a03dc(0xd);
    FUN_089a03dc(0xe);
    FUN_089a0c20(0xff808080);
    FUN_0899ffc8(1);
    FUN_089a123c(1,0x80,0x80);
    FUN_089a1270(0,0,2);
    FUN_089a0384(3);
    FUN_089a0384(0x15);
    if (*(char *)(param_1 + 0x6b4) == '\x01') {
      FUN_0889245c(param_1,2);
    }
    FUN_089a03dc(0x15);
    FUN_089a03dc(3);
    FUN_089a0c20(0xffffffff);
  }
  return;
}

