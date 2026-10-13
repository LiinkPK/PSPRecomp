/* Entry 0x0893FF58 | file offset 0x0013CF30 | FUN_0893ff58 | bytes 324 */

void FUN_0893ff58(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = 0;
  do {
    puVar3 = (uint *)(param_1 + (uVar1 & 0x3c));
    if (0x3f < uVar1) {
      uVar2 = *puVar3 ^ *(uint *)(param_1 + (uVar1 + 8 & 0x3c)) ^
              *(uint *)(param_1 + (uVar1 + 0x20 & 0x3c)) ^
              *(uint *)(param_1 + (uVar1 + 0x34 & 0x3c));
      *puVar3 = uVar2 * 2 - ((int)uVar2 >> 0x1f);
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x140);
  return;
}

