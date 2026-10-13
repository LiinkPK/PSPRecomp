/* Entry 0x088F8D34 | file offset 0x000F5D0C | FUN_088f8d34 | bytes 224 */

void FUN_088f8d34(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088cba10(param_1);
  FUN_088f4b68(param_1 + 0x778);
  FUN_088f9428(param_1 + 0x85c);
  FUN_088f944c(param_1 + 0x870);
  FUN_088f93e8(param_1 + 0xa74);
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + iVar1 + 0xa8c) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 600);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0xce4) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x14);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0xd34) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x80);
  *(undefined2 *)(param_1 + 0xf34) = 0;
  *(undefined2 *)(param_1 + 0xf36) = 0xffff;
  *(undefined2 *)(param_1 + 0xf38) = 0xffff;
  *(undefined2 *)(param_1 + 0xf3a) = 0xffff;
  *(undefined2 *)(param_1 + 0xf3c) = 0xffff;
  *(undefined2 *)(param_1 + 0xf3e) = 0xffff;
  FUN_088c01c0(param_1 + 0xf40);
  *(undefined1 *)(param_1 + 0x1058) = 0xff;
  *(undefined1 *)(param_1 + 0x1059) = 1;
  *(undefined1 *)(param_1 + 0x105a) = 0xff;
  *(undefined1 *)(param_1 + 0x105b) = 1;
  *(undefined4 *)(param_1 + 0x105c) = 0;
  return;
}

