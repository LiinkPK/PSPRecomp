/* Entry 0x0892538C | file offset 0x00122364 | FUN_0892538c | bytes 152 */

void FUN_0892538c(uint *param_1,char param_2)

{
  uint uVar1;
  
  if (((*param_1 & 2) == 0) || (param_2 != '\0')) {
    *param_1 = *param_1 | 2;
    uVar1 = param_1[1];
    if ((*(char *)(uVar1 + 0xd) < '\x02') && ('\0' < *(char *)(uVar1 + 0xd))) {
      FUN_08925704(param_1);
      uVar1 = param_1[1];
    }
    if (*(int *)(uVar1 + 0x24) != 0) {
      func_0x08b43e68();
    }
  }
  return;
}

