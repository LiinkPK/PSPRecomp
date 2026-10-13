/* Entry 0x088C7F3C | file offset 0x000C4F14 | FUN_088c7f3c | bytes 28 */

uint FUN_088c7f3c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 | 0x8000;
  if (param_1 != 0) {
    uVar1 = param_2 | 0xa000;
  }
  return uVar1;
}

