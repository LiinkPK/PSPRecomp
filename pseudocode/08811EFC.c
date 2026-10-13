/* Entry 0x08811EFC | file offset 0x0000EED4 | FUN_08811efc | bytes 72 */

uint FUN_08811efc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + 0x10;
  uVar2 = uVar1 + *(int *)(param_1 + 8) * 0x20;
  while( true ) {
    if (uVar2 <= uVar1) {
      return 0;
    }
    if (*(byte *)(uVar1 + 4) == param_2) break;
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

