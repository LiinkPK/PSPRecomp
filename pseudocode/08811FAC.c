/* Entry 0x08811FAC | file offset 0x0000EF84 | FUN_08811fac | bytes 104 */

uint FUN_08811fac(int param_1,uint param_2,int param_3)

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
    if ((param_2 & 1 << (*(byte *)(uVar2 + 4) & 0x1f)) != 0) break;
    uVar2 = uVar2 + 0x20;
  }
  return uVar2;
}

