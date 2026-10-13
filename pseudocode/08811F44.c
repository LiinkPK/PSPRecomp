/* Entry 0x08811F44 | file offset 0x0000EF1C | FUN_08811f44 | bytes 104 */

uint FUN_08811f44(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x10;
  uVar1 = uVar2 + *(int *)(param_1 + 8) * 0x20;
  if (param_3 != 0) {
    uVar2 = param_3 + 0x20;
  }
  while( true ) {
    if (uVar1 <= uVar2) {
      return 0;
    }
    if (param_2 == 0x12) break;
    if (*(byte *)(uVar2 + 4) == param_2) {
      return uVar2;
    }
    uVar2 = uVar2 + 0x20;
  }
  return uVar2;
}

