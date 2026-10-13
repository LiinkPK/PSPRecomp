/* Entry 0x089A1DB4 | file offset 0x0019ED8C | FUN_089a1db4 | bytes 144 */

void FUN_089a1db4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = param_3 & 0xffffff;
  if ((param_2 & 1) != 0) {
    puVar2 = *(uint **)(param_1 + 8);
    *puVar2 = uVar1 | 0x55000000;
    *(uint **)(param_1 + 8) = puVar2 + 2;
    puVar2[1] = param_3 >> 0x18 | 0x58000000;
  }
  if ((param_2 & 2) != 0) {
    puVar2 = *(uint **)(param_1 + 8);
    *puVar2 = uVar1 | 0x56000000;
    *(uint **)(param_1 + 8) = puVar2 + 1;
  }
  if ((param_2 & 4) != 0) {
    puVar2 = *(uint **)(param_1 + 8);
    *puVar2 = uVar1 | 0x57000000;
    *(uint **)(param_1 + 8) = puVar2 + 1;
  }
  return;
}

