/* Entry 0x088394B8 | file offset 0x00036490 | FUN_088394b8 | bytes 196 */

void FUN_088394b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x303) != '\0') {
    *(undefined1 *)(param_1 + 0x301) = 0;
    iVar2 = 0;
    iVar1 = param_1 + 0x180;
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
    *(undefined1 *)(param_1 + 0x303) = 0;
  }
  if (*(byte *)(param_1 + 0x301) < 6) {
    FUN_088395b8(param_1 + (uint)*(byte *)(param_1 + 0x301) * 0x40 + 0x180,param_2,param_3,param_4);
    *(char *)(param_1 + 0x301) = *(char *)(param_1 + 0x301) + '\x01';
  }
  return;
}

