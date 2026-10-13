/* Entry 0x08925424 | file offset 0x001223FC | FUN_08925424 | bytes 152 */

void FUN_08925424(uint *param_1,char param_2)

{
  uint uVar1;
  
  if ((*param_1 & 2) != 0 || param_2 != '\0') {
    *param_1 = *param_1 & 0xfffffffd;
    uVar1 = param_1[1];
    if ((*(char *)(uVar1 + 0xd) < '\x02') && ('\0' < *(char *)(uVar1 + 0xd))) {
      FUN_08925778(param_1);
      uVar1 = param_1[1];
    }
    if (*(int *)(uVar1 + 0x24) != 0) {
      func_0x08b43e78();
    }
  }
  return;
}

