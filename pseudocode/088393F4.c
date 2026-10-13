/* Entry 0x088393F4 | file offset 0x000363CC | FUN_088393f4 | bytes 196 */

void FUN_088393f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x302) != '\0') {
    *(undefined1 *)(param_1 + 0x300) = 0;
    iVar2 = 0;
    iVar1 = param_1;
    do {
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined2 *)(iVar1 + 0x30) = 0;
      *(undefined2 *)(iVar1 + 0x32) = 100;
      *(undefined1 *)(iVar1 + 0x34) = 0;
      *(undefined1 *)(iVar1 + 0x35) = 0;
      *(undefined2 *)(iVar1 + 0x36) = 0xffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x40;
    } while (iVar2 < 6);
    *(undefined1 *)(param_1 + 0x302) = 0;
  }
  if (*(byte *)(param_1 + 0x300) < 6) {
    FUN_088395b8(param_1 + (uint)*(byte *)(param_1 + 0x300) * 0x40,param_2,param_3,param_4);
    *(char *)(param_1 + 0x300) = *(char *)(param_1 + 0x300) + '\x01';
  }
  return;
}

