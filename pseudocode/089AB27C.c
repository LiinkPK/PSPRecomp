/* Entry 0x089AB27C | file offset 0x001A8254 | FUN_089ab27c | bytes 56 */

uint FUN_089ab27c(char *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (*param_1 != '\0')) {
    uVar1 = 1;
    while ((param_1 = param_1 + 1, uVar1 < param_2 && (*param_1 != '\0'))) {
      uVar1 = uVar1 + 1;
    }
  }
  return uVar1;
}

